domain: file "bkphospital.pddl"
problem: file "bkpproblem.pddl"
message: " Time Discretisation = 0.1"
message: " Digits for representing the integer part of a real =  5"
message: " Digits for representing the fractional part of a real =  4"
type
	 real_type: real(7,4);
	integer: -1000..1000;

	 TIME_type: real(7,2);

	patient : Enum {pacienteuti,pacienteisolation,pacienteobstetrics};
	bed : Enum {camaisolation,camaobstetrics};

const 
	 T:0.1;


var 
	all_event_true: boolean;
	 h_n: integer;
	 g_n: integer;
	 f_n: integer;
	 TIME[pddlname:"upmurphi_global_clock";]:TIME_type;
	distance[pddlname:"distance";] : Array [bed] of Array [bed] of  real_type;
	maxspeed[pddlname:"maxspeed";] : Array [patient] of  real_type;
	speed[pddlname:"speed";] : Array [patient] of  real_type;
	traveltime[pddlname:"traveltime";] : Array [patient] of  real_type;


	bedchildbirth[pddlname: "bedchildbirth";] : Array [bed] of  boolean;
	bedfree[pddlname: "bedfree";] : Array [bed] of  boolean;
	busybed[pddlname: "busybed";] : Array [bed] of  boolean;
	in_[pddlname: "in";] : Array [patient] of Array [bed] of  boolean;
	donotallocate[pddlname: "donotallocate";] : Array [patient] of  boolean;
	isolation[pddlname: "isolation";] : Array [patient] of  boolean;
	bedisolation[pddlname: "bedisolation";] : Array [bed] of  boolean;
	allocated[pddlname: "allocated";] : Array [patient] of  boolean;
	uti[pddlname: "uti";] : Array [patient] of  boolean;
	bedobstetrics[pddlname: "bedobstetrics";] : Array [bed] of  boolean;
	obstetrics[pddlname: "obstetrics";] : Array [patient] of  boolean;
	patientchildbirth[pddlname: "patientchildbirth";] : Array [patient] of  boolean;
	medicinainterna[pddlname: "medicinainterna";] : Array [patient] of  boolean;
	bedmedicinainterna[pddlname: "bedmedicinainterna";] : Array [bed] of  boolean;


-- External function declaration 

externfun ext_assignment(value : real_type) : real_type;
procedure set_bedchildbirth( bed : bed ;  value : boolean);
BEGIN
	bedchildbirth[bed] := value;
END;

function get_bedchildbirth( bed : bed): boolean;
BEGIN
	return 	bedchildbirth[bed];
END;

procedure set_bedfree( bed : bed ;  value : boolean);
BEGIN
	bedfree[bed] := value;
END;

function get_bedfree( bed : bed): boolean;
BEGIN
	return 	bedfree[bed];
END;

procedure set_busybed( bed : bed ;  value : boolean);
BEGIN
	busybed[bed] := value;
END;

function get_busybed( bed : bed): boolean;
BEGIN
	return 	busybed[bed];
END;

procedure set_in_( patient : patient ; bed : bed ;  value : boolean);
BEGIN
	in_[patient][bed] := value;
END;

function get_in_( patient : patient ; bed : bed): boolean;
BEGIN
	return 	in_[patient][bed];
END;

procedure set_donotallocate( patient : patient ;  value : boolean);
BEGIN
	donotallocate[patient] := value;
END;

function get_donotallocate( patient : patient): boolean;
BEGIN
	return 	donotallocate[patient];
END;

procedure set_isolation( patient : patient ;  value : boolean);
BEGIN
	isolation[patient] := value;
END;

function get_isolation( patient : patient): boolean;
BEGIN
	return 	isolation[patient];
END;

procedure set_bedisolation( bed : bed ;  value : boolean);
BEGIN
	bedisolation[bed] := value;
END;

function get_bedisolation( bed : bed): boolean;
BEGIN
	return 	bedisolation[bed];
END;

procedure set_allocated( patient : patient ;  value : boolean);
BEGIN
	allocated[patient] := value;
END;

function get_allocated( patient : patient): boolean;
BEGIN
	return 	allocated[patient];
END;

procedure set_uti( patient : patient ;  value : boolean);
BEGIN
	uti[patient] := value;
END;

function get_uti( patient : patient): boolean;
BEGIN
	return 	uti[patient];
END;

procedure set_bedobstetrics( bed : bed ;  value : boolean);
BEGIN
	bedobstetrics[bed] := value;
END;

function get_bedobstetrics( bed : bed): boolean;
BEGIN
	return 	bedobstetrics[bed];
