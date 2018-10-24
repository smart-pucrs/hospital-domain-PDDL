(define (domain hospitaldomain)
  (:requirements :fluents :continuous-effects :negative-preconditions :duration-inequalities :time :typing)
  (:types bed patient specialty birthtype type gender care origin bedtype stay age)
  (:predicates 
    ;(bedspecialty ?bed - bed ?specialty - specialty) ;UTI, Obstetrics, UCL, AVC, Psychiatry, BariatricSurgery, Gynecology...
    ;(bedbirthtype ?bed - bed ?birthtype - birthtype) ;childbirth or abortion
    (bedchildbirth ?bed - bed)
    
    ; (bedage ?bed - bed ?type - type) ;adult, teenager, child
    ; (bedgender ?bed - bed ?gender - gender) ;male, female
     ;(bedcare ?bed - bed ?care - care) ;minimum, semiIntensive, intensive
    ; (bedorigin ?bed - bed ?origin - origin) ;elective, emergency
    ; (bedtype ?bed - bed ?bedtype - bedtype) ;clinical, surgical
    ; (bedstay ?bed - bed ?stay - stay) ;QuickTurn, LongStay

    ; (bed ?bed - bed)
    (bedfree ?bed - bed)
    (busybed ?bed - bed)
    ; (patient ?patient - patient)
    (in ?patient - patient ?bed - bed)
    (donotallocate ?patient - patient)
    (isolation ?patient - patient)
    (bedisolation ?bed - bed)
    (allocated ?patient - patient)
    (uti ?patient - patient)
    (bedObstetrics ?bed - bed)
    (Obstetrics ?patient - patient)
    ;(specialty ?patient - patient ?specialty - specialty) ;UTI, Obstetrics, UCL, AVC, Psychiatry, BariatricSurgery, Gynecology...
    ;(birth ?patient - patient ?birthtype - birthtype) ;childbirth or abortion
    (patientchildbirth ?patient - patient)
    ; (age ?patient - patient ?age - age) ;number
    ; (gender ?patient - patient ?gender - gender) ;male, female
    ;(care ?patient - patient ?care - care) ;minimum, semiIntensive, intensive
    ; (origin ?patient - patient ?origin - origin) ;elective, emergency
    ; (bedtypepatient ?patient - patient ?bedtype - bedtype) ;clinical, surgical
    ; (stay ?patient - patient ?stay - stay); QuickTurn, LongStay
    (MedicinaInterna ?patient - patient)
    (bedMedicinaInterna ?bed - bed)
  
  )

  (:functions (maxspeed ?patient - patient) (speed ?patient - patient) (traveltime ?patient - patient) (distance ?p ?bed - bed))


  (:action allocateuti
    :parameters (?patient - patient)
    :precondition (and (not (allocated ?patient)) 
                       (uti ?patient))
    :effect (and (donotallocate ?patient))
  )

  (:action allocateisolation
    :parameters (?patient - patient ?bed - bed)
    :precondition (and (not (allocated ?patient)) 
                       (bedfree ?bed) 
                       (isolation ?patient))
    :effect (and (in ?patient ?bed) (allocated ?patient) 
                 (busybed ?bed) (bedisolation ?bed))
  )

  (:action allocateObstetrics
    :parameters (?patient - patient ?bed - bed)
    :precondition (and (not (allocated ?patient)) 
                       (bedfree ?bed) 
                       (Obstetrics ?patient) 
                       (patientchildbirth ?patient) 
                       (bedObstetrics ?bed) 
                       (bedchildbirth ?bed)
                       )
    :effect (and (in ?patient ?bed) (allocated ?patient) 
                 (busybed ?bed))
  )

)
