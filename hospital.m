domain: file "hospital.pddl"
problem: file "problem1.pddl"
message: " Time Discretisation = 0.1"
message: " Digits for representing the integer part of a real =  5"
message: " Digits for representing the fractional part of a real =  4"
type
	 real_type: real(7,4);
	integer: -1000..1000;

	 TIME_type: real(7,2);

	patient : Enum {pacienteuti,pacienteisolamento,pacienteobstetriciaaborto,pacienteobstetricianascimento,pacienteucladulto,pacienteuclcrianca,pacienteavcfeminino,pacienteavcmasculino,pacientepsiquiatriafeminino,pacientepsiquiatriamasculino,pacientecirurgiabariatricafeminino,pacientecirurgiabariatricamasculino,pacienteginecologiaclinico,pacienteginecologiacirurgico,pacientegeralminimolongapermanencia,pacientegeralintensivogirorapido};
	bed : Enum {camaisolamento,camaobstetriciaaborto,camaobstetricianascimento,camaucladulto,camauclcrianca,camaavcfeminino,camaavcmasculino,camapsiquiatriafeminino,camapsiquiatriamasculino,camacirurgiabariatricafeminino,camacirurgiabariatricamasculino,camaginecologiaclinico,camaginecologiacirurgico,camageralminimolongapermanencia,camageralintensivogirorapido};
	care : Enum {minimo,intensivo,semiintensivo};
	specialty : Enum {geral};
	birthtype : Enum {aborto,nascimento};
	age : Enum {crianca,adulto,adolescente};
	gender : Enum {masculino,feminino};
	origin : Enum {eletivo,agudo};
	roomtype : Enum {clinico,cirurgico};
	stay : Enum {longapermanencia,girorapido};

const 
	 T:0.1;


var 
	all_event_true: boolean;
	 h_n: integer;
	 g_n: integer;
	 f_n: integer;
	 TIME[pddlname:"upmurphi_global_clock";]:TIME_type;
	agefunc[pddlname:"agefunc";] : Array [patient] of  real_type;


	bedstay[pddlname: "bedstay";] : Array [bed] of Array [stay] of  boolean;
	bedroomtype[pddlname: "bedroomtype";] : Array [bed] of Array [roomtype] of  boolean;
	bedorigin[pddlname: "bedorigin";] : Array [bed] of Array [origin] of  boolean;
	bedgender[pddlname: "bedgender";] : Array [bed] of Array [gender] of  boolean;
	bedage[pddlname: "bedage";] : Array [bed] of Array [age] of  boolean;
	bedbirthtype[pddlname: "bedbirthtype";] : Array [bed] of Array [birthtype] of  boolean;
	bedcare[pddlname: "bedcare";] : Array [bed] of Array [care] of  boolean;
	bedspecialty[pddlname: "bedspecialty";] : Array [bed] of Array [specialty] of  boolean;
	bedisolation[pddlname: "bedisolation";] : Array [bed] of  boolean;
	bedfree[pddlname: "bedfree";] : Array [bed] of  boolean;
	busybed[pddlname: "busybed";] : Array [bed] of  boolean;
	in_[pddlname: "in";] : Array [patient] of Array [bed] of  boolean;
	patientstay[pddlname: "patientstay";] : Array [patient] of Array [stay] of  boolean;
	patientroomtype[pddlname: "patientroomtype";] : Array [patient] of Array [roomtype] of  boolean;
	patientorigin[pddlname: "patientorigin";] : Array [patient] of Array [origin] of  boolean;
	patientgender[pddlname: "patientgender";] : Array [patient] of Array [gender] of  boolean;
	patientage[pddlname: "patientage";] : Array [patient] of Array [age] of  boolean;
	patientbirthtype[pddlname: "patientbirthtype";] : Array [patient] of Array [birthtype] of  boolean;
	patientcare[pddlname: "patientcare";] : Array [patient] of Array [care] of  boolean;
	patientspecialty[pddlname: "patientspecialty";] : Array [patient] of Array [specialty] of  boolean;
	patientisolation[pddlname: "patientisolation";] : Array [patient] of  boolean;
	allocated[pddlname: "allocated";] : Array [patient] of  boolean;
	donotallocate[pddlname: "donotallocate";] : Array [patient] of  boolean;
	patientuti[pddlname: "patientuti";] : Array [patient] of  boolean;
	bedobstetricia[pddlname: "bedobstetricia";] : Array [bed] of  boolean;
	patientobstetricia[pddlname: "patientobstetricia";] : Array [patient] of  boolean;
	beducl[pddlname: "beducl";] : Array [bed] of  boolean;
	patientucl[pddlname: "patientucl";] : Array [patient] of  boolean;
	bedavc[pddlname: "bedavc";] : Array [bed] of  boolean;
	patientavc[pddlname: "patientavc";] : Array [patient] of  boolean;
	bedpsiquiatria[pddlname: "bedpsiquiatria";] : Array [bed] of  boolean;
	patientpsiquiatria[pddlname: "patientpsiquiatria";] : Array [patient] of  boolean;
	bedcirurgiabariatrica[pddlname: "bedcirurgiabariatrica";] : Array [bed] of  boolean;
	patientcirurgiabariatrica[pddlname: "patientcirurgiabariatrica";] : Array [patient] of  boolean;
	bedginecologia[pddlname: "bedginecologia";] : Array [bed] of  boolean;
	patientginecologia[pddlname: "patientginecologia";] : Array [patient] of  boolean;


