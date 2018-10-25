(define (domain hospitaldomain)
  (:requirements :fluents :negative-preconditions :typing )
  (:types bed patient specialty care gender origin roomtype birthtype stay age )
  
  (:predicates   
    ;Bed
    ;(bedstay ?varbed - bed ?varstay - stay)
    ;(bedroomtype ?varbed - bed ?varroomtype - roomtype)
    ;(bedorigin ?varbed - bed ?varorigin - origin)
    (bedgender ?varbed - bed ?vargender - gender)
    (bedage ?varbed - bed ?varage - age)
    (bedbirthtype ?varbed - bed ?varbirthtype - birthtype)
    (bedcare ?varbed - bed ?varcare - care)
    (bedspecialty ?varbed - bed ?varspecialty - specialty)
    (bedisolation ?varbed - bed)
    (bedfree ?varbed - bed)
    (busybed ?varbed - bed)
    ;Effect
    (in ?p - patient ?varbed - bed)
    ;Patient
    ;(patientstay ?p - patient ?varstay - stay)
    ;(patientroomtype ?p - patient ?varroomtype - roomtype)
    ;(patientorigin ?p - patient ?varorigin - origin)
    (patientgender ?p - patient ?vargender - gender)
    (patientage ?p - patient ?varage - age)
    (patientbirthtype ?p - patient ?varbirthtype - birthtype)
    (patientcare ?p - patient ?varcare - care)
    (patientspecialty ?p - patient ?varspecialty - specialty)
    (patientisolation ?p - patient)
    (allocated ?p - patient)
    (donotallocate ?p - patient)
    ;Specialties
    (patientuti ?p - patient)
    (bedmedicinainterna ?varbed - bed)
    (patientmedicinainterna ?p - patient)
    (bedobstetricia ?varbed - bed)
    (patientobstetricia ?p - patient)
    (beducl ?varbed - bed)
    (patientucl ?p - patient)
    (bedavc ?varbed - bed)
    (patientavc ?p - patient)
  )

  (:functions (agefunc ?p - patient))

  (:action allocateuti
    :parameters (?p - patient)
    :precondition (and (not (allocated ?p)) 
                       (patientuti ?p))
    :effect (and (donotallocate ?p))
  )
  
  (:action allocateisolation
    :parameters (?p - patient ?varbed - bed)
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed)
                       (patientisolation ?p))
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed) (bedisolation ?varbed))
  )

  (:action allocateObstetrics
    :parameters (?p - patient ?varbed - bed ?varbirthtype - birthtype )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientobstetricia ?p)
                       (bedobstetricia ?varbed)
                       (bedbirthtype ?varbed ?varbirthtype)
                       (patientbirthtype ?p ?varbirthtype)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed))
  )

  (:action allocateUcl
    :parameters (?p - patient ?varbed - bed ?varage - age)
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientucl ?p)
                       (beducl ?varbed)
                       (patientage ?p ?varage)
                       (bedage ?varbed ?varage)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed))
  )

  (:action allocateAvc
    :parameters (?p - patient ?varbed - bed ?vargender - gender )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientavc ?p)
                       (bedavc ?varbed)
                       (patientgender ?p ?vargender)
                       (bedgender ?varbed ?vargender)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed))
  )

  (:action allocatemedicinainterna
    :parameters (?p - patient ?varbed - bed ?varcare - care )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (bedmedicinainterna ?varbed) 
                       (bedcare ?varbed ?varcare)
                       (patientcare ?p ?varcare)
                       (patientmedicinainterna ?p)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed))
  )

  (:action actionteste
    :parameters (?p - patient ?varbed - bed ?varbirthtype - birthtype )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       ;(bedmedicinainterna ?varbed) 
                       (bedbirthtype ?varbed ?varbirthtype)
                       (patientbirthtype ?p ?varbirthtype)
                       (not (patientmedicinainterna ?p))
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) (allocated ?p) 
                 (busybed ?varbed))
  )
)
(define (problem hospital-problem)
  (:domain hospitaldomain)
  (:objects 
    pacienteUti - patient
    ;Isolamento
    pacienteIsolamento - patient
    camaIsolamento - bed
    ;Obstetricia
    PacienteObstetriciaAborto - patient
    PacienteObstetriciaNascimento - patient
    CamaObstetriciaAborto - bed
    CamaObstetriciaNascimento - bed
    ;MedicinaInterna
    PacienteMedicinaInternaMinimo - patient
    PacienteMedicinaInternaIntensivo - patient
    camaMedicinaInternaMinimo - bed
    camaMedicinaInternaIntensivo - bed
    
    ;variacoes possiveis
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
    (patientuti pacienteUti)
    ;Isolamento
    (bedfree camaIsolamento)
    (patientisolation pacienteIsolamento)
    ;Obstetricia
    (bedfree CamaObstetriciaAborto)
    (bedfree CamaObstetriciaNascimento)
    (patientobstetricia PacienteObstetriciaAborto)
    (patientobstetricia PacienteObstetriciaNascimento)
    (bedobstetricia CamaObstetriciaAborto)
    (bedobstetricia CamaObstetriciaNascimento)
    (bedbirthtype CamaObstetriciaAborto aborto)
    (bedbirthtype CamaObstetriciaNascimento nascimento)
    (patientbirthtype PacienteObstetriciaAborto aborto)
    (patientbirthtype PacienteObstetriciaNascimento nascimento)
    ;Medicina Interna
    (bedfree camaMedicinaInternaMinimo)
    (bedfree camaMedicinaInternaIntensivo)
    (patientmedicinainterna PacienteMedicinaInternaMinimo) 
    (patientmedicinainterna PacienteMedicinaInternaIntensivo)
    (patientcare PacienteMedicinaInternaMinimo minimo)
    (patientcare PacienteMedicinaInternaIntensivo intensivo)
    (bedcare camaMedicinaInternaMinimo minimo)
    (bedcare camaMedicinaInternaIntensivo intensivo)
    (bedspecialty camaMedicinaInternaMinimo medicinainterna)
    (bedspecialty camaMedicinaInternaIntensivo medicinainterna)
    (bedmedicinainterna camaMedicinaInternaMinimo)
    (bedmedicinainterna camaMedicinaInternaIntensivo)
  )
  (:goal (and (donotallocate pacienteUti);UTI
              (allocated pacienteIsolamento);Isolamento
              (allocated PacienteObstetriciaAborto);Obstetricia
              (allocated PacienteObstetriciaNascimento)
              (allocated PacienteMedicinaInternaMinimo);Medicina Interna
              (allocated PacienteMedicinaInternaIntensivo)
              )
  )
)