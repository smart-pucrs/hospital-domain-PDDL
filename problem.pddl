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