(defdomain HOSPITAL1 (

  ;;;;
  ;;;;; Axioms
  ;;;;;

  ;;;;
  ;;;;; Operators
  ;;;;;

  (:operator (!allocate-bed ?patient ?bed) ;head
    ;preconditions
    ((bedFree ?bed))
      ;delet list
      ((bedFree ?bed))
      ;add list
      ((busyBed ?bed)
       (in ?patient ?bed)
       (allocated ?patient)
      )
  )

  (:operator (!allocate-isolation ?patient ?bed) ;head
    ;preconditions
    ((bedFree ?bed))
      ;delet list
      ((bedFree ?bed))
      ;add list
      ((busyBed ?bed)
       (bedIsolation ?bed)
       (in ?patient ?bed)
       (allocated ?patient)
      )
  )

  (:operator (!do-not-allocate ?patient) ;head
    ;preconditions
    ()
      ;delet list
      ()
      ;add list
      ((doNotAllocate ?patient))
  )
 
  ;;;;
  ;;;;; Methods
  ;;;;;

  (:method (allocate-for-birth-type ?patient ?specialty ?birthType) ;head
    ;preconditions
    ((bedFree ?bed)
     (bedSpecialty ?bed ?specialty)
     (bedBirthType ?bed ?birthType)
    )
      ;subtasks
      ((!allocate-bed ?patient ?bed))
  )

  (:method (allocate-isolation ?patient ?gender) ;head
    ;preconditions
    ((bedFree ?bed)
     (bedGender ?bed ?gender)
    )
      ;subtasks
      ((!allocate-isolation ?patient ?bed))
  )

  (:method (allocate-by-gender ?patient ?specialty ?gender) ;head
    ;preconditions
    ((bedFree ?bed)
     (bedSpecialty ?bed ?specialty) 
     (bedGender ?bed ?gender)
    )
      ;subtasks
      ((!allocate-bed ?patient ?bed))
  )

  (:method (allocate-by-bed-type ?patient ?specialty ?bedTypePatient) ;head
    ;preconditions
    ((bedFree ?bed)
     (bedSpecialty ?bed ?specialty) 
     (bedType ?bed ?bedTypePatient)
    )
      ;subtasks
      ((!allocate-bed ?patient ?bed))
  )

  (:method (allocate-by-stay-and-age ?patient ?specialty ?type ?gender ?care ?origin ?bedTypePatient ?stay) ;head
    ;preconditions
    ((bedFree ?bed)
     (bedSpecialty ?bed ?specialty)
     (bedAge ?bed ?type)
     (bedGender ?bed ?gender)
     (bedCare ?bed ?care)
     (bedOrigin ?bed ?origin)
     (bedType ?bed ?bedTypePatient)
     (bedStay ?bed ?stay)
    )
      ;subtasks
      ((!allocate-bed ?patient ?bed))
  )

  (:method (allocate-by-age ?patient ?specialty ?type) ;head
    ;preconditions
    ((bedFree ?bed)
     (bedSpecialty ?bed ?specialty) 
     (bedAge ?bed ?type)
    )
      ;subtasks
      ((!allocate-bed ?patient ?bed))
  )

  (:method (allocate-by-stay ?patient ?specialty ?age ?gender ?care ?origin ?bedTypePatient ?stay)
    CaseAdult ((age ?patient adult))
      ;subtasks
      ((!allocate-by-stay-and-age ?patient ?specialty adult ?gender ?care ?origin ?bedTypePatient ?stay))

    CaseTeenager ((age ?patient teenager))
      ;subtasks
      ((!allocate-by-stay-and-age ?patient ?specialty teenager ?gender ?care ?origin ?bedTypePatient ?stay))

    CaseChild ((age ?patient child))
      ;subtasks
      ((!allocate-by-stay-and-age ?patient ?specialty child ?gender ?care ?origin ?bedTypePatient ?stay))
  )

  (:method (separate-by-age ?patient ?speciality ?age)
    CaseAdult ((age ?patient adult))
      ;subtasks
      ((!allocate-by-age ?patient ?speciality adult))

    CaseTeenager ((age ?patient teenager))
      ;subtasks
      ((!allocate-by-age ?patient ?speciality teenager))

    CaseChild ((age ?patient child))
      ;subtasks
      ((!allocate-by-age ?patient ?speciality child))
  )

  ;;;;
  ;;;;; Main Method
  ;;;;;

  (:method (allocate-bed ?patient)
    CaseUTI ((specialty ?patient UTI)
             (not (allocated ?patient))) 
      ;subtasks
      ((!do-not-allocate ?patient))

    CaseIsolation ((isolation ?patient) 
                   (gender ?patient ?gender)
                   (not (allocated ?patient)))
      ;subtasks
      ((allocate-isolation ?patient ?gender))
    
    CaseObstetrics ((specialty ?patient Obstetrics)
                    (birth ?patient ?birthType) ;childbirth or abortion
                    (not (allocated ?patient)))
    ;subtasks
    ((allocate-for-birth-type ?patient Obstetrics ?birthType))

    CaseUCL ((specialty ?patient UCL)
             (age ?patient ?age)
             (not (allocated ?patient)))
      ;subtasks
      ((separate-by-age ?patient ?speciality ?age))

    CaseAVC ((specialty ?patient AVC)
             (gender ?patient ?gender)
             (not (allocated ?patient)))
      ;subtasks
      ((allocate-by-gender ?patient AVC ?gender))

    CasePsychiatry ((specialty ?patient Psychiatry)
                    (gender ?patient ?gender)
                    (not (allocated ?patient)))
      ;subtasks
      ((allocate-by-gender ?patient Psychiatry ?gender))

    CaseBariatricSurgery ((specialty ?patient BariatricSurgery)
                          (gender ?patient ?gender)
                          (not (allocated ?patient)))
      ;subtasks
      ((allocate-by-gender ?patient BariatricSurgery ?gender))

    CaseGynecology ((specialty ?patient Gynecology)
                    (bedTypePatient ?patient ?bedTypePatient)
                    (not (allocated ?patient)))
      ;subtasks
      ((allocate-by-bed-type ?patient Gynecology ?bedTypePatient))

    CaseQuickTurn ((stay ?patient QuickTurn)
                   (specialty ?patient ?specialty)
                   (age ?patient ?age)
                   (gender ?patient ?gender)
                   (care ?patient ?care)
                   (origin ?patient ?origin)
                   (bedTypePatient ?patient ?bedTypePatient)
                   (not (allocated ?patient))) 
      ;subtasks
      ((allocate-by-stay ?patient ?specialty ?age ?gender ?care ?origin ?bedTypePatient QuickTurn))
  
    CaseLongStay ((stay ?patient LongStay)
                  (specialty ?patient ?specialty) 
                  (age ?patient ?age)
                  (gender ?patient ?gender)
                  (care ?patient ?care)
                  (origin ?patient ?origin)
                  (bedTypePatient ?patient ?bedTypePatient)
                  (not (allocated ?patient))) 
      ;subtasks
      ((allocate-by-stay ?patient ?specialty ?age ?gender ?care ?origin ?bedTypePatient LongStay))
  )

  (:method (root)
	( )
	((allocate-bed ?p1)
     (allocate-bed ?p2)
       ;(allocate-bed ?p3)
    ;   (allocate-bed ?p4)
    ;   (allocate-bed ?p5)
       ;(allocate-bed ?p6)
    ;   (allocate-bed ?p7)
    ;   (allocate-bed ?p8)
       ;(allocate-bed ?p9)
    ;   (allocate-bed ?p10)
    ;   (allocate-bed ?p11)
    ;   (allocate-bed ?pUTI) 
    )
  )

  ;;;;;;;;;;;;;;;
  ;;; THE END ;;;
  ;;;;;;;;;;;;;;;
 )
)