-- External function declaration 

externfun ext_assignment(value : real_type) : real_type;
procedure set_bedstay( varbed : bed ; varstay : stay ;  value : boolean);
BEGIN
	bedstay[varbed][varstay] := value;
END;

function get_bedstay( varbed : bed ; varstay : stay): boolean;
BEGIN
	return 	bedstay[varbed][varstay];
END;

procedure set_bedroomtype( varbed : bed ; varroomtype : roomtype ;  value : boolean);
BEGIN
	bedroomtype[varbed][varroomtype] := value;
END;

function get_bedroomtype( varbed : bed ; varroomtype : roomtype): boolean;
BEGIN
	return 	bedroomtype[varbed][varroomtype];
END;

procedure set_bedorigin( varbed : bed ; varorigin : origin ;  value : boolean);
BEGIN
	bedorigin[varbed][varorigin] := value;
END;

function get_bedorigin( varbed : bed ; varorigin : origin): boolean;
BEGIN
	return 	bedorigin[varbed][varorigin];
END;

procedure set_bedgender( varbed : bed ; vargender : gender ;  value : boolean);
BEGIN
	bedgender[varbed][vargender] := value;
END;

function get_bedgender( varbed : bed ; vargender : gender): boolean;
BEGIN
	return 	bedgender[varbed][vargender];
END;

procedure set_bedage( varbed : bed ; varage : age ;  value : boolean);
BEGIN
	bedage[varbed][varage] := value;
END;

function get_bedage( varbed : bed ; varage : age): boolean;
BEGIN
	return 	bedage[varbed][varage];
END;

procedure set_bedbirthtype( varbed : bed ; varbirthtype : birthtype ;  value : boolean);
BEGIN
	bedbirthtype[varbed][varbirthtype] := value;
END;

function get_bedbirthtype( varbed : bed ; varbirthtype : birthtype): boolean;
BEGIN
	return 	bedbirthtype[varbed][varbirthtype];
END;

procedure set_bedcare( varbed : bed ; varcare : care ;  value : boolean);
BEGIN
	bedcare[varbed][varcare] := value;
END;

function get_bedcare( varbed : bed ; varcare : care): boolean;
BEGIN
	return 	bedcare[varbed][varcare];
END;

procedure set_bedspecialty( varbed : bed ; varspecialty : specialty ;  value : boolean);
BEGIN
	bedspecialty[varbed][varspecialty] := value;
END;

function get_bedspecialty( varbed : bed ; varspecialty : specialty): boolean;
BEGIN
	return 	bedspecialty[varbed][varspecialty];
END;

procedure set_bedisolation( varbed : bed ;  value : boolean);
BEGIN
	bedisolation[varbed] := value;
END;

function get_bedisolation( varbed : bed): boolean;
BEGIN
	return 	bedisolation[varbed];
END;

procedure set_bedfree( varbed : bed ;  value : boolean);
BEGIN
	bedfree[varbed] := value;
END;

function get_bedfree( varbed : bed): boolean;
BEGIN
	return 	bedfree[varbed];
END;

procedure set_busybed( varbed : bed ;  value : boolean);
BEGIN
	busybed[varbed] := value;
END;

function get_busybed( varbed : bed): boolean;
BEGIN
	return 	busybed[varbed];
END;

