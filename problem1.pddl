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
    ;UCL
    PacienteUCLAdulto - patient
    PacienteUCLCrianca - patient
    CamaUCLAdulto - bed
    CamaUCLCrianca - bed
    ;AVC
    PacienteAVCFeminino - patient
    PacienteAVCMasculino - patient
    CamaAVCFeminino - bed
    CamaAVCMasculino - bed
    ;Psiquiatria
    PacientePsiquiatriaFeminino - patient
    PacientePsiquiatriaMasculino - patient
    CamaPsiquiatriaFeminino - bed
    CamaPsiquiatriaMasculino - bed
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
    ;UCL
    (bedfree CamaUCLAdulto)
    (bedfree CamaUCLCrianca)
    (patientucl PacienteUCLAdulto)
    (patientucl PacienteUCLCrianca)
    (beducl CamaUCLAdulto)
    (beducl CamaUCLCrianca)
    (patientage PacienteUCLAdulto adulto)
    (patientage PacienteUCLCrianca crianca)
    (bedage CamaUCLAdulto adulto)
    (bedage CamaUCLCrianca crianca)
    ;AVC
    (bedfree CamaAVCFeminino)
    (bedfree CamaAVCMasculino)
    (patientavc PacienteAVCFeminino)
    (patientavc PacienteAVCMasculino)
    (bedavc CamaAVCFeminino)
    (bedavc CamaAVCMasculino)
    (patientgender PacienteAVCFeminino feminino)
    (patientgender PacienteAVCMasculino masculino)
    (bedgender CamaAVCFeminino feminino)
    (bedgender CamaAVCMasculino masculino)
    ;Psiquiatria
    (bedfree CamaPsiquiatriaFeminino)
    (bedfree CamaPsiquiatriaMasculino)
    (patientpsiquiatria PacientePsiquiatriaFeminino)
    (patientpsiquiatria PacientePsiquiatriaMasculino)
    (bedpsiquiatria CamaPsiquiatriaFeminino)
    (bedpsiquiatria CamaPsiquiatriaMasculino)
    (patientgender PacientePsiquiatriaFeminino feminino)
    (patientgender PacientePsiquiatriaMasculino masculino)
    (bedgender CamaPsiquiatriaFeminino feminino)
    (bedgender CamaPsiquiatriaMasculino masculino)
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
              ;(allocated PacienteObstetriciaNascimento)
              (allocated PacienteUCLAdulto) ;UCL
              (allocated PacienteUCLCrianca)
              (allocated PacienteAVCFeminino) ;AVC
              (allocated PacienteAVCMasculino)
              (allocated PacientePsiquiatriaFeminino) ;Psiquiatria
              (allocated PacientePsiquiatriaMasculino)
              (allocated PacienteMedicinaInternaMinimo);Medicina Interna
              (allocated PacienteMedicinaInternaIntensivo)              
         )
  )
)