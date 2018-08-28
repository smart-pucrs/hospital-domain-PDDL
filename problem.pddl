(define (problem problema)
(:domain hospital)
(:objects Paciente - patient)
  (:init
    (patient Paciente)
    (uti Paciente)
  )  
  (:goal (do-not-allocate Paciente))
)