END;

procedure set_obstetrics( patient : patient ;  value : boolean);
BEGIN
	obstetrics[patient] := value;
END;

function get_obstetrics( patient : patient): boolean;
BEGIN
	return 	obstetrics[patient];
END;

procedure set_patientchildbirth( patient : patient ;  value : boolean);
BEGIN
	patientchildbirth[patient] := value;
END;

function get_patientchildbirth( patient : patient): boolean;
BEGIN
	return 	patientchildbirth[patient];
END;

procedure set_medicinainterna( patient : patient ;  value : boolean);
BEGIN
	medicinainterna[patient] := value;
END;

function get_medicinainterna( patient : patient): boolean;
BEGIN
	return 	medicinainterna[patient];
END;

procedure set_bedmedicinainterna( bed : bed ;  value : boolean);
BEGIN
	bedmedicinainterna[bed] := value;
END;

function get_bedmedicinainterna( bed : bed): boolean;
BEGIN
	return 	bedmedicinainterna[bed];
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

ruleset patient:patient do 
 action rule " allocateuti " 
(!(allocated[patient])) & (uti[patient]) ==> 
pddlname: " allocateuti"; 
BEGIN
donotallocate[patient]:= true; 

END; 
END;

ruleset patient:patient do 
 ruleset bed:bed do 
 action rule " allocateisolation " 
(!(allocated[patient])) & (bedfree[bed]) & (isolation[patient]) ==> 
pddlname: " allocateisolation"; 
BEGIN
in_[patient][bed]:= true; 
allocated[patient]:= true; 
busybed[bed]:= true; 
bedisolation[bed]:= true; 

END; 
END; 
END;

ruleset patient:patient do 
 ruleset bed:bed do 
 action rule " allocateobstetrics " 
(!(allocated[patient])) & (bedfree[bed]) & (obstetrics[patient]) & (patientchildbirth[patient]) & (bedobstetrics[bed]) & (bedchildbirth[bed]) ==> 
pddlname: " allocateobstetrics"; 
BEGIN
in_[patient][bed]:= true; 
allocated[patient]:= true; 
busybed[bed]:= true; 

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
for bed : bed do 
  set_bedchildbirth(bed, false);
END;  -- close for
   for bed : bed do 
     set_bedfree(bed, false);
END;  -- close for
   for bed : bed do 
     set_busybed(bed, false);
END;  -- close for
   for patient : patient do 
     for bed : bed do 
       set_in_(patient,bed, false);
END; END;  -- close for
   for patient : patient do 
     set_donotallocate(patient, false);
END;  -- close for
   for patient : patient do 
     set_isolation(patient, false);
END;  -- close for
   for bed : bed do 
     set_bedisolation(bed, false);
END;  -- close for
   for patient : patient do 
     set_allocated(patient, false);
END;  -- close for
   for patient : patient do 
     set_uti(patient, false);
END;  -- close for
   for bed : bed do 
     set_bedobstetrics(bed, false);
END;  -- close for
   for patient : patient do 
     set_obstetrics(patient, false);
END;  -- close for
   for patient : patient do 
     set_patientchildbirth(patient, false);
END;  -- close for
   for patient : patient do 
     set_medicinainterna(patient, false);
END;  -- close for
   for bed : bed do 
     set_bedmedicinainterna(bed, false);
END;  -- close for
   for patient : patient do 
     maxspeed[patient] := 0.0 ;
END;  -- close for
   for patient : patient do 
     speed[patient] := 0.0 ;
END;  -- close for
   for patient : patient do 
     traveltime[patient] := 0.0 ;
END;  -- close for
   for p : bed do 
     for bed : bed do 
       distance[p][bed] := 0.0 ;
END; END;  -- close for
bedfree[camaisolation]:= true; 
uti[pacienteuti]:= true; 
isolation[pacienteisolation]:= true; 
bedfree[camaobstetrics]:= true; 
obstetrics[pacienteobstetrics]:= true; 
patientchildbirth[pacienteobstetrics]:= true; 
bedobstetrics[camaobstetrics]:= true; 
bedchildbirth[camaobstetrics]:= true; 
all_event_true := true;
g_n := 0;
h_n := 0;
f_n := 0;
END; -- close startstate

goal "enjoy" 
 (allocated[pacienteisolation]) & (donotallocate[pacienteuti]) & (allocated[pacienteobstetrics])& !DAs_ongoing_in_goal_state(); 

invariant "todo bien" 
 all_event_true & !DAs_violate_duration();
metric: minimize;