procedure set_in_( p : patient ; varbed : bed ;  value : boolean);
BEGIN
	in_[p][varbed] := value;
END;

function get_in_( p : patient ; varbed : bed): boolean;
BEGIN
	return 	in_[p][varbed];
END;

procedure set_patientstay( p : patient ; varstay : stay ;  value : boolean);
BEGIN
	patientstay[p][varstay] := value;
END;

function get_patientstay( p : patient ; varstay : stay): boolean;
BEGIN
	return 	patientstay[p][varstay];
END;

procedure set_patientroomtype( p : patient ; varroomtype : roomtype ;  value : boolean);
BEGIN
	patientroomtype[p][varroomtype] := value;
END;

function get_patientroomtype( p : patient ; varroomtype : roomtype): boolean;
BEGIN
	return 	patientroomtype[p][varroomtype];
END;

procedure set_patientorigin( p : patient ; varorigin : origin ;  value : boolean);
BEGIN
	patientorigin[p][varorigin] := value;
END;

function get_patientorigin( p : patient ; varorigin : origin): boolean;
BEGIN
	return 	patientorigin[p][varorigin];
END;

procedure set_patientgender( p : patient ; vargender : gender ;  value : boolean);
BEGIN
	patientgender[p][vargender] := value;
END;

function get_patientgender( p : patient ; vargender : gender): boolean;
BEGIN
	return 	patientgender[p][vargender];
END;

procedure set_patientage( p : patient ; varage : age ;  value : boolean);
BEGIN
	patientage[p][varage] := value;
END;

function get_patientage( p : patient ; varage : age): boolean;
BEGIN
	return 	patientage[p][varage];
END;

procedure set_patientbirthtype( p : patient ; varbirthtype : birthtype ;  value : boolean);
BEGIN
	patientbirthtype[p][varbirthtype] := value;
END;

function get_patientbirthtype( p : patient ; varbirthtype : birthtype): boolean;
BEGIN
	return 	patientbirthtype[p][varbirthtype];
END;

procedure set_patientcare( p : patient ; varcare : care ;  value : boolean);
BEGIN
	patientcare[p][varcare] := value;
END;

function get_patientcare( p : patient ; varcare : care): boolean;
BEGIN
	return 	patientcare[p][varcare];
END;

procedure set_patientspecialty( p : patient ; varspecialty : specialty ;  value : boolean);
BEGIN
	patientspecialty[p][varspecialty] := value;
END;

function get_patientspecialty( p : patient ; varspecialty : specialty): boolean;
BEGIN
	return 	patientspecialty[p][varspecialty];
END;

procedure set_patientisolation( p : patient ;  value : boolean);
BEGIN
	patientisolation[p] := value;
END;

function get_patientisolation( p : patient): boolean;
BEGIN
	return 	patientisolation[p];
END;

procedure set_allocated( p : patient ;  value : boolean);
BEGIN
	allocated[p] := value;
END;

function get_allocated( p : patient): boolean;
BEGIN
	return 	allocated[p];
END;

procedure set_donotallocate( p : patient ;  value : boolean);
BEGIN
	donotallocate[p] := value;
END;

function get_donotallocate( p : patient): boolean;
BEGIN
	return 	donotallocate[p];
END;

procedure set_patientuti( p : patient ;  value : boolean);
BEGIN
	patientuti[p] := value;
END;

function get_patientuti( p : patient): boolean;
BEGIN
	return 	patientuti[p];
END;

procedure set_bedobstetricia( varbed : bed ;  value : boolean);
BEGIN
	bedobstetricia[varbed] := value;
END;

function get_bedobstetricia( varbed : bed): boolean;
BEGIN
	return 	bedobstetricia[varbed];
END;

procedure set_patientobstetricia( p : patient ;  value : boolean);
BEGIN
	patientobstetricia[p] := value;
END;

function get_patientobstetricia( p : patient): boolean;
BEGIN
	return 	patientobstetricia[p];
END;

procedure set_beducl( varbed : bed ;  value : boolean);
BEGIN
	beducl[varbed] := value;
END;

function get_beducl( varbed : bed): boolean;
BEGIN
	return 	beducl[varbed];
END;

procedure set_patientucl( p : patient ;  value : boolean);
BEGIN
	patientucl[p] := value;
END;

function get_patientucl( p : patient): boolean;
BEGIN
	return 	patientucl[p];
END;

