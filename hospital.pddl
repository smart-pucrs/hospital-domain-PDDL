(define (domain hospital)
  (:requirements :typing)
  (:types patient)

  (:predicates 
    (patient ?g - patient)
    (do-not-allocate ?g - patient)
    (allocated ?g - patient)
    (uti ?g - patient)
  )

  (:action allocateBed
    :parameters (?gb - patient)
    :precondition (and (uti ?gb))
                       ;(not (allocated ?patient)))
    :effect (and (do-not-allocate ?gb))
  )
)