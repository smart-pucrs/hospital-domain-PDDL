domain: file "hospital.pddl"
problem: file "problem.pddl"
message: " Time Discretisation = 0.1"
message: " Digits for representing the integer part of a real =  5"
message: " Digits for representing the fractional part of a real =  4"
type
	 real_type: real(7,4);
	integer: -1000..1000;

	 TIME_type: real(7,2);

	patient : Enum {pacientemedicinainternaminimo,pacientemedicinainternaintensivo};
	bed : Enum {camamedicinainternaminimo,camamedicinainternaintensivo};
	care : Enum {minimo,intensivo};
	specialty : Enum {medicinainterna};

const 
	 T:0.1;


var 
	all_event_true: boolean;
	 h_n: integer;
	 g_n: integer;
	 f_n: integer;
	 TIME[pddlname:"upmurphi_global_clock";]:TIME_type;
	age[pddlname:"age";] : Array [patient] of  real_type;


	bedcare[pddlname: "bedcare";] : Array [bed] of Array [care] of  boolean;
	bedmedicinainterna[pddlname: "bedmedicinainterna";] : Array [bed] of  boolean;
	bedspecialty[pddlname: "bedspecialty";] : Array [bed] of Array [specialty] of  boolean;
	bedfree[pddlname: "bedfree";] : Array [bed] of  boolean;
	busybed[pddlname: "busybed";] : Array [bed] of  boolean;
	in_[pddlname: "in";] : Array [patient] of Array [bed] of  boolean;
	allocated[pddlname: "allocated";] : Array [patient] of  boolean;
	patientcare[pddlname: "patientcare";] : Array [patient] of Array [care] of  boolean;
	patientspecialty[pddlname: "patientspecialty";] : Array [patient] of Array [specialty] of  boolean;
	patientmedicinainterna[pddlname: "patientmedicinainterna";] : Array [patient] of  boolean;


-- External function declaration 

externfun ext_assignment(value : real_type) : real_type;
procedure set_bedcare( varbed : bed ; varcare : care ;  value : boolean);
BEGIN
	bedcare[varbed][varcare] := value;
END;

function get_bedcare( varbed : bed ; varcare : care): boolean;
BEGIN
	return 	bedcare[varbed][varcare];
END;

procedure set_bedmedicinainterna( varbed : bed ;  value : boolean);
BEGIN
	bedmedicinainterna[varbed] := value;
END;

function get_bedmedicinainterna( varbed : bed): boolean;
BEGIN
	return 	bedmedicinainterna[varbed];
END;

procedure set_bedspecialty( varbed : bed ; varspecialty : specialty ;  value : boolean);
BEGIN
	bedspecialty[varbed][varspecialty] := value;
END;

function get_bedspecialty( varbed : bed ; varspecialty : specialty): boolean;
BEGIN
	return 	bedspecialty[varbed][varspecialty];
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

procedure set_allocated( p : patient ;  value : boolean);
BEGIN
	allocated[p] := value;
END;

function get_allocated( p : patient): boolean;
BEGIN
	return 	allocated[p];
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

procedure set_patientmedicinainterna( p : patient ;  value : boolean);
BEGIN
	patientmedicinainterna[p] := value;
END;

function get_patientmedicinainterna( p : patient): boolean;
BEGIN
	return 	patientmedicinainterna[p];
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
 ruleset varbed:bed do 
 ruleset varcare:care do 
 action rule " allocatemedicinainterna " 
(!(allocated[p])) & (bedfree[varbed]) & (bedmedicinainterna[varbed]) & (bedcare[varbed][varcare]) & (patientcare[p][varcare]) & (patientmedicinainterna[p]) ==> 
pddlname: " allocatemedicinainterna"; 
BEGIN
in_[p][varbed]:= true; 
allocated[p]:= true; 
busybed[varbed]:= true; 

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
  for varcare : care do 
    set_bedcare(varbed,varcare, false);
END; END;  -- close for
   for varbed : bed do 
     set_bedmedicinainterna(varbed, false);
END;  -- close for
   for varbed : bed do 
     for varspecialty : specialty do 
       set_bedspecialty(varbed,varspecialty, false);
END; END;  -- close for
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
     set_allocated(p, false);
END;  -- close for
   for p : patient do 
     for varcare : care do 
       set_patientcare(p,varcare, false);
END; END;  -- close for
   for p : patient do 
     for varspecialty : specialty do 
       set_patientspecialty(p,varspecialty, false);
END; END;  -- close for
   for p : patient do 
     set_patientmedicinainterna(p, false);
END;  -- close for
   for p : patient do 
     age[p] := 0.0 ;
END;  -- close for
bedfree[camamedicinainternaminimo]:= true; 
bedfree[camamedicinainternaintensivo]:= true; 
patientspecialty[pacientemedicinainternaminimo][medicinainterna]:= true; 
patientspecialty[pacientemedicinainternaintensivo][medicinainterna]:= true; 
patientmedicinainterna[pacientemedicinainternaminimo]:= true; 
patientmedicinainterna[pacientemedicinainternaintensivo]:= true; 
patientcare[pacientemedicinainternaminimo][minimo]:= true; 
patientcare[pacientemedicinainternaintensivo][intensivo]:= true; 
bedcare[camamedicinainternaminimo][minimo]:= true; 
bedcare[camamedicinainternaintensivo][intensivo]:= true; 
bedspecialty[camamedicinainternaminimo][medicinainterna]:= true; 
bedspecialty[camamedicinainternaintensivo][medicinainterna]:= true; 
bedmedicinainterna[camamedicinainternaminimo]:= true; 
bedmedicinainterna[camamedicinainternaintensivo]:= true; 
all_event_true := true;
g_n := 0;
h_n := 0;
f_n := 0;
END; -- close startstate

goal "enjoy" 
 (allocated[pacientemedicinainternaminimo]) & (allocated[pacientemedicinainternaintensivo])& !DAs_ongoing_in_goal_state(); 

invariant "todo bien" 
 all_event_true & !DAs_violate_duration();
metric: minimize;


