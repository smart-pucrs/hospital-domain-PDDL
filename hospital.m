domain: file "hospital.pddl"
problem: file "problem.pddl"
message: " Time Discretisation = 0.1"
message: " Digits for representing the integer part of a real =  5"
message: " Digits for representing the fractional part of a real =  4"
type
	 real_type: real(7,4);
	integer: -1000..1000;

	 TIME_type: real(7,2);

	patient : Enum {pessoa};
	bed : Enum {cama};

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


	at[pddlname: "at";] : Array [patient] of Array [bed] of  boolean;
	bedfree[pddlname: "bedfree";] : Array [bed] of  boolean;
	busybed[pddlname: "busybed";] : Array [bed] of  boolean;
	alocated[pddlname: "alocated";] : Array [patient] of  boolean;


-- External function declaration 

externfun ext_assignment(value : real_type) : real_type;
procedure set_at( patient : patient ; bed : bed ;  value : boolean);
BEGIN
	at[patient][bed] := value;
END;

function get_at( patient : patient ; bed : bed): boolean;
BEGIN
	return 	at[patient][bed];
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

procedure set_alocated( patient : patient ;  value : boolean);
BEGIN
	alocated[patient] := value;
END;

function get_alocated( patient : patient): boolean;
BEGIN
	return 	alocated[patient];
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
 ruleset bed:bed do 
 action rule " allocate " 
(!(alocated[patient])) & (bedfree[bed]) ==> 
pddlname: " allocate"; 
BEGIN
at[patient][bed]:= true; 
busybed[bed]:= true; 
alocated[patient]:= true; 

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
for patient : patient do 
  for bed : bed do 
    set_at(patient,bed, false);
END; END;  -- close for
   for bed : bed do 
     set_bedfree(bed, false);
END;  -- close for
   for bed : bed do 
     set_busybed(bed, false);
END;  -- close for
   for patient : patient do 
     set_alocated(patient, false);
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
bedfree[cama]:= true; 
all_event_true := true;
g_n := 0;
h_n := 0;
f_n := 0;
END; -- close startstate

goal "enjoy" 
 (alocated[pessoa])& !DAs_ongoing_in_goal_state(); 

invariant "todo bien" 
 all_event_true & !DAs_violate_duration();
metric: minimize;


