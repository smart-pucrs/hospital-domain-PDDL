(defproblem pfile1 HOSPITAL
  (
    ;;;
    ;;;  facts
    ;;;
    (bed Bed1)
    (bed Bed2)
    (patient Patient1)
    (patient Patient2)
    ;;;
    ;;;  initial states
    ;;;
    (not allocated Patient1)
    (not allocated Patient2)
    (isolation Patient1)
    (not isolation Patient2)
    (bedSpecialty Bed1 General)
    (not bedSpecialty Bed1 AVC)
    (not bedSpecialty Bed1 Psychiatry)
    (not bedSpecialty Bed1 BariatricSurgery)
    (not bedSpecialty Bed1 Gynecology)
    (not bedSpecialty Bed1 Obstetrics)
    (not bedSpecialty Bed1 UCL)
    (bedSpecialty Bed2 AVC)
    (not bedSpecialty Bed2 General)
    (not bedSpecialty Bed2 Psychiatry)
    (not bedSpecialty Bed2 BariatricSurgery)
    (not bedSpecialty Bed2 Gynecology)
    (not bedSpecialty Bed2 Obstetrics)
    (not bedSpecialty Bed2 UCL)
    (bedGender Bed1 female)
    (not bedGender Bed1 male)
    (bedGender Bed2 male)
    (not bedGender Bed2 female)
    (bedfree Bed1)
    (bedfree Bed2)
    (specialty Patient1 General)
    (not specialty Patient1 AVC)
    (not specialty Patient1 Psychiatry)
    (not specialty Patient1 BariatricSurgery)
    (not specialty Patient1 Gynecology)
    (not specialty Patient1 Obstetrics)
    (not specialty Patient1 UCL)
    (not specialty Patient1 UTI)
    (specialty Patient2 UCL)
    (not specialty Patient2 General)
    (not specialty Patient2 Psychiatry)
    (not specialty Patient2 BariatricSurgery)
    (not specialty Patient2 Gynecology)
    (not specialty Patient2 Obstetrics)
    (not specialty Patient2 AVC)
    (not specialty Patient2 UTI)
    (gender Patient1 female)
    (not gender Patient1 male)
    (gender Patient2 female)
    (not gender Patient2 male)
  )

  ;;;
  ;;; goals
  ;;;
  
  (:unordered 
    (allocate-bed Patient1)
    (allocate-bed Patient2))
)