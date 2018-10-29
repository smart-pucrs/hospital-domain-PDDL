(define (domain hospitaldomain)
  (:requirements :fluents :negative-preconditions :typing )
  (:types bed patient specialty care gender origin roomtype birthtype stay age )
  
  (:predicates   
    ;Bed
    (bedstay ?varbed - bed ?varstay - stay)
    (bedroomtype ?varbed - bed ?varroomtype - roomtype)
    (bedorigin ?varbed - bed ?varorigin - origin)
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
    (patientstay ?p - patient ?varstay - stay)
    (patientroomtype ?p - patient ?varroomtype - roomtype)
    (patientorigin ?p - patient ?varorigin - origin)
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
    (bedobstetricia ?varbed - bed)
    (patientobstetricia ?p - patient)
    (beducl ?varbed - bed)
    (patientucl ?p - patient)
    (bedavc ?varbed - bed)
    (patientavc ?p - patient)
    (bedpsiquiatria ?varbed - bed)
    (patientpsiquiatria ?p - patient)
    (bedcirurgiabariatrica ?varbed - bed)
    (patientcirurgiabariatrica ?p - patient)
    (bedginecologia ?varbed - bed)
    (patientginecologia ?p - patient)
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
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed) 
                 (bedisolation ?varbed))
  )

  (:action allocateobstetricia
    :parameters (?p - patient ?varbed - bed ?varbirthtype - birthtype )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientobstetricia ?p)
                       (bedobstetricia ?varbed)
                       (bedbirthtype ?varbed ?varbirthtype)
                       (patientbirthtype ?p ?varbirthtype)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed))
  )

  (:action allocateucl
    :parameters (?p - patient ?varbed - bed ?varage - age)
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientucl ?p)
                       (beducl ?varbed)
                       (patientage ?p ?varage)
                       (bedage ?varbed ?varage)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed))
  )

  (:action allocateavc
    :parameters (?p - patient ?varbed - bed ?vargender - gender )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientavc ?p)
                       (bedavc ?varbed)
                       (patientgender ?p ?vargender)
                       (bedgender ?varbed ?vargender)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed))
  )

  (:action allocatepsiquiatria
    :parameters (?p - patient ?varbed - bed ?vargender - gender )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientpsiquiatria ?p)
                       (bedpsiquiatria ?varbed)
                       (patientgender ?p ?vargender)
                       (bedgender ?varbed ?vargender)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed))
  )

  (:action allocatecirurgiabariatrica
    :parameters (?p - patient ?varbed - bed ?vargender - gender )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientcirurgiabariatrica ?p)
                       (bedcirurgiabariatrica ?varbed)
                       (patientgender ?p ?vargender)
                       (bedgender ?varbed ?vargender)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed))
  )

  (:action allocateginecologia
    :parameters (?p - patient ?varbed - bed ?varroomtype - roomtype )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientginecologia ?p)
                       (bedginecologia ?varbed)
                       (patientroomtype ?p ?varroomtype)
                       (bedroomtype ?varbed ?varroomtype)
                       )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed))
  )

  (:action allocate
    :parameters (?p - patient ?varbed - bed ?varspecialty - specialty
                 ?varstay - stay ?varroomtype - roomtype ?varorigin - origin
                 ?vargender - gender ?varage - age ?varcare - care )
    :precondition (and (not (allocated ?p)) 
                       (bedfree ?varbed) 
                       (patientspecialty ?p ?varspecialty) 
                       (patientstay ?p ?varstay)
                       (patientroomtype ?p ?varroomtype)
                       (patientorigin ?p ?varorigin)
                       (patientgender ?p ?vargender)
                       (patientage ?p ?varage)
                       (patientcare ?p ?varcare)
                       (bedspecialty ?varbed ?varspecialty)
                       (bedstay ?varbed ?varstay)
                       (bedroomtype ?varbed ?varroomtype)
                       (bedorigin ?varbed ?varorigin)
                       (bedgender ?varbed ?vargender)
                       (bedage ?varbed ?varage)
                       (bedcare ?varbed ?varcare)
                  )
    :effect (and (not (bedfree ?varbed)) (in ?p ?varbed) 
                 (allocated ?p) (busybed ?varbed))
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
    ;Cirurgia Bariátrica
    PacienteCirurgiaBariatricaFeminino - patient
    PacienteCirurgiaBariatricaMasculino - patient
    CamaCirurgiaBariatricaFeminino - bed
    CamaCirurgiaBariatricaMasculino - bed
    ;Ginecologia
    PacienteGinecologiaClinico - patient
    PacienteGinecologiaCirurgico - patient
    CamaGinecologiaClinico - bed
    CamaGinecologiaCirurgico - bed
    ;Geral
    PacienteGeralMinimoLongaPermanencia - patient
    PacienteGeralIntensivoGiroRapido - patient
    camaGeralMinimoLongaPermanencia - bed
    camaGeralIntensivoGiroRapido - bed
    
    ;variacoes possiveis
    minimo - care
    intensivo - care
    semiintensivo - care
    geral - specialty
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
    ;CirurgiaBariatrica
    (bedfree CamaCirurgiaBariatricaFeminino)
    (bedfree CamaCirurgiaBariatricaMasculino)
    (patientcirurgiabariatrica PacienteCirurgiaBariatricaFeminino)
    (patientcirurgiabariatrica PacienteCirurgiaBariatricaMasculino)
    (bedcirurgiabariatrica CamaCirurgiaBariatricaFeminino)
    (bedcirurgiabariatrica CamaCirurgiaBariatricaMasculino)
    (patientgender PacienteCirurgiaBariatricaFeminino feminino)
    (patientgender PacienteCirurgiaBariatricaMasculino masculino)
    (bedgender CamaCirurgiaBariatricaFeminino feminino)
    (bedgender CamaCirurgiaBariatricaMasculino masculino)
    ;Ginecologia
    (bedfree CamaGinecologiaClinico) 
    (bedfree CamaGinecologiaCirurgico) 
    (patientginecologia PacienteGinecologiaClinico)
    (patientginecologia PacienteGinecologiaCirurgico)
    (bedginecologia CamaGinecologiaClinico)
    (bedginecologia CamaGinecologiaCirurgico)
    (patientroomtype PacienteGinecologiaClinico clinico)
    (patientroomtype PacienteGinecologiaCirurgico cirurgico)
    (bedroomtype CamaGinecologiaClinico clinico)
    (bedroomtype CamaGinecologiaCirurgico cirurgico)
    ;Geral
    (bedfree camaGeralMinimoLongaPermanencia) 
    (bedfree camaGeralIntensivoGiroRapido) 
    (patientspecialty PacienteGeralMinimoLongaPermanencia geral) 
    (patientspecialty PacienteGeralIntensivoGiroRapido geral) 
    (patientstay PacienteGeralMinimoLongaPermanencia longapermanencia)
    (patientstay PacienteGeralIntensivoGiroRapido girorapido)
    (patientroomtype PacienteGeralMinimoLongaPermanencia clinico)
    (patientroomtype PacienteGeralIntensivoGiroRapido clinico)
    (patientorigin PacienteGeralMinimoLongaPermanencia eletivo)
    (patientorigin PacienteGeralIntensivoGiroRapido eletivo)
    (patientgender PacienteGeralMinimoLongaPermanencia masculino)
    (patientgender PacienteGeralIntensivoGiroRapido masculino)
    (patientage PacienteGeralMinimoLongaPermanencia adulto)
    (patientage PacienteGeralIntensivoGiroRapido adulto)
    (patientcare PacienteGeralMinimoLongaPermanencia minimo)
    (patientcare PacienteGeralIntensivoGiroRapido intensivo)
    (bedspecialty camaGeralMinimoLongaPermanencia geral)
    (bedspecialty camaGeralIntensivoGiroRapido geral)
    (bedstay camaGeralMinimoLongaPermanencia longapermanencia)
    (bedstay camaGeralIntensivoGiroRapido girorapido)
    (bedroomtype camaGeralMinimoLongaPermanencia clinico)
    (bedroomtype camaGeralIntensivoGiroRapido clinico)
    (bedorigin camaGeralMinimoLongaPermanencia eletivo)
    (bedorigin camaGeralIntensivoGiroRapido eletivo)
    (bedgender camaGeralMinimoLongaPermanencia masculino)
    (bedgender camaGeralIntensivoGiroRapido masculino)
    (bedage camaGeralMinimoLongaPermanencia adulto)
    (bedage camaGeralIntensivoGiroRapido adulto)
    (bedcare camaGeralMinimoLongaPermanencia minimo)
    (bedcare camaGeralIntensivoGiroRapido intensivo)
  
  )
  (:goal (and ;(donotallocate pacienteUti) ;UTI
              ;(allocated pacienteIsolamento) ;Isolamento
              ;(allocated PacienteObstetriciaAborto) ;Obstetricia
              ;(allocated PacienteObstetriciaNascimento)
              ;(allocated PacienteUCLAdulto) ;UCL
              ;(allocated PacienteUCLCrianca)
              ;(allocated PacienteAVCFeminino) ;AVC
              ;(allocated PacienteAVCMasculino)
              ;(allocated PacientePsiquiatriaFeminino) ;Psiquiatria
              ;(allocated PacientePsiquiatriaMasculino)
              ;(allocated PacienteCirurgiaBariatricaFeminino) ;Cirurgia Bariátrica
              ;(allocated PacienteCirurgiaBariatricaMasculino)
              ;(allocated PacienteGinecologiaClinico) ;Ginecologia
              ;(allocated PacienteGinecologiaCirurgico)
              (allocated PacienteGeralMinimoLongaPermanencia) ;Geral
              (allocated PacienteGeralIntensivoGiroRapido)              
         )
  )
)