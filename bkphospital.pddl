(define (domain hospitaldomain)
  (:requirements :fluents :continuous-effects :negative-preconditions :duration-inequalities :time :typing)
  (:types bed patient specialty birthtype type gender care origin bedtype stay age)
  (:predicates 
    ;(bedspecialty ?varbed - bed ?specialty - specialty) ;UTI, Obstetrics, UCL, AVC, Psychiatry, BariatricSurgery, Gynecology...
    ;(bedbirthtype ?varbed - bed ?birthtype - birthtype) ;childbirth or abortion
    (bedchildbirth ?varbed - bed)
    
    ; (bedage ?varbed - bed ?type - type) ;adult, teenager, child
    ; (bedgender ?varbed - bed ?gender - gender) ;male, female
     ;(bedcare ?varbed - bed ?care - care) ;minimum, semiIntensive, intensive
    ; (bedorigin ?varbed - bed ?origin - origin) ;elective, emergency
    ; (bedtype ?varbed - bed ?bedtype - bedtype) ;clinical, surgical
    ; (bedstay ?varbed - bed ?stay - stay) ;QuickTurn, LongStay

    ; (bed ?varbed - bed)
    (bedfree ?varbed - bed)
    (busybed ?varbed - bed)
    ; (patient ?p - patient)
    (in ?p - patient ?varbed - bed)
    (donotallocate ?p - patient)
    (isolation ?p - patient)
    (bedisolation ?varbed - bed)
    (allocated ?p - patient)
    (uti ?p - patient)
    (bedObstetrics ?varbed - bed)
    (Obstetrics ?p - patient)
    ;(specialty ?p - patient ?specialty - specialty) ;UTI, Obstetrics, UCL, AVC, Psychiatry, BariatricSurgery, Gynecology...
    ;(birth ?p - patient ?birthtype - birthtype) ;childbirth or abortion
    (patientchildbirth ?p - patient)
    ; (age ?p - patient ?age - age) ;number
    ; (gender ?p - patient ?gender - gender) ;male, female
    ;(care ?p - patient ?care - care) ;minimum, semiIntensive, intensive
    ; (origin ?p - patient ?origin - origin) ;elective, emergency
    ; (bedtypepatient ?p - patient ?bedtype - bedtype) ;clinical, surgical
    ; (stay ?p - patient ?stay - stay); QuickTurn, LongStay
    (MedicinaInterna ?p - patient)
    (bedMedicinaInterna ?varbed - bed)
  
  )

  (:functions (maxspeed ?p - patient) (speed ?p - patient) (traveltime ?p - patient) (distance ?p ?varbed - bed))


  (:action allocateuti
    :parameters (?p - patient)
    :precondition (and (not (allocated ?p)) 
                       (uti ?p))
    :effect (and (donotallocate ?p))
  )

  (:action allocateisolation
    :parameters (?p - patient ?varbed - bed)
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (isolation ?p))
    :effect (and (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed) (bedisolation ?varbed))
  )

  (:action allocateObstetrics
    :parameters (?p - patient ?varbed - bed)
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (Obstetrics ?p) 
                       (patientchildbirth ?p) 
                       (bedObstetrics ?varbed) 
                       (bedchildbirth ?varbed)
                       )
    :effect (and (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed))
  )

)
