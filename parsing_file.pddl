(define (domain hospitaldomain)
  (:requirements :fluents :negative-preconditions :typing )
  (:types bed patient specialty care )
  
  (:predicates     
    (bedcare ?varbed - bed ?varcare - care)
    (bedmedicinainterna ?varbed - bed)
    (bedspecialty ?varbed - bed ?varspecialty - specialty)  
    (bedfree ?varbed - bed)
    (busybed ?varbed - bed)
    (in ?p - patient ?varbed - bed)
    (allocated ?p - patient)
    (patientcare ?p - patient ?varcare - care)
    (patientspecialty ?p - patient ?varspecialty - specialty)
    (patientmedicinainterna ?p - patient)
  )

  (:functions (age ?p - patient))

  (:action allocatemedicinainterna
    :parameters (?p - patient ?varbed - bed ?varcare - care )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (bedmedicinainterna ?varbed) 
                       (bedcare ?varbed ?varcare)
                       (patientcare ?p ?varcare)
                       (patientmedicinainterna ?p)
                       )
    :effect (and (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed))
  )
)
(define (problem hospital-problem)
  (:domain hospitaldomain)
  (:objects 
    pacienteMedicinaInternaMinimo - patient
    pacienteMedicinaInternaIntensivo - patient
    camaMedicinaInternaMinimo - bed
    camaMedicinaInternaIntensivo - bed
    minimo - care
    intensivo - care
    medicinainterna - specialty
  )
  (:init 
    (bedfree camaMedicinaInternaMinimo)
    (bedfree camaMedicinaInternaIntensivo)
    (patientspecialty pacienteMedicinaInternaMinimo medicinainterna) 
    (patientspecialty pacienteMedicinaInternaIntensivo medicinainterna)
    (patientmedicinainterna pacienteMedicinaInternaMinimo) 
    (patientmedicinainterna pacienteMedicinaInternaIntensivo)
    (patientcare pacienteMedicinaInternaMinimo minimo)
    (patientcare pacienteMedicinaInternaIntensivo intensivo)
    (bedcare camaMedicinaInternaMinimo minimo)
    (bedcare camaMedicinaInternaIntensivo intensivo)
    (bedspecialty camaMedicinaInternaMinimo medicinainterna)
    (bedspecialty camaMedicinaInternaIntensivo medicinainterna)
    (bedmedicinainterna camaMedicinaInternaMinimo)
    (bedmedicinainterna camaMedicinaInternaIntensivo)
  )
  (:goal (and (allocated pacienteMedicinaInternaMinimo)
              (allocated pacienteMedicinaInternaIntensivo)))
)