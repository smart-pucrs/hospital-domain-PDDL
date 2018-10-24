(define (problem hospital-problem)
  (:domain hospitaldomain)
  (:objects  
    pacienteUti - patient
    pacienteIsolation - patient
    pacienteObstetrics - patient
    camaIsolation - bed
    camaObstetrics - bed
  )
  (:init 
    (bedfree camaIsolation)
    (uti pacienteUti)
    (isolation pacienteIsolation)
    (bedfree camaObstetrics) 
    (Obstetrics pacienteObstetrics) 
    (patientchildbirth pacienteObstetrics) 
    (bedObstetrics camaObstetrics) 
    (bedchildbirth camaObstetrics)
  )
  (:goal (and (allocated pacienteIsolation)
              (donotallocate pacienteUti)
              (allocated pacienteObstetrics)))
)