procedure set_bedavc( varbed : bed ;  value : boolean);
BEGIN
	bedavc[varbed] := value;
END;

function get_bedavc( varbed : bed): boolean;
BEGIN
	return 	bedavc[varbed];
END;

procedure set_patientavc( p : patient ;  value : boolean);
BEGIN
	patientavc[p] := value;
END;

function get_patientavc( p : patient): boolean;
BEGIN
	return 	patientavc[p];
END;

procedure set_bedpsiquiatria( varbed : bed ;  value : boolean);
BEGIN
	bedpsiquiatria[varbed] := value;
END;

function get_bedpsiquiatria( varbed : bed): boolean;
BEGIN
	return 	bedpsiquiatria[varbed];
END;

procedure set_patientpsiquiatria( p : patient ;  value : boolean);
BEGIN
	patientpsiquiatria[p] := value;
END;

function get_patientpsiquiatria( p : patient): boolean;
BEGIN
	return 	patientpsiquiatria[p];
END;

procedure set_bedcirurgiabariatrica( varbed : bed ;  value : boolean);
BEGIN
	bedcirurgiabariatrica[varbed] := value;
END;

function get_bedcirurgiabariatrica( varbed : bed): boolean;
BEGIN
	return 	bedcirurgiabariatrica[varbed];
END;

procedure set_patientcirurgiabariatrica( p : patient ;  value : boolean);
BEGIN
	patientcirurgiabariatrica[p] := value;
END;

function get_patientcirurgiabariatrica( p : patient): boolean;
BEGIN
	return 	patientcirurgiabariatrica[p];
END;

procedure set_bedginecologia( varbed : bed ;  value : boolean);
BEGIN
	bedginecologia[varbed] := value;
END;

function get_bedginecologia( varbed : bed): boolean;
BEGIN
	return 	bedginecologia[varbed];
END;

procedure set_patientginecologia( p : patient ;  value : boolean);
BEGIN
	patientginecologia[p] := value;
END;

function get_patientginecologia( p : patient): boolean;
BEGIN
	return 	patientginecologia[p];
END;




procedure event_check();
 var -- local vars declaration 
   event_triggered : boolean;
BEGIN
 event_triggered := true;
while (event_triggered) do 
 event_triggered := false;
END; -- close while loop 
END;



 function DAs_violate_duration() : boolean ; 
 var -- local vars declaration 
 DA_duration_violated : boolean;
 BEGIN
 DA_duration_violated := false;

 return DA_duration_violated; 
 END; -- close begin


 function DAs_ongoing_in_goal_state() : boolean ; 
 var -- local vars declaration 
 DA_still_ongoing : boolean;
 BEGIN
 DA_still_ongoing := false;

 return DA_still_ongoing; 
 END; -- close begin


procedure apply_continuous_change();
 var -- local vars declaration 
   process_updated : boolean;
 end_while : boolean;BEGIN
 process_updated := false; end_while := false;
while (!end_while) do 
 IF (!process_updated) then
	 end_while:=true;
 else process_updated:=false;
endif;END; -- close while loop 
END;

ruleset p:patient do 
 action rule " allocateuti " 
(!(allocated[p])) & (patientuti[p]) ==> 
pddlname: " allocateuti"; 
BEGIN
donotallocate[p]:= true; 

