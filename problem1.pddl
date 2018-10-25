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