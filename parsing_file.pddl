(define (domain hospitaldomain)
(:requirements :fluents :continuous-effects :negative-preconditions :duration-inequalities :time :typing)
(:predicates (at ?patient - patient ?bed - bed) (bedfree ?bed - bed) (busybed ?bed - bed) (alocated ?patient - patient))
(:types patient bed)
(:functions (maxspeed ?patient - patient) (speed ?patient - patient) (traveltime ?patient - patient) (distance ?p ?bed - bed))


;; Set the accelerator value over time. Uses time as a 
;; way of avoiding modelling acceleration as a numeric
;; parameter.

;(:durative-action allocating
;:parameters (?patient - patient)
;:duration (and (not (alocated ?patient)))
;:condition (and )
;:effect (and (at end (increase (custallocation ?patient) ?duration)))
;)

;; Then drive with the accelerator setting.

(:action allocate
:parameters (?patient - patient ?bed - bed)
:precondition (and (not (alocated ?patient)) (bedfree ?bed))
:effect (and (at ?patient ?bed) (busybed ?bed) (alocated ?patient))
)






)
(define (problem hospital-problem)
(:domain hospitaldomain)
(:objects  
	pessoa - patient
	cama - bed
)
(:init 
	(bedfree cama)
)
(:goal (and (alocated pessoa)))
)