END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 action rule " allocateisolation " 
(!(allocated[p])) & (bedfree[varbed]) & (patientisolation[p]) ==> 
pddlname: " allocateisolation"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedisolation[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 ruleset varbirthtype:birthtype do 
 action rule " allocateobstetricia " 
(!(allocated[p])) & (bedfree[varbed]) & (patientobstetricia[p]) & (bedobstetricia[varbed]) & (bedbirthtype[varbed][varbirthtype]) & (patientbirthtype[p][varbirthtype]) ==> 
pddlname: " allocateobstetricia"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 ruleset varage:age do 
 action rule " allocateucl " 
(!(allocated[p])) & (bedfree[varbed]) & (patientucl[p]) & (beducl[varbed]) & (patientage[p][varage]) & (bedage[varbed][varage]) ==> 
pddlname: " allocateucl"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 ruleset vargender:gender do 
 action rule " allocateavc " 
(!(allocated[p])) & (bedfree[varbed]) & (patientavc[p]) & (bedavc[varbed]) & (patientgender[p][vargender]) & (bedgender[varbed][vargender]) ==> 
pddlname: " allocateavc"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 ruleset vargender:gender do 
 action rule " allocatepsiquiatria " 
(!(allocated[p])) & (bedfree[varbed]) & (patientpsiquiatria[p]) & (bedpsiquiatria[varbed]) & (patientgender[p][vargender]) & (bedgender[varbed][vargender]) ==> 
pddlname: " allocatepsiquiatria"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 ruleset vargender:gender do 
 action rule " allocatecirurgiabariatrica " 
(!(allocated[p])) & (bedfree[varbed]) & (patientcirurgiabariatrica[p]) & (bedcirurgiabariatrica[varbed]) & (patientgender[p][vargender]) & (bedgender[varbed][vargender]) ==> 
pddlname: " allocatecirurgiabariatrica"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 ruleset varroomtype:roomtype do 
 action rule " allocateginecologia " 
(!(allocated[p])) & (bedfree[varbed]) & (patientginecologia[p]) & (bedginecologia[varbed]) & (patientroomtype[p][varroomtype]) & (bedroomtype[varbed][varroomtype]) ==> 
pddlname: " allocateginecologia"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END; 
END;

ruleset p:patient do 
 ruleset varbed:bed do 
 ruleset varspecialty:specialty do 
 ruleset varstay:stay do 
 ruleset varroomtype:roomtype do 
 ruleset varorigin:origin do 
 ruleset vargender:gender do 
 ruleset varage:age do 
 ruleset varcare:care do 
 action rule " allocate " 
(!(allocated[p])) & (bedfree[varbed]) & (patientspecialty[p][varspecialty]) & (patientstay[p][varstay]) & (patientroomtype[p][varroomtype]) & (patientorigin[p][varorigin]) & (patientgender[p][vargender]) & (patientage[p][varage]) & (patientcare[p][varcare]) & (bedspecialty[varbed][varspecialty]) & (bedstay[varbed][varstay]) & (bedroomtype[varbed][varroomtype]) & (bedorigin[varbed][varorigin]) & (bedgender[varbed][vargender]) & (bedage[varbed][varage]) & (bedcare[varbed][varcare]) ==> 
pddlname: " allocate"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 
bedfree[varbed]:= false; 

END; 
END; 
END; 
END; 
END; 
END; 
END; 
END; 
END; 
END;

clock rule " time passing " 
 (true) ==> 
BEGIN 
 	TIME := TIME + T;

 	 event_check();
	 apply_continuous_change();
	 event_check();
END;


startstate "start" 
BEGIN 
TIME := 0.0;
for varbed : bed do 
  for varstay : stay do 
    set_bedstay(varbed,varstay, false);
END; END;  -- close for
   for varbed : bed do 
     for varroomtype : roomtype do 
       set_bedroomtype(varbed,varroomtype, false);
END; END;  -- close for
   for varbed : bed do 
     for varorigin : origin do 
       set_bedorigin(varbed,varorigin, false);
END; END;  -- close for
   for varbed : bed do 
     for vargender : gender do 
       set_bedgender(varbed,vargender, false);
END; END;  -- close for
   for varbed : bed do 
     for varage : age do 
       set_bedage(varbed,varage, false);
END; END;  -- close for
   for varbed : bed do 
     for varbirthtype : birthtype do 
       set_bedbirthtype(varbed,varbirthtype, false);
END; END;  -- close for
   for varbed : bed do 
     for varcare : care do 
       set_bedcare(varbed,varcare, false);
END; END;  -- close for
   for varbed : bed do 
     for varspecialty : specialty do 
       set_bedspecialty(varbed,varspecialty, false);
END; END;  -- close for
   for varbed : bed do 
     set_bedisolation(varbed, false);
END;  -- close for
   for varbed : bed do 
     set_bedfree(varbed, false);
END;  -- close for
   for varbed : bed do 
     set_busybed(varbed, false);
END;  -- close for
   for p : patient do 
     for varbed : bed do 
       set_in_(p,varbed, false);
END; END;  -- close for
   for p : patient do 
     for varstay : stay do 
       set_patientstay(p,varstay, false);
END; END;  -- close for
   for p : patient do 
     for varroomtype : roomtype do 
       set_patientroomtype(p,varroomtype, false);
END; END;  -- close for
   for p : patient do 
     for varorigin : origin do 
       set_patientorigin(p,varorigin, false);
END; END;  -- close for
   for p : patient do 
     for vargender : gender do 
       set_patientgender(p,vargender, false);
END; END;  -- close for
   for p : patient do 
     for varage : age do 
       set_patientage(p,varage, false);
END; END;  -- close for
   for p : patient do 
     for varbirthtype : birthtype do 
       set_patientbirthtype(p,varbirthtype, false);
END; END;  -- close for
   for p : patient do 
     for varcare : care do 
       set_patientcare(p,varcare, false);
END; END;  -- close for
   for p : patient do 
     for varspecialty : specialty do 
       set_patientspecialty(p,varspecialty, false);
END; END;  -- close for
   for p : patient do 
     set_patientisolation(p, false);
END;  -- close for
   for p : patient do 
     set_allocated(p, false);
END;  -- close for
   for p : patient do 
     set_donotallocate(p, false);
END;  -- close for
   for p : patient do 
     set_patientuti(p, false);
END;  -- close for
   for varbed : bed do 
     set_bedobstetricia(varbed, false);
END;  -- close for
   for p : patient do 
     set_patientobstetricia(p, false);
END;  -- close for
   for varbed : bed do 
     set_beducl(varbed, false);
END;  -- close for
   for p : patient do 
     set_patientucl(p, false);
END;  -- close for
   for varbed : bed do 
     set_bedavc(varbed, false);
END;  -- close for
   for p : patient do 
     set_patientavc(p, false);
END;  -- close for
   for varbed : bed do 
     set_bedpsiquiatria(varbed, false);
END;  -- close for
   for p : patient do 
     set_patientpsiquiatria(p, false);
END;  -- close for
   for varbed : bed do 
     set_bedcirurgiabariatrica(varbed, false);
END;  -- close for
   for p : patient do 
     set_patientcirurgiabariatrica(p, false);
END;  -- close for
   for varbed : bed do 
     set_bedginecologia(varbed, false);
END;  -- close for
   for p : patient do 
     set_patientginecologia(p, false);
END;  -- close for
   for p : patient do 
     agefunc[p] := 0.0 ;
END;  -- close for
patientuti[pacienteuti]:= true; 
bedfree[camaisolamento]:= true; 
patientisolation[pacienteisolamento]:= true; 
bedfree[camaobstetriciaaborto]:= true; 
bedfree[camaobstetricianascimento]:= true; 
patientobstetricia[pacienteobstetriciaaborto]:= true; 
patientobstetricia[pacienteobstetricianascimento]:= true; 
bedobstetricia[camaobstetriciaaborto]:= true; 
bedobstetricia[camaobstetricianascimento]:= true; 
bedbirthtype[camaobstetriciaaborto][aborto]:= true; 
bedbirthtype[camaobstetricianascimento][nascimento]:= true; 
patientbirthtype[pacienteobstetriciaaborto][aborto]:= true; 
patientbirthtype[pacienteobstetricianascimento][nascimento]:= true; 
bedfree[camaucladulto]:= true; 
bedfree[camauclcrianca]:= true; 
patientucl[pacienteucladulto]:= true; 
patientucl[pacienteuclcrianca]:= true; 
beducl[camaucladulto]:= true; 
beducl[camauclcrianca]:= true; 
patientage[pacienteucladulto][adulto]:= true; 
patientage[pacienteuclcrianca][crianca]:= true; 
bedage[camaucladulto][adulto]:= true; 
bedage[camauclcrianca][crianca]:= true; 
bedfree[camaavcfeminino]:= true; 
bedfree[camaavcmasculino]:= true; 
patientavc[pacienteavcfeminino]:= true; 
patientavc[pacienteavcmasculino]:= true; 
bedavc[camaavcfeminino]:= true; 
bedavc[camaavcmasculino]:= true; 
patientgender[pacienteavcfeminino][feminino]:= true; 
patientgender[pacienteavcmasculino][masculino]:= true; 
bedgender[camaavcfeminino][feminino]:= true; 
bedgender[camaavcmasculino][masculino]:= true; 
bedfree[camapsiquiatriafeminino]:= true; 
bedfree[camapsiquiatriamasculino]:= true; 
patientpsiquiatria[pacientepsiquiatriafeminino]:= true; 
patientpsiquiatria[pacientepsiquiatriamasculino]:= true; 
bedpsiquiatria[camapsiquiatriafeminino]:= true; 
bedpsiquiatria[camapsiquiatriamasculino]:= true; 
patientgender[pacientepsiquiatriafeminino][feminino]:= true; 
patientgender[pacientepsiquiatriamasculino][masculino]:= true; 
bedgender[camapsiquiatriafeminino][feminino]:= true; 
bedgender[camapsiquiatriamasculino][masculino]:= true; 
bedfree[camacirurgiabariatricafeminino]:= true; 
bedfree[camacirurgiabariatricamasculino]:= true; 
patientcirurgiabariatrica[pacientecirurgiabariatricafeminino]:= true; 
patientcirurgiabariatrica[pacientecirurgiabariatricamasculino]:= true; 
bedcirurgiabariatrica[camacirurgiabariatricafeminino]:= true; 
bedcirurgiabariatrica[camacirurgiabariatricamasculino]:= true; 
patientgender[pacientecirurgiabariatricafeminino][feminino]:= true; 
patientgender[pacientecirurgiabariatricamasculino][masculino]:= true; 
bedgender[camacirurgiabariatricafeminino][feminino]:= true; 
bedgender[camacirurgiabariatricamasculino][masculino]:= true; 
bedfree[camaginecologiaclinico]:= true; 
bedfree[camaginecologiacirurgico]:= true; 
patientginecologia[pacienteginecologiaclinico]:= true; 
patientginecologia[pacienteginecologiacirurgico]:= true; 
bedginecologia[camaginecologiaclinico]:= true; 
bedginecologia[camaginecologiacirurgico]:= true; 
patientroomtype[pacienteginecologiaclinico][clinico]:= true; 
patientroomtype[pacienteginecologiacirurgico][cirurgico]:= true; 
bedroomtype[camaginecologiaclinico][clinico]:= true; 
bedroomtype[camaginecologiacirurgico][cirurgico]:= true; 
bedfree[camageralminimolongapermanencia]:= true; 
bedfree[camageralintensivogirorapido]:= true; 
patientspecialty[pacientegeralminimolongapermanencia][geral]:= true; 
patientspecialty[pacientegeralintensivogirorapido][geral]:= true; 
patientstay[pacientegeralminimolongapermanencia][longapermanencia]:= true; 
patientstay[pacientegeralintensivogirorapido][girorapido]:= true; 
patientroomtype[pacientegeralminimolongapermanencia][clinico]:= true; 
patientroomtype[pacientegeralintensivogirorapido][clinico]:= true; 
patientorigin[pacientegeralminimolongapermanencia][eletivo]:= true; 
patientorigin[pacientegeralintensivogirorapido][eletivo]:= true; 
patientgender[pacientegeralminimolongapermanencia][masculino]:= true; 
patientgender[pacientegeralintensivogirorapido][masculino]:= true; 
patientage[pacientegeralminimolongapermanencia][adulto]:= true; 
patientage[pacientegeralintensivogirorapido][adulto]:= true; 
patientcare[pacientegeralminimolongapermanencia][minimo]:= true; 
patientcare[pacientegeralintensivogirorapido][intensivo]:= true; 
bedspecialty[camageralminimolongapermanencia][geral]:= true; 
bedspecialty[camageralintensivogirorapido][geral]:= true; 
bedstay[camageralminimolongapermanencia][longapermanencia]:= true; 
bedstay[camageralintensivogirorapido][girorapido]:= true; 
bedroomtype[camageralminimolongapermanencia][clinico]:= true; 
bedroomtype[camageralintensivogirorapido][clinico]:= true; 
bedorigin[camageralminimolongapermanencia][eletivo]:= true; 
bedorigin[camageralintensivogirorapido][eletivo]:= true; 
bedgender[camageralminimolongapermanencia][masculino]:= true; 
bedgender[camageralintensivogirorapido][masculino]:= true; 
bedage[camageralminimolongapermanencia][adulto]:= true; 
bedage[camageralintensivogirorapido][adulto]:= true; 
bedcare[camageralminimolongapermanencia][minimo]:= true; 
bedcare[camageralintensivogirorapido][intensivo]:= true; 
all_event_true := true;
g_n := 0;
h_n := 0;
f_n := 0;
END; -- close startstate

goal "enjoy" 
 (allocated[pacientegeralminimolongapermanencia]) & (allocated[pacientegeralintensivogirorapido])& !DAs_ongoing_in_goal_state(); 

invariant "todo bien" 
 all_event_true & !DAs_violate_duration();
metric: minimize;


