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