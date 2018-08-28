(define (domain hospital)
  (:requirements :typing :fluents)

  (:types bed patient specialty birthType type gender care origin bedTypePatient stay age)

  (:predicates 
    (bedSpecialty ?bed - bed ?specialty - specialty) ;UTI, Obstetrics, UCL, AVC, Psychiatry, BariatricSurgery, Gynecology...
    (bedBirthType ?bed - bed ?birthType - birthType) ;childbirth or abortion
    (bedAge ?bed - bed ?type - type) ;adult, teenager, child
    (bedGender ?bed - bed ?gender - gender) ;male, female
    (bedCare ?bed - bed ?care - care) ;minimum, semiIntensive, intensive
    (bedOrigin ?bed - bed ?origin - origin) ;elective, emergency
    (bedType ?bed - bed ?bedTypePatient - bedTypePatient) ;clinical, surgical
    (bedStay ?bed - bed ?stay - stay) ;QuickTurn, LongStay

    (bed ?bed - bed)
    (bedfree ?bed - bed)
    (busyBed ?bed - bed)
    (patient ?patient - patient)
    (in ?patient - patient ?bed - bed)
    (do-not-allocate ?patient - patient)
    (isolation ?patient - patient)
    (allocated ?patient - patient)
    (uti ?patient - patient)

    (specialty ?patient - patient ?specialty - specialty) ;UTI, Obstetrics, UCL, AVC, Psychiatry, BariatricSurgery, Gynecology...
    (birth ?patient - patient ?birthType - birthType) ;childbirth or abortion
    (age ?patient - patient ?age - age) ;number
    (gender ?patient - patient ?gender - gender) ;male, female
    (care ?patient - patient ?care - care) ;minimum, semiIntensive, intensive
    (origin ?patient - patient ?origin - origin) ;elective, emergency
    (bedTypePatient ?patient - patient ?bedTypePatient - bedTypePatient) ;clinical, surgical
    (stay ?patient - patient ?stay - stay); QuickTurn, LongStay
  )

  ;(:functions 
    ;(temperature ?w - water)
  ;)

  (:action allocateBed
    :parameters (?patient - patient)
    :precondition (and (uti ?patient)
                       (not (allocated ?patient)))
    :effect (and (do-not-allocate ?patient))
  )
)