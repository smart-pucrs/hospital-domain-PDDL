(define (problem hospital-problem)
  (:domain hospitaldomain)
  (:objects 
    pacienteMedicinaInternaMinimo - patient
    pacienteMedicinaInternaIntensivo - patient
    camaMedicinaInternaMinimo - bed
    camaMedicinaInternaIntensivo - bed
    minimo - care
    intensivo - care
    semiintensivo - care
    medicinainterna - specialty
    aborto - birthtype
    nascimento - birthtype
    crianca - age
    adulto - age
    adolescente - age
    masculino - gender
    feminino - gender
    eletivo - origin
    agudo - origin
    clinico - roomtype
    cirurgico - roomtype
    longapermanencia - stay
    girorapido - stay
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