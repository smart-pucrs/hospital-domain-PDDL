/******************************
  Program "hospital.m" compiled by "DiNo Release 1.1"

  DiNo Last Compiled date: "Aug 25 2018"
 ******************************/

/********************
  Parameter
 ********************/
#define DINO_VERSION "DiNo Release 1.1"
#define MURPHI_DATE "Aug 25 2018"
#define PROTOCOL_NAME "hospital"
#define DOMAIN_FILENAME "hospital.pddl"
#define PROBLEM_FILENAME "problem1.pddl"
#define DISCRETIZATION 0.100000
#define VAL_PATHNAME "/home/debo/planejador/DiNo/src/DiNo/../VAL-master/validate"
#define BITS_IN_WORLD 2839
#define HASHC
#define HAS_CLOCK
const char * const modelmessages[] = { " Time Discretisation = 0.1"," Digits for representing the integer part of a real =  5"," Digits for representing the fractional part of a real =  4" };
const int modelmessagecount = 3;

/********************
  Include
 ********************/
#include "upm_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_real_type: public mu__real
{
 public:
  inline double operator=(double val) { return mu__real::operator=(val); };
  inline double operator=(const mu_1_real_type& val) { return mu__real::operator=((double) val); };
  mu_1_real_type (const char *name, int os): mu__real(7,4,40,name, os) {};
  mu_1_real_type (void): mu__real(7,4,40) {};
  mu_1_real_type (double val): mu__real(7,4,40,"Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%le",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of real decl ***/
mu_1_real_type mu_1_real_type_undefined_var;

class mu_1_integer: public mu__long
{
 public:
  inline int operator=(int val) { return mu__long::operator=(val); };
  inline int operator=(const mu_1_integer& val) { return mu__long::operator=((int) val); };
  mu_1_integer (const char *name, int os): mu__long(-1000, 1000, 11, name, os) {};
  mu_1_integer (void): mu__long(-1000, 1000, 11) {};
  mu_1_integer (int val): mu__long(-1000, 1000, 11, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_integer mu_1_integer_undefined_var;

class mu_1_TIME_type: public mu__real
{
 public:
  inline double operator=(double val) { return mu__real::operator=(val); };
  inline double operator=(const mu_1_TIME_type& val) { return mu__real::operator=((double) val); };
  mu_1_TIME_type (const char *name, int os): mu__real(7,2,40,name, os) {};
  mu_1_TIME_type (void): mu__real(7,2,40) {};
  mu_1_TIME_type (double val): mu__real(7,2,40,"Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%le",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of real decl ***/
mu_1_TIME_type mu_1_TIME_type_undefined_var;

class mu_1_patient: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_patient& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_patient& val)
  {
    if (val.defined())
      return ( s << mu_1_patient::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_patient (const char *name, int os): mu__byte(1, 16, 5, name, os) {};
  mu_1_patient (void): mu__byte(1, 16, 5) {};
  mu_1_patient (int val): mu__byte(1, 16, 5, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -1],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_patient::values[] = {"pacienteuti","pacienteisolamento","pacienteobstetriciaaborto","pacienteobstetricianascimento","pacienteucladulto","pacienteuclcrianca","pacienteavcfeminino","pacienteavcmasculino","pacientepsiquiatriafeminino","pacientepsiquiatriamasculino","pacientecirurgiabariatricafeminino","pacientecirurgiabariatricamasculino","pacienteginecologiaclinico","pacienteginecologiacirurgico","pacientegeralminimolongapermanencia","pacientegeralintensivogirorapido",NULL };

/*** end of enum declaration ***/
mu_1_patient mu_1_patient_undefined_var;

class mu_1_bed: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_bed& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_bed& val)
  {
    if (val.defined())
      return ( s << mu_1_bed::values[ int(val) - 17] );
    else return ( s << "Undefined" );
  };

  mu_1_bed (const char *name, int os): mu__byte(17, 31, 4, name, os) {};
  mu_1_bed (void): mu__byte(17, 31, 4) {};
  mu_1_bed (int val): mu__byte(17, 31, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -17]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -17],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_bed::values[] = {"camaisolamento","camaobstetriciaaborto","camaobstetricianascimento","camaucladulto","camauclcrianca","camaavcfeminino","camaavcmasculino","camapsiquiatriafeminino","camapsiquiatriamasculino","camacirurgiabariatricafeminino","camacirurgiabariatricamasculino","camaginecologiaclinico","camaginecologiacirurgico","camageralminimolongapermanencia","camageralintensivogirorapido",NULL };

/*** end of enum declaration ***/
mu_1_bed mu_1_bed_undefined_var;

class mu_1_care: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_care& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_care& val)
  {
    if (val.defined())
      return ( s << mu_1_care::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_care (const char *name, int os): mu__byte(32, 34, 2, name, os) {};
  mu_1_care (void): mu__byte(32, 34, 2) {};
  mu_1_care (int val): mu__byte(32, 34, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -32],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_care::values[] = {"minimo","intensivo","semiintensivo",NULL };

/*** end of enum declaration ***/
mu_1_care mu_1_care_undefined_var;

class mu_1_specialty: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_specialty& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_specialty& val)
  {
    if (val.defined())
      return ( s << mu_1_specialty::values[ int(val) - 35] );
    else return ( s << "Undefined" );
  };

  mu_1_specialty (const char *name, int os): mu__byte(35, 35, 1, name, os) {};
  mu_1_specialty (void): mu__byte(35, 35, 1) {};
  mu_1_specialty (int val): mu__byte(35, 35, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -35]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -35],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_specialty::values[] = {"geral",NULL };

/*** end of enum declaration ***/
mu_1_specialty mu_1_specialty_undefined_var;

class mu_1_birthtype: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_birthtype& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_birthtype& val)
  {
    if (val.defined())
      return ( s << mu_1_birthtype::values[ int(val) - 36] );
    else return ( s << "Undefined" );
  };

  mu_1_birthtype (const char *name, int os): mu__byte(36, 37, 2, name, os) {};
  mu_1_birthtype (void): mu__byte(36, 37, 2) {};
  mu_1_birthtype (int val): mu__byte(36, 37, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -36]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -36],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_birthtype::values[] = {"aborto","nascimento",NULL };

/*** end of enum declaration ***/
mu_1_birthtype mu_1_birthtype_undefined_var;

class mu_1_age: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_age& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_age& val)
  {
    if (val.defined())
      return ( s << mu_1_age::values[ int(val) - 38] );
    else return ( s << "Undefined" );
  };

  mu_1_age (const char *name, int os): mu__byte(38, 40, 2, name, os) {};
  mu_1_age (void): mu__byte(38, 40, 2) {};
  mu_1_age (int val): mu__byte(38, 40, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -38]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -38],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_age::values[] = {"crianca","adulto","adolescente",NULL };

/*** end of enum declaration ***/
mu_1_age mu_1_age_undefined_var;

class mu_1_gender: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_gender& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_gender& val)
  {
    if (val.defined())
      return ( s << mu_1_gender::values[ int(val) - 41] );
    else return ( s << "Undefined" );
  };

  mu_1_gender (const char *name, int os): mu__byte(41, 42, 2, name, os) {};
  mu_1_gender (void): mu__byte(41, 42, 2) {};
  mu_1_gender (int val): mu__byte(41, 42, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -41]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -41],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_gender::values[] = {"masculino","feminino",NULL };

/*** end of enum declaration ***/
mu_1_gender mu_1_gender_undefined_var;

class mu_1_origin: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_origin& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_origin& val)
  {
    if (val.defined())
      return ( s << mu_1_origin::values[ int(val) - 43] );
    else return ( s << "Undefined" );
  };

  mu_1_origin (const char *name, int os): mu__byte(43, 44, 2, name, os) {};
  mu_1_origin (void): mu__byte(43, 44, 2) {};
  mu_1_origin (int val): mu__byte(43, 44, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -43]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -43],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_origin::values[] = {"eletivo","agudo",NULL };

/*** end of enum declaration ***/
mu_1_origin mu_1_origin_undefined_var;

class mu_1_roomtype: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_roomtype& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_roomtype& val)
  {
    if (val.defined())
      return ( s << mu_1_roomtype::values[ int(val) - 45] );
    else return ( s << "Undefined" );
  };

  mu_1_roomtype (const char *name, int os): mu__byte(45, 46, 2, name, os) {};
  mu_1_roomtype (void): mu__byte(45, 46, 2) {};
  mu_1_roomtype (int val): mu__byte(45, 46, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -45]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -45],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_roomtype::values[] = {"clinico","cirurgico",NULL };

/*** end of enum declaration ***/
mu_1_roomtype mu_1_roomtype_undefined_var;

class mu_1_stay: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_stay& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_stay& val)
  {
    if (val.defined())
      return ( s << mu_1_stay::values[ int(val) - 47] );
    else return ( s << "Undefined" );
  };

  mu_1_stay (const char *name, int os): mu__byte(47, 48, 2, name, os) {};
  mu_1_stay (void): mu__byte(47, 48, 2) {};
  mu_1_stay (int val): mu__byte(47, 48, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -47]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print(FILE *target, const char *separator)
  {
    if (defined())
    fprintf(target,"%s: %s%s",name,values[ value() -47],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_stay::values[] = {"longapermanencia","girorapido",NULL };

/*** end of enum declaration ***/
mu_1_stay mu_1_stay_undefined_var;

class mu_1__type_0/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 16 ]; 
#define awesome_mu_00_mu_1_real_type_mu_1__type_0 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_real_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_0
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_0
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_0
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_0
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_0
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_0
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_0::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_1 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 47 ) && ( index <= 48 ) )
      return array[ index - 47 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 47 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_1
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_1
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_1
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_1
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_1
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_1
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_1::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"longapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"girorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2/*:public mu_1__type_super*/
{
 public:
  mu_1__type_1 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_1_mu_1__type_2 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1__type_1& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_2
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_2
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_2
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_2
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_2
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_2
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_2::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_3 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 45 ) && ( index <= 46 ) )
      return array[ index - 45 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 45 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_3
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_3
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_3
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_3
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_3
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_3
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_3::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"clinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4/*:public mu_1__type_super*/
{
 public:
  mu_1__type_3 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_3_mu_1__type_4 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1__type_3& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_4
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_4
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_4
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_4
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_4
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_4
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_4::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_5 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 43 ) && ( index <= 44 ) )
      return array[ index - 43 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 43 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_5
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_5
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_5
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_5
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_5
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_5
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_5::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"eletivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"agudo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6/*:public mu_1__type_super*/
{
 public:
  mu_1__type_5 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_5_mu_1__type_6 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1__type_5& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_6
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_6
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_6
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_6
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_6
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_6
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_6::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_7 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 41 ) && ( index <= 42 ) )
      return array[ index - 41 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 41 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_7
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_7
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_7
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_7
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_7
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_7
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_7::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"masculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"feminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8/*:public mu_1__type_super*/
{
 public:
  mu_1__type_7 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_7_mu_1__type_8 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1__type_7& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_8
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_8
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_8
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_8
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_8
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_8
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_8::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_9 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 38 ) && ( index <= 40 ) )
      return array[ index - 38 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 38 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_9
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_9
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_9
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_9
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_9
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_9
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_9::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"crianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adolescente", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10/*:public mu_1__type_super*/
{
 public:
  mu_1__type_9 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_9_mu_1__type_10 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1__type_9& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_10
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_10
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_10
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_10
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_10
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_10
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_10::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_11 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 36 ) && ( index <= 37 ) )
      return array[ index - 36 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 36 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_11
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_11
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_11
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_11
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_11
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_11
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_11::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"aborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12/*:public mu_1__type_super*/
{
 public:
  mu_1__type_11 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_11_mu_1__type_12 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_1__type_11& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_12
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_12
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_12
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_12
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_12
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_12
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_12::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_12::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_12::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_13 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 32 ) && ( index <= 34 ) )
      return array[ index - 32 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 32 ];
#endif
  };
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_13
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_13
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_13
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_13
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_13
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_13
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_13::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_13::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_13::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"minimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"intensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"semiintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14/*:public mu_1__type_super*/
{
 public:
  mu_1__type_13 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_13_mu_1__type_14 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_1__type_13& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_14
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_14
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_14
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_14
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_14
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_14
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_14::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_14::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_14::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_15 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_15 (const char *n, int os) { set_self(n, os); };
  mu_1__type_15 ( void ) {};
  virtual ~mu_1__type_15 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 35 ) && ( index <= 35 ) )
      return array[ index - 35 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 35 ];
#endif
  };
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_15
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_15
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_15
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_15
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_15
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_15
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_15::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_15::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_15::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"geral", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16/*:public mu_1__type_super*/
{
 public:
  mu_1__type_15 array[ 15 ]; 
#define awesome_mu_00_mu_1__type_15_mu_1__type_16 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_16 (const char *n, int os) { set_self(n, os); };
  mu_1__type_16 ( void ) {};
  virtual ~mu_1__type_16 ();
  mu_1__type_15& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_16& operator= (const mu_1__type_16& from)
  {
    for (int i = 0; i < 15; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_16
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_16
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_16
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_16
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_16
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_16
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_16::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_16::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_16::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_16::~mu_1__type_16()
{
}
/*** end array declaration ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_17 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_17 (const char *n, int os) { set_self(n, os); };
  mu_1__type_17 ( void ) {};
  virtual ~mu_1__type_17 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_17& operator= (const mu_1__type_17& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_17
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_17
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_17
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_17
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_17
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_17
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_17::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_17::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_17::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_17::~mu_1__type_17()
{
}
/*** end array declaration ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1__type_18/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_18 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_18 (const char *n, int os) { set_self(n, os); };
  mu_1__type_18 ( void ) {};
  virtual ~mu_1__type_18 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_18& operator= (const mu_1__type_18& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_18
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_18
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_18
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_18
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_18
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_18
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_18::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_18::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_18::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_18::~mu_1__type_18()
{
}
/*** end array declaration ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1__type_19/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_19 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_19 (const char *n, int os) { set_self(n, os); };
  mu_1__type_19 ( void ) {};
  virtual ~mu_1__type_19 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_19& operator= (const mu_1__type_19& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_19
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_19
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_19
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_19
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_19
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_19
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_19::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_19::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_19::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_19::~mu_1__type_19()
{
}
/*** end array declaration ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1__type_20/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_20 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_20 (const char *n, int os) { set_self(n, os); };
  mu_1__type_20 ( void ) {};
  virtual ~mu_1__type_20 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_20
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_20
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_20
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_20
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_20
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_20
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_20::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_20::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_20::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_20::~mu_1__type_20()
{
}
/*** end array declaration ***/
mu_1__type_20 mu_1__type_20_undefined_var;

class mu_1__type_21/*:public mu_1__type_super*/
{
 public:
  mu_1__type_20 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_20_mu_1__type_21 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_21 (const char *n, int os) { set_self(n, os); };
  mu_1__type_21 ( void ) {};
  virtual ~mu_1__type_21 ();
  mu_1__type_20& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_21& operator= (const mu_1__type_21& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_21
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_21
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_21
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_21
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_21
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_21
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_21::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_21::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_21::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 30 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_21::~mu_1__type_21()
{
}
/*** end array declaration ***/
mu_1__type_21 mu_1__type_21_undefined_var;

class mu_1__type_22/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_22 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_22 (const char *n, int os) { set_self(n, os); };
  mu_1__type_22 ( void ) {};
  virtual ~mu_1__type_22 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 47 ) && ( index <= 48 ) )
      return array[ index - 47 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 47 ];
#endif
  };
  mu_1__type_22& operator= (const mu_1__type_22& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_22
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_22
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_22
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_22
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_22
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_22
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_22::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_22::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_22::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"longapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"girorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_22::~mu_1__type_22()
{
}
/*** end array declaration ***/
mu_1__type_22 mu_1__type_22_undefined_var;

class mu_1__type_23/*:public mu_1__type_super*/
{
 public:
  mu_1__type_22 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_22_mu_1__type_23 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_23 (const char *n, int os) { set_self(n, os); };
  mu_1__type_23 ( void ) {};
  virtual ~mu_1__type_23 ();
  mu_1__type_22& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_23& operator= (const mu_1__type_23& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_23
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_23
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_23
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_23
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_23
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_23
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_23::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_23::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_23::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_23::~mu_1__type_23()
{
}
/*** end array declaration ***/
mu_1__type_23 mu_1__type_23_undefined_var;

class mu_1__type_24/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_24 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_24 (const char *n, int os) { set_self(n, os); };
  mu_1__type_24 ( void ) {};
  virtual ~mu_1__type_24 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 45 ) && ( index <= 46 ) )
      return array[ index - 45 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 45 ];
#endif
  };
  mu_1__type_24& operator= (const mu_1__type_24& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_24& a, mu_1__type_24& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_24& a, mu_1__type_24& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_24
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_24
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_24
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_24
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_24
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_24
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_24::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_24::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_24::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"clinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"cirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_24::~mu_1__type_24()
{
}
/*** end array declaration ***/
mu_1__type_24 mu_1__type_24_undefined_var;

class mu_1__type_25/*:public mu_1__type_super*/
{
 public:
  mu_1__type_24 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_24_mu_1__type_25 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_25 (const char *n, int os) { set_self(n, os); };
  mu_1__type_25 ( void ) {};
  virtual ~mu_1__type_25 ();
  mu_1__type_24& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_25& operator= (const mu_1__type_25& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_25
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_25
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_25
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_25
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_25
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_25
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_25::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_25::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_25::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_25::~mu_1__type_25()
{
}
/*** end array declaration ***/
mu_1__type_25 mu_1__type_25_undefined_var;

class mu_1__type_26/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_26 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_26 (const char *n, int os) { set_self(n, os); };
  mu_1__type_26 ( void ) {};
  virtual ~mu_1__type_26 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 43 ) && ( index <= 44 ) )
      return array[ index - 43 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 43 ];
#endif
  };
  mu_1__type_26& operator= (const mu_1__type_26& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_26
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_26
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_26
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_26
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_26
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_26
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_26::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_26::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_26::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"eletivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"agudo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_26::~mu_1__type_26()
{
}
/*** end array declaration ***/
mu_1__type_26 mu_1__type_26_undefined_var;

class mu_1__type_27/*:public mu_1__type_super*/
{
 public:
  mu_1__type_26 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_26_mu_1__type_27 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_27 (const char *n, int os) { set_self(n, os); };
  mu_1__type_27 ( void ) {};
  virtual ~mu_1__type_27 ();
  mu_1__type_26& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_27& operator= (const mu_1__type_27& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_27
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_27
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_27
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_27
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_27
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_27
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_27::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_27::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_27::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_27::~mu_1__type_27()
{
}
/*** end array declaration ***/
mu_1__type_27 mu_1__type_27_undefined_var;

class mu_1__type_28/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_28 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_28 (const char *n, int os) { set_self(n, os); };
  mu_1__type_28 ( void ) {};
  virtual ~mu_1__type_28 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 41 ) && ( index <= 42 ) )
      return array[ index - 41 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 41 ];
#endif
  };
  mu_1__type_28& operator= (const mu_1__type_28& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_28
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_28
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_28
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_28
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_28
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_28
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_28::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_28::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_28::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"masculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"feminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_28::~mu_1__type_28()
{
}
/*** end array declaration ***/
mu_1__type_28 mu_1__type_28_undefined_var;

class mu_1__type_29/*:public mu_1__type_super*/
{
 public:
  mu_1__type_28 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_28_mu_1__type_29 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_29 (const char *n, int os) { set_self(n, os); };
  mu_1__type_29 ( void ) {};
  virtual ~mu_1__type_29 ();
  mu_1__type_28& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_29& operator= (const mu_1__type_29& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_29
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_29
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_29
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_29
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_29
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_29
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_29::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_29::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_29::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_29::~mu_1__type_29()
{
}
/*** end array declaration ***/
mu_1__type_29 mu_1__type_29_undefined_var;

class mu_1__type_30/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_30 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_30 (const char *n, int os) { set_self(n, os); };
  mu_1__type_30 ( void ) {};
  virtual ~mu_1__type_30 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 38 ) && ( index <= 40 ) )
      return array[ index - 38 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 38 ];
#endif
  };
  mu_1__type_30& operator= (const mu_1__type_30& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_30
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_30
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_30
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_30
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_30
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_30
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_30::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_30::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_30::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"crianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adolescente", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_30::~mu_1__type_30()
{
}
/*** end array declaration ***/
mu_1__type_30 mu_1__type_30_undefined_var;

class mu_1__type_31/*:public mu_1__type_super*/
{
 public:
  mu_1__type_30 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_30_mu_1__type_31 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_31 (const char *n, int os) { set_self(n, os); };
  mu_1__type_31 ( void ) {};
  virtual ~mu_1__type_31 ();
  mu_1__type_30& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_31& operator= (const mu_1__type_31& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_31
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_31
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_31
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_31
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_31
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_31
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_31::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_31::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_31::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_31::~mu_1__type_31()
{
}
/*** end array declaration ***/
mu_1__type_31 mu_1__type_31_undefined_var;

class mu_1__type_32/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_32 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_32 (const char *n, int os) { set_self(n, os); };
  mu_1__type_32 ( void ) {};
  virtual ~mu_1__type_32 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 36 ) && ( index <= 37 ) )
      return array[ index - 36 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 36 ];
#endif
  };
  mu_1__type_32& operator= (const mu_1__type_32& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_32
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_32
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_32
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_32
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_32
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_32
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_32::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_32::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_32::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"aborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_32::~mu_1__type_32()
{
}
/*** end array declaration ***/
mu_1__type_32 mu_1__type_32_undefined_var;

class mu_1__type_33/*:public mu_1__type_super*/
{
 public:
  mu_1__type_32 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_32_mu_1__type_33 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_33 (const char *n, int os) { set_self(n, os); };
  mu_1__type_33 ( void ) {};
  virtual ~mu_1__type_33 ();
  mu_1__type_32& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_33& operator= (const mu_1__type_33& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_33
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_33
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_33
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_33
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_33
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_33
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_33::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_33::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_33::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_33::~mu_1__type_33()
{
}
/*** end array declaration ***/
mu_1__type_33 mu_1__type_33_undefined_var;

class mu_1__type_34/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_34 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_34 (const char *n, int os) { set_self(n, os); };
  mu_1__type_34 ( void ) {};
  virtual ~mu_1__type_34 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 32 ) && ( index <= 34 ) )
      return array[ index - 32 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 32 ];
#endif
  };
  mu_1__type_34& operator= (const mu_1__type_34& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_34
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_34
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_34
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_34
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_34
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_34
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_34::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_34::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_34::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"minimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"intensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"semiintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_34::~mu_1__type_34()
{
}
/*** end array declaration ***/
mu_1__type_34 mu_1__type_34_undefined_var;

class mu_1__type_35/*:public mu_1__type_super*/
{
 public:
  mu_1__type_34 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_34_mu_1__type_35 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_35 (const char *n, int os) { set_self(n, os); };
  mu_1__type_35 ( void ) {};
  virtual ~mu_1__type_35 ();
  mu_1__type_34& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_35& operator= (const mu_1__type_35& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_35
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_35
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_35
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_35
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_35
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_35
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_35::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_35::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_35::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_35::~mu_1__type_35()
{
}
/*** end array declaration ***/
mu_1__type_35 mu_1__type_35_undefined_var;

class mu_1__type_36/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_36 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_36 (const char *n, int os) { set_self(n, os); };
  mu_1__type_36 ( void ) {};
  virtual ~mu_1__type_36 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 35 ) && ( index <= 35 ) )
      return array[ index - 35 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 35 ];
#endif
  };
  mu_1__type_36& operator= (const mu_1__type_36& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_36
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_36
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_36
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_36
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_36
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_36
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_36::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_36::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_36::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"geral", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_36::~mu_1__type_36()
{
}
/*** end array declaration ***/
mu_1__type_36 mu_1__type_36_undefined_var;

class mu_1__type_37/*:public mu_1__type_super*/
{
 public:
  mu_1__type_36 array[ 16 ]; 
#define awesome_mu_00_mu_1__type_36_mu_1__type_37 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_37 (const char *n, int os) { set_self(n, os); };
  mu_1__type_37 ( void ) {};
  virtual ~mu_1__type_37 ();
  mu_1__type_36& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_37& operator= (const mu_1__type_37& from)
  {
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_37
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_37
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_37
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_37
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_37
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_37
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_37::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_37::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_37::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_37::~mu_1__type_37()
{
}
/*** end array declaration ***/
mu_1__type_37 mu_1__type_37_undefined_var;

class mu_1__type_38/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_38 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_38 (const char *n, int os) { set_self(n, os); };
  mu_1__type_38 ( void ) {};
  virtual ~mu_1__type_38 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_38& operator= (const mu_1__type_38& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_38& a, mu_1__type_38& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_38& a, mu_1__type_38& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_38
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_38
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_38
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_38
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_38
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_38
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_38::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_38::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_38::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_38::~mu_1__type_38()
{
}
/*** end array declaration ***/
mu_1__type_38 mu_1__type_38_undefined_var;

class mu_1__type_39/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_39 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_39 (const char *n, int os) { set_self(n, os); };
  mu_1__type_39 ( void ) {};
  virtual ~mu_1__type_39 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_39& operator= (const mu_1__type_39& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_39& a, mu_1__type_39& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_39& a, mu_1__type_39& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_39
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_39
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_39
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_39
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_39
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_39
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_39::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_39::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_39::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_39::~mu_1__type_39()
{
}
/*** end array declaration ***/
mu_1__type_39 mu_1__type_39_undefined_var;

class mu_1__type_40/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_40 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_40 (const char *n, int os) { set_self(n, os); };
  mu_1__type_40 ( void ) {};
  virtual ~mu_1__type_40 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_40& operator= (const mu_1__type_40& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_40& a, mu_1__type_40& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_40& a, mu_1__type_40& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_40
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_40
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_40
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_40
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_40
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_40
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_40::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_40::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_40::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_40::~mu_1__type_40()
{
}
/*** end array declaration ***/
mu_1__type_40 mu_1__type_40_undefined_var;

class mu_1__type_41/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_41 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_41 (const char *n, int os) { set_self(n, os); };
  mu_1__type_41 ( void ) {};
  virtual ~mu_1__type_41 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_41& operator= (const mu_1__type_41& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_41& a, mu_1__type_41& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_41& a, mu_1__type_41& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_41
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_41
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_41
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_41
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_41
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_41
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_41::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_41::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_41::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_41::~mu_1__type_41()
{
}
/*** end array declaration ***/
mu_1__type_41 mu_1__type_41_undefined_var;

class mu_1__type_42/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_42 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_42 (const char *n, int os) { set_self(n, os); };
  mu_1__type_42 ( void ) {};
  virtual ~mu_1__type_42 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_42& operator= (const mu_1__type_42& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_42& a, mu_1__type_42& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_42& a, mu_1__type_42& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_42
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_42
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_42
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_42
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_42
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_42
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_42::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_42::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_42::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_42::~mu_1__type_42()
{
}
/*** end array declaration ***/
mu_1__type_42 mu_1__type_42_undefined_var;

class mu_1__type_43/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_43 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_43 (const char *n, int os) { set_self(n, os); };
  mu_1__type_43 ( void ) {};
  virtual ~mu_1__type_43 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_43& operator= (const mu_1__type_43& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_43& a, mu_1__type_43& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_43& a, mu_1__type_43& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_43
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_43
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_43
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_43
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_43
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_43
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_43::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_43::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_43::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_43::~mu_1__type_43()
{
}
/*** end array declaration ***/
mu_1__type_43 mu_1__type_43_undefined_var;

class mu_1__type_44/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_44 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_44 (const char *n, int os) { set_self(n, os); };
  mu_1__type_44 ( void ) {};
  virtual ~mu_1__type_44 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_44& operator= (const mu_1__type_44& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_44& a, mu_1__type_44& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_44& a, mu_1__type_44& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_44
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_44
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_44
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_44
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_44
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_44
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_44::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_44::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_44::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_44::~mu_1__type_44()
{
}
/*** end array declaration ***/
mu_1__type_44 mu_1__type_44_undefined_var;

class mu_1__type_45/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_45 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_45 (const char *n, int os) { set_self(n, os); };
  mu_1__type_45 ( void ) {};
  virtual ~mu_1__type_45 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_45& operator= (const mu_1__type_45& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_45& a, mu_1__type_45& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_45& a, mu_1__type_45& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_45
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_45
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_45
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_45
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_45
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_45
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_45::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_45::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_45::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_45::~mu_1__type_45()
{
}
/*** end array declaration ***/
mu_1__type_45 mu_1__type_45_undefined_var;

class mu_1__type_46/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_46 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_46 (const char *n, int os) { set_self(n, os); };
  mu_1__type_46 ( void ) {};
  virtual ~mu_1__type_46 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_46& operator= (const mu_1__type_46& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_46& a, mu_1__type_46& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_46& a, mu_1__type_46& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_46
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_46
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_46
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_46
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_46
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_46
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_46::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_46::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_46::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_46::~mu_1__type_46()
{
}
/*** end array declaration ***/
mu_1__type_46 mu_1__type_46_undefined_var;

class mu_1__type_47/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_47 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_47 (const char *n, int os) { set_self(n, os); };
  mu_1__type_47 ( void ) {};
  virtual ~mu_1__type_47 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_47& operator= (const mu_1__type_47& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_47& a, mu_1__type_47& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_47& a, mu_1__type_47& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_47
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_47
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_47
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_47
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_47
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_47
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_47::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_47::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_47::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_47::~mu_1__type_47()
{
}
/*** end array declaration ***/
mu_1__type_47 mu_1__type_47_undefined_var;

class mu_1__type_48/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_48 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_48 (const char *n, int os) { set_self(n, os); };
  mu_1__type_48 ( void ) {};
  virtual ~mu_1__type_48 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_48& operator= (const mu_1__type_48& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_48& a, mu_1__type_48& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_48& a, mu_1__type_48& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_48
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_48
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_48
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_48
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_48
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_48
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_48::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_48::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_48::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_48::~mu_1__type_48()
{
}
/*** end array declaration ***/
mu_1__type_48 mu_1__type_48_undefined_var;

class mu_1__type_49/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_49 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_49 (const char *n, int os) { set_self(n, os); };
  mu_1__type_49 ( void ) {};
  virtual ~mu_1__type_49 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_49& operator= (const mu_1__type_49& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_49& a, mu_1__type_49& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_49& a, mu_1__type_49& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_49
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_49
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_49
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_49
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_49
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_49
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_49::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_49::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_49::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_49::~mu_1__type_49()
{
}
/*** end array declaration ***/
mu_1__type_49 mu_1__type_49_undefined_var;

class mu_1__type_50/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_50 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_50 (const char *n, int os) { set_self(n, os); };
  mu_1__type_50 ( void ) {};
  virtual ~mu_1__type_50 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_50& operator= (const mu_1__type_50& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_50& a, mu_1__type_50& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_50& a, mu_1__type_50& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_50
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_50
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_50
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_50
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_50
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_50
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_50::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_50::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_50::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_50::~mu_1__type_50()
{
}
/*** end array declaration ***/
mu_1__type_50 mu_1__type_50_undefined_var;

class mu_1__type_51/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_51 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_51 (const char *n, int os) { set_self(n, os); };
  mu_1__type_51 ( void ) {};
  virtual ~mu_1__type_51 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_51& operator= (const mu_1__type_51& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_51& a, mu_1__type_51& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_51& a, mu_1__type_51& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_51
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_51
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_51
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_51
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_51
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_51
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_51::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_51::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_51::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_51::~mu_1__type_51()
{
}
/*** end array declaration ***/
mu_1__type_51 mu_1__type_51_undefined_var;

class mu_1__type_52/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 15 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_52 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_52 (const char *n, int os) { set_self(n, os); };
  mu_1__type_52 ( void ) {};
  virtual ~mu_1__type_52 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 17 ) && ( index <= 31 ) )
      return array[ index - 17 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 17 ];
#endif
  };
  mu_1__type_52& operator= (const mu_1__type_52& from)
  {
    for (int i = 0; i < 15; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_52& a, mu_1__type_52& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_52& a, mu_1__type_52& b)
  {
    int w;
    for (int i=0; i<15; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<15; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<15; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 15; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 15; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 15; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 15; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_52
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_52
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_52
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_52
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_52
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_52
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 15; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_52::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_52::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_52::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camacirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camageralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_52::~mu_1__type_52()
{
}
/*** end array declaration ***/
mu_1__type_52 mu_1__type_52_undefined_var;

class mu_1__type_53/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 16 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_53 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_53 (const char *n, int os) { set_self(n, os); };
  mu_1__type_53 ( void ) {};
  virtual ~mu_1__type_53 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_53& operator= (const mu_1__type_53& from)
  {
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_53& a, mu_1__type_53& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_53& a, mu_1__type_53& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  std::vector<mu_0_boolean*> bool_array() {

	std::vector<mu_0_boolean*> barr;
	#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_53
		for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
			std::string stype = typeid(array[ix]).name();
			if (stype.compare("12mu_0_boolean") == 0)
				barr.push_back(&(array[ix]));
 		}
		return barr;

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_53
		return barr; 

	#else 
		#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_53
			return barr;
	   		

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu_0_boolean*> temp_b = array[ix].bool_array();
				 barr.insert(barr.end(), temp_b.begin(), temp_b.end());
 			}
			return barr;
	   		
		#endif 
	#endif 
}
  std::vector<mu__real*> num_array() {

	std::vector<mu__real*> narr;
	#ifdef awesome_mu_00_mu_1_real_type_mu_1__type_53
	for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
		std::string stype = typeid(array[ix]).name();
		if (stype.compare("14mu_1_real_type") == 0)
			narr.push_back(&(array[ix]));
 	}
		return narr;
	

	#elif awesome_mu_00_mu_1_TIME_type_mu_1__type_53
		return narr; 

	#else 
		#ifdef awesome_mu_00_mu_0_boolean_mu_1__type_53
			return narr;

		#else 
			for (int ix = 0; ix < (sizeof((array))/sizeof(*(array))); ix++){
				 std::vector<mu__real*> temp_n = array[ix].num_array();
				 narr.insert(narr.end(), temp_n.begin(), temp_n.end());
 			}
			return narr;
	   		

		#endif 
	#endif 
}
  void print(FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 16; i++)
      array[i].print_diff(prevstate,target,separator);
  };
};

  void mu_1__type_53::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_53::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
  void mu_1__type_53::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientecirurgiabariatricamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiaclinico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteginecologiacirurgico", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralminimolongapermanencia", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientegeralintensivogirorapido", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_53::~mu_1__type_53()
{
}
/*** end array declaration ***/
mu_1__type_53 mu_1__type_53_undefined_var;

const int mu_pacienteuti = 1;
const int mu_pacienteisolamento = 2;
const int mu_pacienteobstetriciaaborto = 3;
const int mu_pacienteobstetricianascimento = 4;
const int mu_pacienteucladulto = 5;
const int mu_pacienteuclcrianca = 6;
const int mu_pacienteavcfeminino = 7;
const int mu_pacienteavcmasculino = 8;
const int mu_pacientepsiquiatriafeminino = 9;
const int mu_pacientepsiquiatriamasculino = 10;
const int mu_pacientecirurgiabariatricafeminino = 11;
const int mu_pacientecirurgiabariatricamasculino = 12;
const int mu_pacienteginecologiaclinico = 13;
const int mu_pacienteginecologiacirurgico = 14;
const int mu_pacientegeralminimolongapermanencia = 15;
const int mu_pacientegeralintensivogirorapido = 16;
const int mu_camaisolamento = 17;
const int mu_camaobstetriciaaborto = 18;
const int mu_camaobstetricianascimento = 19;
const int mu_camaucladulto = 20;
const int mu_camauclcrianca = 21;
const int mu_camaavcfeminino = 22;
const int mu_camaavcmasculino = 23;
const int mu_camapsiquiatriafeminino = 24;
const int mu_camapsiquiatriamasculino = 25;
const int mu_camacirurgiabariatricafeminino = 26;
const int mu_camacirurgiabariatricamasculino = 27;
const int mu_camaginecologiaclinico = 28;
const int mu_camaginecologiacirurgico = 29;
const int mu_camageralminimolongapermanencia = 30;
const int mu_camageralintensivogirorapido = 31;
const int mu_minimo = 32;
const int mu_intensivo = 33;
const int mu_semiintensivo = 34;
const int mu_geral = 35;
const int mu_aborto = 36;
const int mu_nascimento = 37;
const int mu_crianca = 38;
const int mu_adulto = 39;
const int mu_adolescente = 40;
const int mu_masculino = 41;
const int mu_feminino = 42;
const int mu_eletivo = 43;
const int mu_agudo = 44;
const int mu_clinico = 45;
const int mu_cirurgico = 46;
const int mu_longapermanencia = 47;
const int mu_girorapido = 48;
const double mu_T = +1.000000e-01;
/*** Variable declaration ***/
mu_0_boolean mu_all_event_true("all_event_true",0);

/*** Variable declaration ***/
mu_1_integer mu_h_n("h_n",2);

/*** Variable declaration ***/
mu_1_integer mu_g_n("g_n",13);

/*** Variable declaration ***/
mu_1_integer mu_f_n("f_n",24);

/*** Variable declaration ***/
mu_1_TIME_type mu_TIME("TIME",35);

/*** Variable declaration ***/
mu_1__type_0 mu_agefunc("agefunc",75);

/*** Variable declaration ***/
mu_1__type_2 mu_bedstay("bedstay",715);

/*** Variable declaration ***/
mu_1__type_4 mu_bedroomtype("bedroomtype",775);

/*** Variable declaration ***/
mu_1__type_6 mu_bedorigin("bedorigin",835);

/*** Variable declaration ***/
mu_1__type_8 mu_bedgender("bedgender",895);

/*** Variable declaration ***/
mu_1__type_10 mu_bedage("bedage",955);

/*** Variable declaration ***/
mu_1__type_12 mu_bedbirthtype("bedbirthtype",1045);

/*** Variable declaration ***/
mu_1__type_14 mu_bedcare("bedcare",1105);

/*** Variable declaration ***/
mu_1__type_16 mu_bedspecialty("bedspecialty",1195);

/*** Variable declaration ***/
mu_1__type_17 mu_bedisolation("bedisolation",1225);

/*** Variable declaration ***/
mu_1__type_18 mu_bedfree("bedfree",1255);

/*** Variable declaration ***/
mu_1__type_19 mu_busybed("busybed",1285);

/*** Variable declaration ***/
mu_1__type_21 mu_in_("in_",1315);

/*** Variable declaration ***/
mu_1__type_23 mu_patientstay("patientstay",1795);

/*** Variable declaration ***/
mu_1__type_25 mu_patientroomtype("patientroomtype",1859);

/*** Variable declaration ***/
mu_1__type_27 mu_patientorigin("patientorigin",1923);

/*** Variable declaration ***/
mu_1__type_29 mu_patientgender("patientgender",1987);

/*** Variable declaration ***/
mu_1__type_31 mu_patientage("patientage",2051);

/*** Variable declaration ***/
mu_1__type_33 mu_patientbirthtype("patientbirthtype",2147);

/*** Variable declaration ***/
mu_1__type_35 mu_patientcare("patientcare",2211);

/*** Variable declaration ***/
mu_1__type_37 mu_patientspecialty("patientspecialty",2307);

/*** Variable declaration ***/
mu_1__type_38 mu_patientisolation("patientisolation",2339);

/*** Variable declaration ***/
mu_1__type_39 mu_allocated("allocated",2371);

/*** Variable declaration ***/
mu_1__type_40 mu_donotallocate("donotallocate",2403);

/*** Variable declaration ***/
mu_1__type_41 mu_patientuti("patientuti",2435);

/*** Variable declaration ***/
mu_1__type_42 mu_bedobstetricia("bedobstetricia",2467);

/*** Variable declaration ***/
mu_1__type_43 mu_patientobstetricia("patientobstetricia",2497);

/*** Variable declaration ***/
mu_1__type_44 mu_beducl("beducl",2529);

/*** Variable declaration ***/
mu_1__type_45 mu_patientucl("patientucl",2559);

/*** Variable declaration ***/
mu_1__type_46 mu_bedavc("bedavc",2591);

/*** Variable declaration ***/
mu_1__type_47 mu_patientavc("patientavc",2621);

/*** Variable declaration ***/
mu_1__type_48 mu_bedpsiquiatria("bedpsiquiatria",2653);

/*** Variable declaration ***/
mu_1__type_49 mu_patientpsiquiatria("patientpsiquiatria",2683);

/*** Variable declaration ***/
mu_1__type_50 mu_bedcirurgiabariatrica("bedcirurgiabariatrica",2715);

/*** Variable declaration ***/
mu_1__type_51 mu_patientcirurgiabariatrica("patientcirurgiabariatrica",2745);

/*** Variable declaration ***/
mu_1__type_52 mu_bedginecologia("bedginecologia",2777);

/*** Variable declaration ***/
mu_1__type_53 mu_patientginecologia("patientginecologia",2807);

void mu_set_bedstay(const mu_1_bed& mu_varbed, const mu_1_stay& mu_varstay, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedstay[mu_varbed][mu_varstay].undefine();
else
  mu_bedstay[mu_varbed][mu_varstay] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedstay(const mu_1_bed& mu_varbed,const mu_1_stay& mu_varstay)
{
return mu_bedstay[mu_varbed][mu_varstay];
	Error.Error("The end of function get_bedstay reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedroomtype(const mu_1_bed& mu_varbed, const mu_1_roomtype& mu_varroomtype, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedroomtype[mu_varbed][mu_varroomtype].undefine();
else
  mu_bedroomtype[mu_varbed][mu_varroomtype] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedroomtype(const mu_1_bed& mu_varbed,const mu_1_roomtype& mu_varroomtype)
{
return mu_bedroomtype[mu_varbed][mu_varroomtype];
	Error.Error("The end of function get_bedroomtype reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedorigin(const mu_1_bed& mu_varbed, const mu_1_origin& mu_varorigin, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedorigin[mu_varbed][mu_varorigin].undefine();
else
  mu_bedorigin[mu_varbed][mu_varorigin] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedorigin(const mu_1_bed& mu_varbed,const mu_1_origin& mu_varorigin)
{
return mu_bedorigin[mu_varbed][mu_varorigin];
	Error.Error("The end of function get_bedorigin reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedgender(const mu_1_bed& mu_varbed, const mu_1_gender& mu_vargender, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedgender[mu_varbed][mu_vargender].undefine();
else
  mu_bedgender[mu_varbed][mu_vargender] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedgender(const mu_1_bed& mu_varbed,const mu_1_gender& mu_vargender)
{
return mu_bedgender[mu_varbed][mu_vargender];
	Error.Error("The end of function get_bedgender reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedage(const mu_1_bed& mu_varbed, const mu_1_age& mu_varage, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedage[mu_varbed][mu_varage].undefine();
else
  mu_bedage[mu_varbed][mu_varage] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedage(const mu_1_bed& mu_varbed,const mu_1_age& mu_varage)
{
return mu_bedage[mu_varbed][mu_varage];
	Error.Error("The end of function get_bedage reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedbirthtype(const mu_1_bed& mu_varbed, const mu_1_birthtype& mu_varbirthtype, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedbirthtype[mu_varbed][mu_varbirthtype].undefine();
else
  mu_bedbirthtype[mu_varbed][mu_varbirthtype] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedbirthtype(const mu_1_bed& mu_varbed,const mu_1_birthtype& mu_varbirthtype)
{
return mu_bedbirthtype[mu_varbed][mu_varbirthtype];
	Error.Error("The end of function get_bedbirthtype reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedcare(const mu_1_bed& mu_varbed, const mu_1_care& mu_varcare, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedcare[mu_varbed][mu_varcare].undefine();
else
  mu_bedcare[mu_varbed][mu_varcare] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedcare(const mu_1_bed& mu_varbed,const mu_1_care& mu_varcare)
{
return mu_bedcare[mu_varbed][mu_varcare];
	Error.Error("The end of function get_bedcare reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedspecialty(const mu_1_bed& mu_varbed, const mu_1_specialty& mu_varspecialty, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedspecialty[mu_varbed][mu_varspecialty].undefine();
else
  mu_bedspecialty[mu_varbed][mu_varspecialty] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedspecialty(const mu_1_bed& mu_varbed,const mu_1_specialty& mu_varspecialty)
{
return mu_bedspecialty[mu_varbed][mu_varspecialty];
	Error.Error("The end of function get_bedspecialty reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedisolation(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedisolation[mu_varbed].undefine();
else
  mu_bedisolation[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedisolation(const mu_1_bed& mu_varbed)
{
return mu_bedisolation[mu_varbed];
	Error.Error("The end of function get_bedisolation reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedfree(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedfree[mu_varbed].undefine();
else
  mu_bedfree[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedfree(const mu_1_bed& mu_varbed)
{
return mu_bedfree[mu_varbed];
	Error.Error("The end of function get_bedfree reached without returning values.");
};
/*** end function declaration ***/

void mu_set_busybed(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_busybed[mu_varbed].undefine();
else
  mu_busybed[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_busybed(const mu_1_bed& mu_varbed)
{
return mu_busybed[mu_varbed];
	Error.Error("The end of function get_busybed reached without returning values.");
};
/*** end function declaration ***/

void mu_set_in_(const mu_1_patient& mu_p, const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_in_[mu_p][mu_varbed].undefine();
else
  mu_in_[mu_p][mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_in_(const mu_1_patient& mu_p,const mu_1_bed& mu_varbed)
{
return mu_in_[mu_p][mu_varbed];
	Error.Error("The end of function get_in_ reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientstay(const mu_1_patient& mu_p, const mu_1_stay& mu_varstay, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientstay[mu_p][mu_varstay].undefine();
else
  mu_patientstay[mu_p][mu_varstay] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientstay(const mu_1_patient& mu_p,const mu_1_stay& mu_varstay)
{
return mu_patientstay[mu_p][mu_varstay];
	Error.Error("The end of function get_patientstay reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientroomtype(const mu_1_patient& mu_p, const mu_1_roomtype& mu_varroomtype, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientroomtype[mu_p][mu_varroomtype].undefine();
else
  mu_patientroomtype[mu_p][mu_varroomtype] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientroomtype(const mu_1_patient& mu_p,const mu_1_roomtype& mu_varroomtype)
{
return mu_patientroomtype[mu_p][mu_varroomtype];
	Error.Error("The end of function get_patientroomtype reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientorigin(const mu_1_patient& mu_p, const mu_1_origin& mu_varorigin, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientorigin[mu_p][mu_varorigin].undefine();
else
  mu_patientorigin[mu_p][mu_varorigin] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientorigin(const mu_1_patient& mu_p,const mu_1_origin& mu_varorigin)
{
return mu_patientorigin[mu_p][mu_varorigin];
	Error.Error("The end of function get_patientorigin reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientgender(const mu_1_patient& mu_p, const mu_1_gender& mu_vargender, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientgender[mu_p][mu_vargender].undefine();
else
  mu_patientgender[mu_p][mu_vargender] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientgender(const mu_1_patient& mu_p,const mu_1_gender& mu_vargender)
{
return mu_patientgender[mu_p][mu_vargender];
	Error.Error("The end of function get_patientgender reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientage(const mu_1_patient& mu_p, const mu_1_age& mu_varage, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientage[mu_p][mu_varage].undefine();
else
  mu_patientage[mu_p][mu_varage] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientage(const mu_1_patient& mu_p,const mu_1_age& mu_varage)
{
return mu_patientage[mu_p][mu_varage];
	Error.Error("The end of function get_patientage reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientbirthtype(const mu_1_patient& mu_p, const mu_1_birthtype& mu_varbirthtype, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientbirthtype[mu_p][mu_varbirthtype].undefine();
else
  mu_patientbirthtype[mu_p][mu_varbirthtype] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientbirthtype(const mu_1_patient& mu_p,const mu_1_birthtype& mu_varbirthtype)
{
return mu_patientbirthtype[mu_p][mu_varbirthtype];
	Error.Error("The end of function get_patientbirthtype reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientcare(const mu_1_patient& mu_p, const mu_1_care& mu_varcare, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientcare[mu_p][mu_varcare].undefine();
else
  mu_patientcare[mu_p][mu_varcare] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientcare(const mu_1_patient& mu_p,const mu_1_care& mu_varcare)
{
return mu_patientcare[mu_p][mu_varcare];
	Error.Error("The end of function get_patientcare reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientspecialty(const mu_1_patient& mu_p, const mu_1_specialty& mu_varspecialty, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientspecialty[mu_p][mu_varspecialty].undefine();
else
  mu_patientspecialty[mu_p][mu_varspecialty] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientspecialty(const mu_1_patient& mu_p,const mu_1_specialty& mu_varspecialty)
{
return mu_patientspecialty[mu_p][mu_varspecialty];
	Error.Error("The end of function get_patientspecialty reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientisolation(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientisolation[mu_p].undefine();
else
  mu_patientisolation[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientisolation(const mu_1_patient& mu_p)
{
return mu_patientisolation[mu_p];
	Error.Error("The end of function get_patientisolation reached without returning values.");
};
/*** end function declaration ***/

void mu_set_allocated(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_allocated[mu_p].undefine();
else
  mu_allocated[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_allocated(const mu_1_patient& mu_p)
{
return mu_allocated[mu_p];
	Error.Error("The end of function get_allocated reached without returning values.");
};
/*** end function declaration ***/

void mu_set_donotallocate(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_donotallocate[mu_p].undefine();
else
  mu_donotallocate[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_donotallocate(const mu_1_patient& mu_p)
{
return mu_donotallocate[mu_p];
	Error.Error("The end of function get_donotallocate reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientuti(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientuti[mu_p].undefine();
else
  mu_patientuti[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientuti(const mu_1_patient& mu_p)
{
return mu_patientuti[mu_p];
	Error.Error("The end of function get_patientuti reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedobstetricia(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedobstetricia[mu_varbed].undefine();
else
  mu_bedobstetricia[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedobstetricia(const mu_1_bed& mu_varbed)
{
return mu_bedobstetricia[mu_varbed];
	Error.Error("The end of function get_bedobstetricia reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientobstetricia(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientobstetricia[mu_p].undefine();
else
  mu_patientobstetricia[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientobstetricia(const mu_1_patient& mu_p)
{
return mu_patientobstetricia[mu_p];
	Error.Error("The end of function get_patientobstetricia reached without returning values.");
};
/*** end function declaration ***/

void mu_set_beducl(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_beducl[mu_varbed].undefine();
else
  mu_beducl[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_beducl(const mu_1_bed& mu_varbed)
{
return mu_beducl[mu_varbed];
	Error.Error("The end of function get_beducl reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientucl(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientucl[mu_p].undefine();
else
  mu_patientucl[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientucl(const mu_1_patient& mu_p)
{
return mu_patientucl[mu_p];
	Error.Error("The end of function get_patientucl reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedavc(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedavc[mu_varbed].undefine();
else
  mu_bedavc[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedavc(const mu_1_bed& mu_varbed)
{
return mu_bedavc[mu_varbed];
	Error.Error("The end of function get_bedavc reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientavc(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientavc[mu_p].undefine();
else
  mu_patientavc[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientavc(const mu_1_patient& mu_p)
{
return mu_patientavc[mu_p];
	Error.Error("The end of function get_patientavc reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedpsiquiatria(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedpsiquiatria[mu_varbed].undefine();
else
  mu_bedpsiquiatria[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedpsiquiatria(const mu_1_bed& mu_varbed)
{
return mu_bedpsiquiatria[mu_varbed];
	Error.Error("The end of function get_bedpsiquiatria reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientpsiquiatria(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientpsiquiatria[mu_p].undefine();
else
  mu_patientpsiquiatria[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientpsiquiatria(const mu_1_patient& mu_p)
{
return mu_patientpsiquiatria[mu_p];
	Error.Error("The end of function get_patientpsiquiatria reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedcirurgiabariatrica(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedcirurgiabariatrica[mu_varbed].undefine();
else
  mu_bedcirurgiabariatrica[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedcirurgiabariatrica(const mu_1_bed& mu_varbed)
{
return mu_bedcirurgiabariatrica[mu_varbed];
	Error.Error("The end of function get_bedcirurgiabariatrica reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientcirurgiabariatrica(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientcirurgiabariatrica[mu_p].undefine();
else
  mu_patientcirurgiabariatrica[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientcirurgiabariatrica(const mu_1_patient& mu_p)
{
return mu_patientcirurgiabariatrica[mu_p];
	Error.Error("The end of function get_patientcirurgiabariatrica reached without returning values.");
};
/*** end function declaration ***/

void mu_set_bedginecologia(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedginecologia[mu_varbed].undefine();
else
  mu_bedginecologia[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedginecologia(const mu_1_bed& mu_varbed)
{
return mu_bedginecologia[mu_varbed];
	Error.Error("The end of function get_bedginecologia reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientginecologia(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientginecologia[mu_p].undefine();
else
  mu_patientginecologia[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientginecologia(const mu_1_patient& mu_p)
{
return mu_patientginecologia[mu_p];
	Error.Error("The end of function get_patientginecologia reached without returning values.");
};
/*** end function declaration ***/

void mu_event_check()
{
/*** Variable declaration ***/
mu_0_boolean mu_event_triggered("event_triggered",0);

mu_event_triggered = mu_true;
{
  bool mu__while_expr_55;  mu__while_expr_55 = mu_event_triggered;
int mu__counter_54 = 0;
while (mu__while_expr_55) {
if ( ++mu__counter_54 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_event_triggered = mu_false;
};
mu__while_expr_55 = mu_event_triggered;
}
};
};
/*** end procedure declaration ***/

mu_0_boolean mu_DAs_violate_duration()
{
/*** Variable declaration ***/
mu_0_boolean mu_DA_duration_violated("DA_duration_violated",0);

mu_DA_duration_violated = mu_false;
return mu_DA_duration_violated;
	Error.Error("The end of function DAs_violate_duration reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_DAs_ongoing_in_goal_state()
{
/*** Variable declaration ***/
mu_0_boolean mu_DA_still_ongoing("DA_still_ongoing",0);

mu_DA_still_ongoing = mu_false;
return mu_DA_still_ongoing;
	Error.Error("The end of function DAs_ongoing_in_goal_state reached without returning values.");
};
/*** end function declaration ***/

void mu_apply_continuous_change()
{
/*** Variable declaration ***/
mu_0_boolean mu_process_updated("process_updated",0);

/*** Variable declaration ***/
mu_0_boolean mu_end_while("end_while",2);

mu_process_updated = mu_false;
mu_end_while = mu_false;
{
  bool mu__while_expr_57;  mu__while_expr_57 = !(mu_end_while);
int mu__counter_56 = 0;
while (mu__while_expr_57) {
if ( ++mu__counter_56 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( !(mu_process_updated) )
{
mu_end_while = mu_true;
}
else
{
mu_process_updated = mu_false;
}
};
mu__while_expr_57 = !(mu_end_while);
}
};
};
/*** end procedure declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_all_event_true.clear();
  mu_h_n.clear();
  mu_g_n.clear();
  mu_f_n.clear();
  mu_TIME.clear();
  mu_agefunc.clear();
  mu_bedstay.clear();
  mu_bedroomtype.clear();
  mu_bedorigin.clear();
  mu_bedgender.clear();
  mu_bedage.clear();
  mu_bedbirthtype.clear();
  mu_bedcare.clear();
  mu_bedspecialty.clear();
  mu_bedisolation.clear();
  mu_bedfree.clear();
  mu_busybed.clear();
  mu_in_.clear();
  mu_patientstay.clear();
  mu_patientroomtype.clear();
  mu_patientorigin.clear();
  mu_patientgender.clear();
  mu_patientage.clear();
  mu_patientbirthtype.clear();
  mu_patientcare.clear();
  mu_patientspecialty.clear();
  mu_patientisolation.clear();
  mu_allocated.clear();
  mu_donotallocate.clear();
  mu_patientuti.clear();
  mu_bedobstetricia.clear();
  mu_patientobstetricia.clear();
  mu_beducl.clear();
  mu_patientucl.clear();
  mu_bedavc.clear();
  mu_patientavc.clear();
  mu_bedpsiquiatria.clear();
  mu_patientpsiquiatria.clear();
  mu_bedcirurgiabariatrica.clear();
  mu_patientcirurgiabariatrica.clear();
  mu_bedginecologia.clear();
  mu_patientginecologia.clear();
}
void world_class::undefine()
{
  mu_all_event_true.undefine();
  mu_h_n.undefine();
  mu_g_n.undefine();
  mu_f_n.undefine();
  mu_TIME.undefine();
  mu_agefunc.undefine();
  mu_bedstay.undefine();
  mu_bedroomtype.undefine();
  mu_bedorigin.undefine();
  mu_bedgender.undefine();
  mu_bedage.undefine();
  mu_bedbirthtype.undefine();
  mu_bedcare.undefine();
  mu_bedspecialty.undefine();
  mu_bedisolation.undefine();
  mu_bedfree.undefine();
  mu_busybed.undefine();
  mu_in_.undefine();
  mu_patientstay.undefine();
  mu_patientroomtype.undefine();
  mu_patientorigin.undefine();
  mu_patientgender.undefine();
  mu_patientage.undefine();
  mu_patientbirthtype.undefine();
  mu_patientcare.undefine();
  mu_patientspecialty.undefine();
  mu_patientisolation.undefine();
  mu_allocated.undefine();
  mu_donotallocate.undefine();
  mu_patientuti.undefine();
  mu_bedobstetricia.undefine();
  mu_patientobstetricia.undefine();
  mu_beducl.undefine();
  mu_patientucl.undefine();
  mu_bedavc.undefine();
  mu_patientavc.undefine();
  mu_bedpsiquiatria.undefine();
  mu_patientpsiquiatria.undefine();
  mu_bedcirurgiabariatrica.undefine();
  mu_patientcirurgiabariatrica.undefine();
  mu_bedginecologia.undefine();
  mu_patientginecologia.undefine();
}
void world_class::reset()
{
  mu_all_event_true.reset();
  mu_h_n.reset();
  mu_g_n.reset();
  mu_f_n.reset();
  mu_TIME.reset();
  mu_agefunc.reset();
  mu_bedstay.reset();
  mu_bedroomtype.reset();
  mu_bedorigin.reset();
  mu_bedgender.reset();
  mu_bedage.reset();
  mu_bedbirthtype.reset();
  mu_bedcare.reset();
  mu_bedspecialty.reset();
  mu_bedisolation.reset();
  mu_bedfree.reset();
  mu_busybed.reset();
  mu_in_.reset();
  mu_patientstay.reset();
  mu_patientroomtype.reset();
  mu_patientorigin.reset();
  mu_patientgender.reset();
  mu_patientage.reset();
  mu_patientbirthtype.reset();
  mu_patientcare.reset();
  mu_patientspecialty.reset();
  mu_patientisolation.reset();
  mu_allocated.reset();
  mu_donotallocate.reset();
  mu_patientuti.reset();
  mu_bedobstetricia.reset();
  mu_patientobstetricia.reset();
  mu_beducl.reset();
  mu_patientucl.reset();
  mu_bedavc.reset();
  mu_patientavc.reset();
  mu_bedpsiquiatria.reset();
  mu_patientpsiquiatria.reset();
  mu_bedcirurgiabariatrica.reset();
  mu_patientcirurgiabariatrica.reset();
  mu_bedginecologia.reset();
  mu_patientginecologia.reset();
}
std::vector<mu_0_boolean*> world_class::get_mu_bools()
{
	  std::vector<mu_0_boolean*> awesome;

      awesome.push_back(&(mu_all_event_true));
    return awesome; 
}
std::vector<mu_0_boolean*> world_class::get_mu_bool_arrays()
{
	  std::vector<mu_0_boolean*> var_arrays;
   std::vector<mu_0_boolean*> interm;

      interm = mu_agefunc.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedstay.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedroomtype.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedorigin.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedgender.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedage.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedbirthtype.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedcare.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedspecialty.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedisolation.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedfree.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_busybed.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_in_.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientstay.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientroomtype.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientorigin.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientgender.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientage.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientbirthtype.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientcare.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientspecialty.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientisolation.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_allocated.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_donotallocate.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientuti.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedobstetricia.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientobstetricia.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_beducl.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientucl.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedavc.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientavc.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedpsiquiatria.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientpsiquiatria.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedcirurgiabariatrica.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientcirurgiabariatrica.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedginecologia.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientginecologia.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
    return var_arrays; 
}
std::vector<mu__real*> world_class::get_mu_nums()
{
	  std::vector<mu__real*> awesome;

    return awesome; 
}
std::vector<mu__real*> world_class::get_mu_num_arrays()
{
	  std::vector<mu__real*> var_arrays;
   std::vector<mu__real*> interm;

      interm = mu_agefunc.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedstay.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedroomtype.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedorigin.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedgender.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedage.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedbirthtype.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedcare.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedspecialty.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedisolation.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedfree.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_busybed.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_in_.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientstay.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientroomtype.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientorigin.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientgender.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientage.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientbirthtype.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientcare.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientspecialty.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientisolation.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_allocated.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_donotallocate.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientuti.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedobstetricia.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientobstetricia.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_beducl.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientucl.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedavc.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientavc.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedpsiquiatria.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientpsiquiatria.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedcirurgiabariatrica.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientcirurgiabariatrica.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedginecologia.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientginecologia.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
    return var_arrays; 
}
//WP WP WP WP WP
double world_class::get_f_val()
{
  double f_val = mu_f_n.value();
  return f_val;
}

//WP WP WP WP WP
void world_class::fire_processes()
{
}

//WP WP WP WP WP
void world_class::fire_processes_plus()
{
}

//WP WP WP WP WP
void world_class::fire_processes_minus()
{
}

//WP WP WP WP WP
void world_class::set_f_val()
{
  double f_val = mu_g_n.value() + mu_h_n.value();
  mu_f_n.value(f_val);
}

//WP WP WP WP WP
double world_class::get_h_val()
{
  double h_val = mu_h_n.value();
  return h_val;
}

//WP WP WP WP WP
void world_class::set_h_val()
{
  //	NON-HEURISTIC SEARCH
  // double h_val = 0; 

  //	FF RPG
  //upm_rpg::getInstance().clear_all();
  //double h_val = upm_rpg::getInstance().compute_rpg();


  //	NUMERIC RPG
  //upm_numeric_rpg::getInstance().clear_all();
  //double h_val = upm_numeric_rpg::getInstance().compute_rpg();

  //	TEMPORAL RPG
  upm_staged_rpg::getInstance().clear_all();
  double h_val = upm_staged_rpg::getInstance().compute_rpg();

  mu_h_n.value(h_val);
}

//WP WP WP WP WP
void world_class::set_h_val(int hp)
{
  double h_val = hp; 
  mu_h_n.value(h_val);
}

//WP WP WP WP WP
double world_class::get_g_val()
{
  double g_val = mu_g_n.value();
  return g_val;
}

//WP WP WP WP WP
void world_class::set_g_val(double g_val)
{
  mu_g_n.value(g_val);
}

void world_class::print(FILE *target, const char *separator)
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_all_event_true.print(target, separator);
  mu_h_n.print(target, separator);
  mu_g_n.print(target, separator);
  mu_f_n.print(target, separator);
  mu_TIME.print(target, separator);
  mu_agefunc.print(target, separator);
  mu_bedstay.print(target, separator);
  mu_bedroomtype.print(target, separator);
  mu_bedorigin.print(target, separator);
  mu_bedgender.print(target, separator);
  mu_bedage.print(target, separator);
  mu_bedbirthtype.print(target, separator);
  mu_bedcare.print(target, separator);
  mu_bedspecialty.print(target, separator);
  mu_bedisolation.print(target, separator);
  mu_bedfree.print(target, separator);
  mu_busybed.print(target, separator);
  mu_in_.print(target, separator);
  mu_patientstay.print(target, separator);
  mu_patientroomtype.print(target, separator);
  mu_patientorigin.print(target, separator);
  mu_patientgender.print(target, separator);
  mu_patientage.print(target, separator);
  mu_patientbirthtype.print(target, separator);
  mu_patientcare.print(target, separator);
  mu_patientspecialty.print(target, separator);
  mu_patientisolation.print(target, separator);
  mu_allocated.print(target, separator);
  mu_donotallocate.print(target, separator);
  mu_patientuti.print(target, separator);
  mu_bedobstetricia.print(target, separator);
  mu_patientobstetricia.print(target, separator);
  mu_beducl.print(target, separator);
  mu_patientucl.print(target, separator);
  mu_bedavc.print(target, separator);
  mu_patientavc.print(target, separator);
  mu_bedpsiquiatria.print(target, separator);
  mu_patientpsiquiatria.print(target, separator);
  mu_bedcirurgiabariatrica.print(target, separator);
  mu_patientcirurgiabariatrica.print(target, separator);
  mu_bedginecologia.print(target, separator);
  mu_patientginecologia.print(target, separator);
    num_calls--;
}
}
void world_class::pddlprint(FILE *target, const char *separator)
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_TIME.print(target, separator);
  mu_agefunc.print(target, separator);
  mu_bedstay.print(target, separator);
  mu_bedroomtype.print(target, separator);
  mu_bedorigin.print(target, separator);
  mu_bedgender.print(target, separator);
  mu_bedage.print(target, separator);
  mu_bedbirthtype.print(target, separator);
  mu_bedcare.print(target, separator);
  mu_bedspecialty.print(target, separator);
  mu_bedisolation.print(target, separator);
  mu_bedfree.print(target, separator);
  mu_busybed.print(target, separator);
  mu_in_.print(target, separator);
  mu_patientstay.print(target, separator);
  mu_patientroomtype.print(target, separator);
  mu_patientorigin.print(target, separator);
  mu_patientgender.print(target, separator);
  mu_patientage.print(target, separator);
  mu_patientbirthtype.print(target, separator);
  mu_patientcare.print(target, separator);
  mu_patientspecialty.print(target, separator);
  mu_patientisolation.print(target, separator);
  mu_allocated.print(target, separator);
  mu_donotallocate.print(target, separator);
  mu_patientuti.print(target, separator);
  mu_bedobstetricia.print(target, separator);
  mu_patientobstetricia.print(target, separator);
  mu_beducl.print(target, separator);
  mu_patientucl.print(target, separator);
  mu_bedavc.print(target, separator);
  mu_patientavc.print(target, separator);
  mu_bedpsiquiatria.print(target, separator);
  mu_patientpsiquiatria.print(target, separator);
  mu_bedcirurgiabariatrica.print(target, separator);
  mu_patientcirurgiabariatrica.print(target, separator);
  mu_bedginecologia.print(target, separator);
  mu_patientginecologia.print(target, separator);
    num_calls--;
}
}
double world_class::get_clock_value()
{
  return mu_TIME.value();
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_all_event_true.print_statistic();
  mu_h_n.print_statistic();
  mu_g_n.print_statistic();
  mu_f_n.print_statistic();
  mu_TIME.print_statistic();
  mu_agefunc.print_statistic();
  mu_bedstay.print_statistic();
  mu_bedroomtype.print_statistic();
  mu_bedorigin.print_statistic();
  mu_bedgender.print_statistic();
  mu_bedage.print_statistic();
  mu_bedbirthtype.print_statistic();
  mu_bedcare.print_statistic();
  mu_bedspecialty.print_statistic();
  mu_bedisolation.print_statistic();
  mu_bedfree.print_statistic();
  mu_busybed.print_statistic();
  mu_in_.print_statistic();
  mu_patientstay.print_statistic();
  mu_patientroomtype.print_statistic();
  mu_patientorigin.print_statistic();
  mu_patientgender.print_statistic();
  mu_patientage.print_statistic();
  mu_patientbirthtype.print_statistic();
  mu_patientcare.print_statistic();
  mu_patientspecialty.print_statistic();
  mu_patientisolation.print_statistic();
  mu_allocated.print_statistic();
  mu_donotallocate.print_statistic();
  mu_patientuti.print_statistic();
  mu_bedobstetricia.print_statistic();
  mu_patientobstetricia.print_statistic();
  mu_beducl.print_statistic();
  mu_patientucl.print_statistic();
  mu_bedavc.print_statistic();
  mu_patientavc.print_statistic();
  mu_bedpsiquiatria.print_statistic();
  mu_patientpsiquiatria.print_statistic();
  mu_bedcirurgiabariatrica.print_statistic();
  mu_patientcirurgiabariatrica.print_statistic();
  mu_bedginecologia.print_statistic();
  mu_patientginecologia.print_statistic();
    num_calls--;
}
}
void world_class::print_diff(state *prevstate, FILE *target, const char *separator)
{
  if ( prevstate != NULL )
  {
    mu_all_event_true.print_diff(prevstate,target,separator);
    mu_h_n.print_diff(prevstate,target,separator);
    mu_g_n.print_diff(prevstate,target,separator);
    mu_f_n.print_diff(prevstate,target,separator);
    mu_TIME.print_diff(prevstate,target,separator);
    mu_agefunc.print_diff(prevstate,target,separator);
    mu_bedstay.print_diff(prevstate,target,separator);
    mu_bedroomtype.print_diff(prevstate,target,separator);
    mu_bedorigin.print_diff(prevstate,target,separator);
    mu_bedgender.print_diff(prevstate,target,separator);
    mu_bedage.print_diff(prevstate,target,separator);
    mu_bedbirthtype.print_diff(prevstate,target,separator);
    mu_bedcare.print_diff(prevstate,target,separator);
    mu_bedspecialty.print_diff(prevstate,target,separator);
    mu_bedisolation.print_diff(prevstate,target,separator);
    mu_bedfree.print_diff(prevstate,target,separator);
    mu_busybed.print_diff(prevstate,target,separator);
    mu_in_.print_diff(prevstate,target,separator);
    mu_patientstay.print_diff(prevstate,target,separator);
    mu_patientroomtype.print_diff(prevstate,target,separator);
    mu_patientorigin.print_diff(prevstate,target,separator);
    mu_patientgender.print_diff(prevstate,target,separator);
    mu_patientage.print_diff(prevstate,target,separator);
    mu_patientbirthtype.print_diff(prevstate,target,separator);
    mu_patientcare.print_diff(prevstate,target,separator);
    mu_patientspecialty.print_diff(prevstate,target,separator);
    mu_patientisolation.print_diff(prevstate,target,separator);
    mu_allocated.print_diff(prevstate,target,separator);
    mu_donotallocate.print_diff(prevstate,target,separator);
    mu_patientuti.print_diff(prevstate,target,separator);
    mu_bedobstetricia.print_diff(prevstate,target,separator);
    mu_patientobstetricia.print_diff(prevstate,target,separator);
    mu_beducl.print_diff(prevstate,target,separator);
    mu_patientucl.print_diff(prevstate,target,separator);
    mu_bedavc.print_diff(prevstate,target,separator);
    mu_patientavc.print_diff(prevstate,target,separator);
    mu_bedpsiquiatria.print_diff(prevstate,target,separator);
    mu_patientpsiquiatria.print_diff(prevstate,target,separator);
    mu_bedcirurgiabariatrica.print_diff(prevstate,target,separator);
    mu_patientcirurgiabariatrica.print_diff(prevstate,target,separator);
    mu_bedginecologia.print_diff(prevstate,target,separator);
    mu_patientginecologia.print_diff(prevstate,target,separator);
  }
  else
print(target,separator);
}
void world_class::to_state(state *newstate)
{
  mu_all_event_true.to_state( newstate );
  mu_h_n.to_state( newstate );
  mu_g_n.to_state( newstate );
  mu_f_n.to_state( newstate );
  mu_TIME.to_state( newstate );
  mu_agefunc.to_state( newstate );
  mu_bedstay.to_state( newstate );
  mu_bedroomtype.to_state( newstate );
  mu_bedorigin.to_state( newstate );
  mu_bedgender.to_state( newstate );
  mu_bedage.to_state( newstate );
  mu_bedbirthtype.to_state( newstate );
  mu_bedcare.to_state( newstate );
  mu_bedspecialty.to_state( newstate );
  mu_bedisolation.to_state( newstate );
  mu_bedfree.to_state( newstate );
  mu_busybed.to_state( newstate );
  mu_in_.to_state( newstate );
  mu_patientstay.to_state( newstate );
  mu_patientroomtype.to_state( newstate );
  mu_patientorigin.to_state( newstate );
  mu_patientgender.to_state( newstate );
  mu_patientage.to_state( newstate );
  mu_patientbirthtype.to_state( newstate );
  mu_patientcare.to_state( newstate );
  mu_patientspecialty.to_state( newstate );
  mu_patientisolation.to_state( newstate );
  mu_allocated.to_state( newstate );
  mu_donotallocate.to_state( newstate );
  mu_patientuti.to_state( newstate );
  mu_bedobstetricia.to_state( newstate );
  mu_patientobstetricia.to_state( newstate );
  mu_beducl.to_state( newstate );
  mu_patientucl.to_state( newstate );
  mu_bedavc.to_state( newstate );
  mu_patientavc.to_state( newstate );
  mu_bedpsiquiatria.to_state( newstate );
  mu_patientpsiquiatria.to_state( newstate );
  mu_bedcirurgiabariatrica.to_state( newstate );
  mu_patientcirurgiabariatrica.to_state( newstate );
  mu_bedginecologia.to_state( newstate );
  mu_patientginecologia.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    return tsprintf(" time passing ");
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    return mu_true;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;



    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;



    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;



    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;



    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;


    effs.push_back(&(mu_TIME));  // (mu_TIME) + (mu_T) 

    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;



    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;



    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    aeffs.push_back(&(mu_TIME)); //  (mu_TIME) + (mu_T) 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 0;
    while (what_rule < 1 )
      {
	if ( ( TRUE  ) ) {
	      if (mu_true) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
mu_TIME = (mu_TIME) + (mu_T);
mu_event_check (  );
mu_apply_continuous_change (  );
mu_event_check (  );
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {





  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {



mu_TIME = (mu_TIME) + (mu_T);


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {





  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {





  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    return 1;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    return Duration(r);
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    return tsprintf("( time passing )");
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Clock;
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocate , varcare:%s, varage:%s, vargender:%s, varorigin:%s, varroomtype:%s, varstay:%s, varspecialty:%s, varbed:%s, p:%s", mu_varcare.Name(), mu_varage.Name(), mu_vargender.Name(), mu_varorigin.Name(), mu_varroomtype.Name(), mu_varstay.Name(), mu_varspecialty.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr58;
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
bool mu__boolexpr72;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
    return mu__boolexpr58;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
bool mu__boolexpr101;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr154;
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
bool mu__boolexpr186;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
bool mu__boolexpr206;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr217;
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
bool mu__boolexpr233;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr255;
bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr273;
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr277;
bool mu__boolexpr278;
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr294;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr297;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedage[mu_varbed][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedage[mu_varbed][mu_varage])); 
 		if (std::string(typeid(mu_bedcare[mu_varbed][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedcare[mu_varbed][mu_varcare])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_bedorigin[mu_varbed][mu_varorigin]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedorigin[mu_varbed][mu_varorigin])); 
 		if (std::string(typeid(mu_bedroomtype[mu_varbed][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedroomtype[mu_varbed][mu_varroomtype])); 
 		if (std::string(typeid(mu_bedspecialty[mu_varbed][mu_varspecialty]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedspecialty[mu_varbed][mu_varspecialty])); 
 		if (std::string(typeid(mu_bedstay[mu_varbed][mu_varstay]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedstay[mu_varbed][mu_varstay])); 
 		if (std::string(typeid(mu_patientage[mu_p][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientage[mu_p][mu_varage])); 
 		if (std::string(typeid(mu_patientcare[mu_p][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientcare[mu_p][mu_varcare])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 
 		if (std::string(typeid(mu_patientorigin[mu_p][mu_varorigin]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientorigin[mu_p][mu_varorigin])); 
 		if (std::string(typeid(mu_patientroomtype[mu_p][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientroomtype[mu_p][mu_varroomtype])); 
 		if (std::string(typeid(mu_patientspecialty[mu_p][mu_varspecialty]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientspecialty[mu_p][mu_varspecialty])); 
 		if (std::string(typeid(mu_patientstay[mu_p][mu_varstay]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientstay[mu_p][mu_varstay])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr298;
bool mu__boolexpr299;
bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
bool mu__boolexpr311;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr312;
bool mu__boolexpr313;
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr327;
bool mu__boolexpr328;
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
bool mu__boolexpr353;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
bool mu__boolexpr364;
bool mu__boolexpr365;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
bool mu__boolexpr383;
bool mu__boolexpr384;
bool mu__boolexpr385;
bool mu__boolexpr386;
bool mu__boolexpr387;
bool mu__boolexpr388;
bool mu__boolexpr389;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr388)) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr386)) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr390;
bool mu__boolexpr391;
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
bool mu__boolexpr400;
bool mu__boolexpr401;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr392)) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr402;
bool mu__boolexpr403;
bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
bool mu__boolexpr407;
bool mu__boolexpr408;
bool mu__boolexpr409;
bool mu__boolexpr410;
bool mu__boolexpr411;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr410)) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr409)) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr403)) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr412;
bool mu__boolexpr413;
bool mu__boolexpr414;
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
bool mu__boolexpr420;
bool mu__boolexpr421;
bool mu__boolexpr422;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr414)) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr413)) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
bool mu__boolexpr430;
bool mu__boolexpr431;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr431)) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr432;
bool mu__boolexpr433;
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
bool mu__boolexpr437;
bool mu__boolexpr438;
bool mu__boolexpr439;
bool mu__boolexpr440;
bool mu__boolexpr441;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr440)) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr437)) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr442;
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
bool mu__boolexpr453;
bool mu__boolexpr454;
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
bool mu__boolexpr458;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr459;
bool mu__boolexpr460;
bool mu__boolexpr461;
bool mu__boolexpr462;
bool mu__boolexpr463;
bool mu__boolexpr464;
bool mu__boolexpr465;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr463)) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
bool mu__boolexpr470;
bool mu__boolexpr471;
bool mu__boolexpr472;
bool mu__boolexpr473;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr473)) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr471)) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
bool mu__boolexpr477;
bool mu__boolexpr478;
bool mu__boolexpr479;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr477)) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr480;
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
bool mu__boolexpr484;
bool mu__boolexpr485;
bool mu__boolexpr486;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
bool mu__boolexpr490;
bool mu__boolexpr491;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr491)) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr492;
bool mu__boolexpr493;
bool mu__boolexpr494;
bool mu__boolexpr495;
bool mu__boolexpr496;
bool mu__boolexpr497;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr493)) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr498;
bool mu__boolexpr499;
bool mu__boolexpr500;
bool mu__boolexpr501;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr501)) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr502;
bool mu__boolexpr503;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr503)) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr507;
bool mu__boolexpr508;
bool mu__boolexpr509;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr510;
bool mu__boolexpr511;
bool mu__boolexpr512;
bool mu__boolexpr513;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr512)) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr511)) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr514;
bool mu__boolexpr515;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr516;
bool mu__boolexpr517;
bool mu__boolexpr518;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr519;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr520;
bool mu__boolexpr521;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr522;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedage[mu_varbed][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedage[mu_varbed][mu_varage])); 
 		if (std::string(typeid(mu_bedcare[mu_varbed][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedcare[mu_varbed][mu_varcare])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_bedorigin[mu_varbed][mu_varorigin]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedorigin[mu_varbed][mu_varorigin])); 
 		if (std::string(typeid(mu_bedroomtype[mu_varbed][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedroomtype[mu_varbed][mu_varroomtype])); 
 		if (std::string(typeid(mu_bedspecialty[mu_varbed][mu_varspecialty]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedspecialty[mu_varbed][mu_varspecialty])); 
 		if (std::string(typeid(mu_bedstay[mu_varbed][mu_varstay]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedstay[mu_varbed][mu_varstay])); 
 		if (std::string(typeid(mu_patientage[mu_p][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientage[mu_p][mu_varage])); 
 		if (std::string(typeid(mu_patientcare[mu_p][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientcare[mu_p][mu_varcare])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 
 		if (std::string(typeid(mu_patientorigin[mu_p][mu_varorigin]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientorigin[mu_p][mu_varorigin])); 
 		if (std::string(typeid(mu_patientroomtype[mu_p][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientroomtype[mu_p][mu_varroomtype])); 
 		if (std::string(typeid(mu_patientspecialty[mu_p][mu_varspecialty]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientspecialty[mu_p][mu_varspecialty])); 
 		if (std::string(typeid(mu_patientstay[mu_p][mu_varstay]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientstay[mu_p][mu_varstay])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr523;
bool mu__boolexpr524;
bool mu__boolexpr525;
bool mu__boolexpr526;
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
bool mu__boolexpr533;
bool mu__boolexpr534;
bool mu__boolexpr535;
bool mu__boolexpr536;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr535)) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr534)) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr533)) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr524)) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr537;
bool mu__boolexpr538;
bool mu__boolexpr539;
bool mu__boolexpr540;
bool mu__boolexpr541;
bool mu__boolexpr542;
bool mu__boolexpr543;
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
bool mu__boolexpr547;
bool mu__boolexpr548;
bool mu__boolexpr549;
bool mu__boolexpr550;
bool mu__boolexpr551;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr551)) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr550)) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr549)) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr548)) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
  mu__boolexpr542 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr542)) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr540)) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr552;
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
bool mu__boolexpr556;
bool mu__boolexpr557;
bool mu__boolexpr558;
bool mu__boolexpr559;
bool mu__boolexpr560;
bool mu__boolexpr561;
bool mu__boolexpr562;
bool mu__boolexpr563;
bool mu__boolexpr564;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr564)) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr562)) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr561)) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr560)) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr559)) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr553)) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr565;
bool mu__boolexpr566;
bool mu__boolexpr567;
bool mu__boolexpr568;
bool mu__boolexpr569;
bool mu__boolexpr570;
bool mu__boolexpr571;
bool mu__boolexpr572;
bool mu__boolexpr573;
bool mu__boolexpr574;
bool mu__boolexpr575;
bool mu__boolexpr576;
bool mu__boolexpr577;
bool mu__boolexpr578;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr577)) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr575)) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr574)) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr573)) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr571)) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr579;
bool mu__boolexpr580;
bool mu__boolexpr581;
bool mu__boolexpr582;
bool mu__boolexpr583;
bool mu__boolexpr584;
bool mu__boolexpr585;
bool mu__boolexpr586;
bool mu__boolexpr587;
bool mu__boolexpr588;
bool mu__boolexpr589;
bool mu__boolexpr590;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr590)) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr587)) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr583)) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr581)) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr591;
bool mu__boolexpr592;
bool mu__boolexpr593;
bool mu__boolexpr594;
bool mu__boolexpr595;
bool mu__boolexpr596;
bool mu__boolexpr597;
bool mu__boolexpr598;
bool mu__boolexpr599;
bool mu__boolexpr600;
bool mu__boolexpr601;
bool mu__boolexpr602;
bool mu__boolexpr603;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr602)) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr599)) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr598)) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr597)) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr596)) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr595)) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr594)) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr592)) mu__boolexpr591 = FALSE ;
  else {
  mu__boolexpr591 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr604;
bool mu__boolexpr605;
bool mu__boolexpr606;
bool mu__boolexpr607;
bool mu__boolexpr608;
bool mu__boolexpr609;
bool mu__boolexpr610;
bool mu__boolexpr611;
bool mu__boolexpr612;
bool mu__boolexpr613;
bool mu__boolexpr614;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr614)) mu__boolexpr613 = FALSE ;
  else {
  mu__boolexpr613 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr613)) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr612)) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr611)) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr610)) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr608)) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr607)) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr606)) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr615;
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
bool mu__boolexpr619;
bool mu__boolexpr620;
bool mu__boolexpr621;
bool mu__boolexpr622;
bool mu__boolexpr623;
bool mu__boolexpr624;
bool mu__boolexpr625;
bool mu__boolexpr626;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr626 = FALSE ;
  else {
  mu__boolexpr626 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr626)) mu__boolexpr625 = FALSE ;
  else {
  mu__boolexpr625 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr624)) mu__boolexpr623 = FALSE ;
  else {
  mu__boolexpr623 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr623)) mu__boolexpr622 = FALSE ;
  else {
  mu__boolexpr622 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr622)) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr621)) mu__boolexpr620 = FALSE ;
  else {
  mu__boolexpr620 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr620)) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr616)) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr627;
bool mu__boolexpr628;
bool mu__boolexpr629;
bool mu__boolexpr630;
bool mu__boolexpr631;
bool mu__boolexpr632;
bool mu__boolexpr633;
bool mu__boolexpr634;
bool mu__boolexpr635;
bool mu__boolexpr636;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr636)) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr635)) mu__boolexpr634 = FALSE ;
  else {
  mu__boolexpr634 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr634)) mu__boolexpr633 = FALSE ;
  else {
  mu__boolexpr633 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr633)) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr632)) mu__boolexpr631 = FALSE ;
  else {
  mu__boolexpr631 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr631)) mu__boolexpr630 = FALSE ;
  else {
  mu__boolexpr630 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr630)) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = FALSE ;
  else {
  mu__boolexpr627 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr637;
bool mu__boolexpr638;
bool mu__boolexpr639;
bool mu__boolexpr640;
bool mu__boolexpr641;
bool mu__boolexpr642;
bool mu__boolexpr643;
bool mu__boolexpr644;
bool mu__boolexpr645;
bool mu__boolexpr646;
bool mu__boolexpr647;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr647)) mu__boolexpr646 = FALSE ;
  else {
  mu__boolexpr646 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr646)) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr645)) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr644)) mu__boolexpr643 = FALSE ;
  else {
  mu__boolexpr643 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr643)) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = FALSE ;
  else {
  mu__boolexpr641 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr641)) mu__boolexpr640 = FALSE ;
  else {
  mu__boolexpr640 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr640)) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr639)) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr638)) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr648;
bool mu__boolexpr649;
bool mu__boolexpr650;
bool mu__boolexpr651;
bool mu__boolexpr652;
bool mu__boolexpr653;
bool mu__boolexpr654;
bool mu__boolexpr655;
bool mu__boolexpr656;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr656)) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr655)) mu__boolexpr654 = FALSE ;
  else {
  mu__boolexpr654 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr654)) mu__boolexpr653 = FALSE ;
  else {
  mu__boolexpr653 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr653)) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr652)) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr651)) mu__boolexpr650 = FALSE ;
  else {
  mu__boolexpr650 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr650)) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr657;
bool mu__boolexpr658;
bool mu__boolexpr659;
bool mu__boolexpr660;
bool mu__boolexpr661;
bool mu__boolexpr662;
bool mu__boolexpr663;
bool mu__boolexpr664;
bool mu__boolexpr665;
bool mu__boolexpr666;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr666)) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr665)) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr664)) mu__boolexpr663 = FALSE ;
  else {
  mu__boolexpr663 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr663)) mu__boolexpr662 = FALSE ;
  else {
  mu__boolexpr662 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr662)) mu__boolexpr661 = FALSE ;
  else {
  mu__boolexpr661 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr661)) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr660)) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr658)) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr667;
bool mu__boolexpr668;
bool mu__boolexpr669;
bool mu__boolexpr670;
bool mu__boolexpr671;
bool mu__boolexpr672;
bool mu__boolexpr673;
bool mu__boolexpr674;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr674)) mu__boolexpr673 = FALSE ;
  else {
  mu__boolexpr673 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr673)) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr672)) mu__boolexpr671 = FALSE ;
  else {
  mu__boolexpr671 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr671)) mu__boolexpr670 = FALSE ;
  else {
  mu__boolexpr670 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr670)) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr668)) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr675;
bool mu__boolexpr676;
bool mu__boolexpr677;
bool mu__boolexpr678;
bool mu__boolexpr679;
bool mu__boolexpr680;
bool mu__boolexpr681;
bool mu__boolexpr682;
bool mu__boolexpr683;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr683)) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr682)) mu__boolexpr681 = FALSE ;
  else {
  mu__boolexpr681 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr681)) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr680)) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr679)) mu__boolexpr678 = FALSE ;
  else {
  mu__boolexpr678 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr678)) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr677)) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr684;
bool mu__boolexpr685;
bool mu__boolexpr686;
bool mu__boolexpr687;
bool mu__boolexpr688;
bool mu__boolexpr689;
bool mu__boolexpr690;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr690 = FALSE ;
  else {
  mu__boolexpr690 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr690)) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr689)) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr688)) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr687)) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr686)) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr685)) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr691;
bool mu__boolexpr692;
bool mu__boolexpr693;
bool mu__boolexpr694;
bool mu__boolexpr695;
bool mu__boolexpr696;
bool mu__boolexpr697;
bool mu__boolexpr698;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr696)) mu__boolexpr695 = FALSE ;
  else {
  mu__boolexpr695 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr695)) mu__boolexpr694 = FALSE ;
  else {
  mu__boolexpr694 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr694)) mu__boolexpr693 = FALSE ;
  else {
  mu__boolexpr693 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr693)) mu__boolexpr692 = FALSE ;
  else {
  mu__boolexpr692 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr692)) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr699;
bool mu__boolexpr700;
bool mu__boolexpr701;
bool mu__boolexpr702;
bool mu__boolexpr703;
bool mu__boolexpr704;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr704)) mu__boolexpr703 = FALSE ;
  else {
  mu__boolexpr703 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr703)) mu__boolexpr702 = FALSE ;
  else {
  mu__boolexpr702 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr702)) mu__boolexpr701 = FALSE ;
  else {
  mu__boolexpr701 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr701)) mu__boolexpr700 = FALSE ;
  else {
  mu__boolexpr700 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr700)) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr705;
bool mu__boolexpr706;
bool mu__boolexpr707;
bool mu__boolexpr708;
bool mu__boolexpr709;
bool mu__boolexpr710;
bool mu__boolexpr711;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr711 = FALSE ;
  else {
  mu__boolexpr711 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr711)) mu__boolexpr710 = FALSE ;
  else {
  mu__boolexpr710 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr710)) mu__boolexpr709 = FALSE ;
  else {
  mu__boolexpr709 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr709)) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr707)) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr712;
bool mu__boolexpr713;
bool mu__boolexpr714;
bool mu__boolexpr715;
bool mu__boolexpr716;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr714)) mu__boolexpr713 = FALSE ;
  else {
  mu__boolexpr713 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr713)) mu__boolexpr712 = FALSE ;
  else {
  mu__boolexpr712 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr717;
bool mu__boolexpr718;
bool mu__boolexpr719;
bool mu__boolexpr720;
bool mu__boolexpr721;
bool mu__boolexpr722;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr722 = FALSE ;
  else {
  mu__boolexpr722 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr722)) mu__boolexpr721 = FALSE ;
  else {
  mu__boolexpr721 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr721)) mu__boolexpr720 = FALSE ;
  else {
  mu__boolexpr720 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr720)) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr719)) mu__boolexpr718 = FALSE ;
  else {
  mu__boolexpr718 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr718)) mu__boolexpr717 = FALSE ;
  else {
  mu__boolexpr717 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr723;
bool mu__boolexpr724;
bool mu__boolexpr725;
bool mu__boolexpr726;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr726 = FALSE ;
  else {
  mu__boolexpr726 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr726)) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr725)) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr724)) mu__boolexpr723 = FALSE ;
  else {
  mu__boolexpr723 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr727;
bool mu__boolexpr728;
bool mu__boolexpr729;
bool mu__boolexpr730;
bool mu__boolexpr731;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr731 = FALSE ;
  else {
  mu__boolexpr731 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr731)) mu__boolexpr730 = FALSE ;
  else {
  mu__boolexpr730 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr730)) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr729)) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = FALSE ;
  else {
  mu__boolexpr727 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr732;
bool mu__boolexpr733;
bool mu__boolexpr734;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr734 = FALSE ;
  else {
  mu__boolexpr734 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr734)) mu__boolexpr733 = FALSE ;
  else {
  mu__boolexpr733 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr733)) mu__boolexpr732 = FALSE ;
  else {
  mu__boolexpr732 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr735;
bool mu__boolexpr736;
bool mu__boolexpr737;
bool mu__boolexpr738;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr738 = FALSE ;
  else {
  mu__boolexpr738 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr738)) mu__boolexpr737 = FALSE ;
  else {
  mu__boolexpr737 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr737)) mu__boolexpr736 = FALSE ;
  else {
  mu__boolexpr736 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr736)) mu__boolexpr735 = FALSE ;
  else {
  mu__boolexpr735 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr739;
bool mu__boolexpr740;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr740 = FALSE ;
  else {
  mu__boolexpr740 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr740)) mu__boolexpr739 = FALSE ;
  else {
  mu__boolexpr739 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr741;
bool mu__boolexpr742;
bool mu__boolexpr743;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr743 = FALSE ;
  else {
  mu__boolexpr743 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr743)) mu__boolexpr742 = FALSE ;
  else {
  mu__boolexpr742 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr742)) mu__boolexpr741 = FALSE ;
  else {
  mu__boolexpr741 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr744;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr744 = FALSE ;
  else {
  mu__boolexpr744 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr745;
bool mu__boolexpr746;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
  mu__boolexpr745 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr747;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedage[mu_varbed][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedage[mu_varbed][mu_varage]), 1)); 
 		if (std::string(typeid(mu_bedcare[mu_varbed][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedcare[mu_varbed][mu_varcare]), 1)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedgender[mu_varbed][mu_vargender]), 1)); 
 		if (std::string(typeid(mu_bedorigin[mu_varbed][mu_varorigin]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedorigin[mu_varbed][mu_varorigin]), 1)); 
 		if (std::string(typeid(mu_bedroomtype[mu_varbed][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedroomtype[mu_varbed][mu_varroomtype]), 1)); 
 		if (std::string(typeid(mu_bedspecialty[mu_varbed][mu_varspecialty]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedspecialty[mu_varbed][mu_varspecialty]), 1)); 
 		if (std::string(typeid(mu_bedstay[mu_varbed][mu_varstay]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedstay[mu_varbed][mu_varstay]), 1)); 
 		if (std::string(typeid(mu_patientage[mu_p][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientage[mu_p][mu_varage]), 1)); 
 		if (std::string(typeid(mu_patientcare[mu_p][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientcare[mu_p][mu_varcare]), 1)); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientgender[mu_p][mu_vargender]), 1)); 
 		if (std::string(typeid(mu_patientorigin[mu_p][mu_varorigin]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientorigin[mu_p][mu_varorigin]), 1)); 
 		if (std::string(typeid(mu_patientroomtype[mu_p][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientroomtype[mu_p][mu_varroomtype]), 1)); 
 		if (std::string(typeid(mu_patientspecialty[mu_p][mu_varspecialty]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientspecialty[mu_p][mu_varspecialty]), 1)); 
 		if (std::string(typeid(mu_patientstay[mu_p][mu_varstay]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientstay[mu_p][mu_varstay]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr748;
bool mu__boolexpr749;
bool mu__boolexpr750;
bool mu__boolexpr751;
bool mu__boolexpr752;
bool mu__boolexpr753;
bool mu__boolexpr754;
bool mu__boolexpr755;
bool mu__boolexpr756;
bool mu__boolexpr757;
bool mu__boolexpr758;
bool mu__boolexpr759;
bool mu__boolexpr760;
bool mu__boolexpr761;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr761 = FALSE ;
  else {
  mu__boolexpr761 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr761)) mu__boolexpr760 = FALSE ;
  else {
  mu__boolexpr760 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr760)) mu__boolexpr759 = FALSE ;
  else {
  mu__boolexpr759 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr759)) mu__boolexpr758 = FALSE ;
  else {
  mu__boolexpr758 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr758)) mu__boolexpr757 = FALSE ;
  else {
  mu__boolexpr757 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr757)) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr756)) mu__boolexpr755 = FALSE ;
  else {
  mu__boolexpr755 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr755)) mu__boolexpr754 = FALSE ;
  else {
  mu__boolexpr754 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr754)) mu__boolexpr753 = FALSE ;
  else {
  mu__boolexpr753 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr753)) mu__boolexpr752 = FALSE ;
  else {
  mu__boolexpr752 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr752)) mu__boolexpr751 = FALSE ;
  else {
  mu__boolexpr751 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr751)) mu__boolexpr750 = FALSE ;
  else {
  mu__boolexpr750 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr750)) mu__boolexpr749 = FALSE ;
  else {
  mu__boolexpr749 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr749)) mu__boolexpr748 = FALSE ;
  else {
  mu__boolexpr748 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr762;
bool mu__boolexpr763;
bool mu__boolexpr764;
bool mu__boolexpr765;
bool mu__boolexpr766;
bool mu__boolexpr767;
bool mu__boolexpr768;
bool mu__boolexpr769;
bool mu__boolexpr770;
bool mu__boolexpr771;
bool mu__boolexpr772;
bool mu__boolexpr773;
bool mu__boolexpr774;
bool mu__boolexpr775;
bool mu__boolexpr776;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr776 = FALSE ;
  else {
  mu__boolexpr776 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr776)) mu__boolexpr775 = FALSE ;
  else {
  mu__boolexpr775 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr775)) mu__boolexpr774 = FALSE ;
  else {
  mu__boolexpr774 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr774)) mu__boolexpr773 = FALSE ;
  else {
  mu__boolexpr773 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr773)) mu__boolexpr772 = FALSE ;
  else {
  mu__boolexpr772 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr772)) mu__boolexpr771 = FALSE ;
  else {
  mu__boolexpr771 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr771)) mu__boolexpr770 = FALSE ;
  else {
  mu__boolexpr770 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr770)) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr768)) mu__boolexpr767 = FALSE ;
  else {
  mu__boolexpr767 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr767)) mu__boolexpr766 = FALSE ;
  else {
  mu__boolexpr766 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr766)) mu__boolexpr765 = FALSE ;
  else {
  mu__boolexpr765 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
  mu__boolexpr764 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr764)) mu__boolexpr763 = FALSE ;
  else {
  mu__boolexpr763 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
  if (!(mu__boolexpr763)) mu__boolexpr762 = FALSE ;
  else {
  mu__boolexpr762 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr777;
bool mu__boolexpr778;
bool mu__boolexpr779;
bool mu__boolexpr780;
bool mu__boolexpr781;
bool mu__boolexpr782;
bool mu__boolexpr783;
bool mu__boolexpr784;
bool mu__boolexpr785;
bool mu__boolexpr786;
bool mu__boolexpr787;
bool mu__boolexpr788;
bool mu__boolexpr789;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr789 = FALSE ;
  else {
  mu__boolexpr789 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr789)) mu__boolexpr788 = FALSE ;
  else {
  mu__boolexpr788 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr788)) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr787)) mu__boolexpr786 = FALSE ;
  else {
  mu__boolexpr786 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr786)) mu__boolexpr785 = FALSE ;
  else {
  mu__boolexpr785 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr785)) mu__boolexpr784 = FALSE ;
  else {
  mu__boolexpr784 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr784)) mu__boolexpr783 = FALSE ;
  else {
  mu__boolexpr783 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr783)) mu__boolexpr782 = FALSE ;
  else {
  mu__boolexpr782 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr782)) mu__boolexpr781 = FALSE ;
  else {
  mu__boolexpr781 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr781)) mu__boolexpr780 = FALSE ;
  else {
  mu__boolexpr780 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr780)) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr778)) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr790;
bool mu__boolexpr791;
bool mu__boolexpr792;
bool mu__boolexpr793;
bool mu__boolexpr794;
bool mu__boolexpr795;
bool mu__boolexpr796;
bool mu__boolexpr797;
bool mu__boolexpr798;
bool mu__boolexpr799;
bool mu__boolexpr800;
bool mu__boolexpr801;
bool mu__boolexpr802;
bool mu__boolexpr803;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr803 = FALSE ;
  else {
  mu__boolexpr803 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr803)) mu__boolexpr802 = FALSE ;
  else {
  mu__boolexpr802 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr802)) mu__boolexpr801 = FALSE ;
  else {
  mu__boolexpr801 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr801)) mu__boolexpr800 = FALSE ;
  else {
  mu__boolexpr800 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr800)) mu__boolexpr799 = FALSE ;
  else {
  mu__boolexpr799 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr799)) mu__boolexpr798 = FALSE ;
  else {
  mu__boolexpr798 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr798)) mu__boolexpr797 = FALSE ;
  else {
  mu__boolexpr797 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr797)) mu__boolexpr796 = FALSE ;
  else {
  mu__boolexpr796 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr796)) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr795)) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr794)) mu__boolexpr793 = FALSE ;
  else {
  mu__boolexpr793 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr793)) mu__boolexpr792 = FALSE ;
  else {
  mu__boolexpr792 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr792)) mu__boolexpr791 = FALSE ;
  else {
  mu__boolexpr791 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr791)) mu__boolexpr790 = FALSE ;
  else {
  mu__boolexpr790 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr804;
bool mu__boolexpr805;
bool mu__boolexpr806;
bool mu__boolexpr807;
bool mu__boolexpr808;
bool mu__boolexpr809;
bool mu__boolexpr810;
bool mu__boolexpr811;
bool mu__boolexpr812;
bool mu__boolexpr813;
bool mu__boolexpr814;
bool mu__boolexpr815;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr815 = FALSE ;
  else {
  mu__boolexpr815 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr815)) mu__boolexpr814 = FALSE ;
  else {
  mu__boolexpr814 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr814)) mu__boolexpr813 = FALSE ;
  else {
  mu__boolexpr813 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr813)) mu__boolexpr812 = FALSE ;
  else {
  mu__boolexpr812 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr812)) mu__boolexpr811 = FALSE ;
  else {
  mu__boolexpr811 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr811)) mu__boolexpr810 = FALSE ;
  else {
  mu__boolexpr810 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr810)) mu__boolexpr809 = FALSE ;
  else {
  mu__boolexpr809 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr809)) mu__boolexpr808 = FALSE ;
  else {
  mu__boolexpr808 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr808)) mu__boolexpr807 = FALSE ;
  else {
  mu__boolexpr807 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr807)) mu__boolexpr806 = FALSE ;
  else {
  mu__boolexpr806 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr806)) mu__boolexpr805 = FALSE ;
  else {
  mu__boolexpr805 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr805)) mu__boolexpr804 = FALSE ;
  else {
  mu__boolexpr804 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr816;
bool mu__boolexpr817;
bool mu__boolexpr818;
bool mu__boolexpr819;
bool mu__boolexpr820;
bool mu__boolexpr821;
bool mu__boolexpr822;
bool mu__boolexpr823;
bool mu__boolexpr824;
bool mu__boolexpr825;
bool mu__boolexpr826;
bool mu__boolexpr827;
bool mu__boolexpr828;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr828 = FALSE ;
  else {
  mu__boolexpr828 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr828)) mu__boolexpr827 = FALSE ;
  else {
  mu__boolexpr827 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr827)) mu__boolexpr826 = FALSE ;
  else {
  mu__boolexpr826 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr826)) mu__boolexpr825 = FALSE ;
  else {
  mu__boolexpr825 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr825)) mu__boolexpr824 = FALSE ;
  else {
  mu__boolexpr824 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr824)) mu__boolexpr823 = FALSE ;
  else {
  mu__boolexpr823 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr823)) mu__boolexpr822 = FALSE ;
  else {
  mu__boolexpr822 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr822)) mu__boolexpr821 = FALSE ;
  else {
  mu__boolexpr821 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr821)) mu__boolexpr820 = FALSE ;
  else {
  mu__boolexpr820 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr820)) mu__boolexpr819 = FALSE ;
  else {
  mu__boolexpr819 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr819)) mu__boolexpr818 = FALSE ;
  else {
  mu__boolexpr818 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr818)) mu__boolexpr817 = FALSE ;
  else {
  mu__boolexpr817 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr817)) mu__boolexpr816 = FALSE ;
  else {
  mu__boolexpr816 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr829;
bool mu__boolexpr830;
bool mu__boolexpr831;
bool mu__boolexpr832;
bool mu__boolexpr833;
bool mu__boolexpr834;
bool mu__boolexpr835;
bool mu__boolexpr836;
bool mu__boolexpr837;
bool mu__boolexpr838;
bool mu__boolexpr839;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr839 = FALSE ;
  else {
  mu__boolexpr839 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr839)) mu__boolexpr838 = FALSE ;
  else {
  mu__boolexpr838 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr838)) mu__boolexpr837 = FALSE ;
  else {
  mu__boolexpr837 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr837)) mu__boolexpr836 = FALSE ;
  else {
  mu__boolexpr836 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr836)) mu__boolexpr835 = FALSE ;
  else {
  mu__boolexpr835 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr835)) mu__boolexpr834 = FALSE ;
  else {
  mu__boolexpr834 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr834)) mu__boolexpr833 = FALSE ;
  else {
  mu__boolexpr833 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr833)) mu__boolexpr832 = FALSE ;
  else {
  mu__boolexpr832 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr832)) mu__boolexpr831 = FALSE ;
  else {
  mu__boolexpr831 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr831)) mu__boolexpr830 = FALSE ;
  else {
  mu__boolexpr830 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr830)) mu__boolexpr829 = FALSE ;
  else {
  mu__boolexpr829 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr840;
bool mu__boolexpr841;
bool mu__boolexpr842;
bool mu__boolexpr843;
bool mu__boolexpr844;
bool mu__boolexpr845;
bool mu__boolexpr846;
bool mu__boolexpr847;
bool mu__boolexpr848;
bool mu__boolexpr849;
bool mu__boolexpr850;
bool mu__boolexpr851;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr851 = FALSE ;
  else {
  mu__boolexpr851 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr851)) mu__boolexpr850 = FALSE ;
  else {
  mu__boolexpr850 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr850)) mu__boolexpr849 = FALSE ;
  else {
  mu__boolexpr849 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr849)) mu__boolexpr848 = FALSE ;
  else {
  mu__boolexpr848 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr848)) mu__boolexpr847 = FALSE ;
  else {
  mu__boolexpr847 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr847)) mu__boolexpr846 = FALSE ;
  else {
  mu__boolexpr846 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr846)) mu__boolexpr845 = FALSE ;
  else {
  mu__boolexpr845 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr845)) mu__boolexpr844 = FALSE ;
  else {
  mu__boolexpr844 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr844)) mu__boolexpr843 = FALSE ;
  else {
  mu__boolexpr843 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr843)) mu__boolexpr842 = FALSE ;
  else {
  mu__boolexpr842 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr842)) mu__boolexpr841 = FALSE ;
  else {
  mu__boolexpr841 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr841)) mu__boolexpr840 = FALSE ;
  else {
  mu__boolexpr840 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
bool mu__boolexpr852;
bool mu__boolexpr853;
bool mu__boolexpr854;
bool mu__boolexpr855;
bool mu__boolexpr856;
bool mu__boolexpr857;
bool mu__boolexpr858;
bool mu__boolexpr859;
bool mu__boolexpr860;
bool mu__boolexpr861;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr861 = FALSE ;
  else {
  mu__boolexpr861 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr861)) mu__boolexpr860 = FALSE ;
  else {
  mu__boolexpr860 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr860)) mu__boolexpr859 = FALSE ;
  else {
  mu__boolexpr859 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr859)) mu__boolexpr858 = FALSE ;
  else {
  mu__boolexpr858 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr858)) mu__boolexpr857 = FALSE ;
  else {
  mu__boolexpr857 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr857)) mu__boolexpr856 = FALSE ;
  else {
  mu__boolexpr856 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr856)) mu__boolexpr855 = FALSE ;
  else {
  mu__boolexpr855 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr855)) mu__boolexpr854 = FALSE ;
  else {
  mu__boolexpr854 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr854)) mu__boolexpr853 = FALSE ;
  else {
  mu__boolexpr853 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr853)) mu__boolexpr852 = FALSE ;
  else {
  mu__boolexpr852 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr862;
bool mu__boolexpr863;
bool mu__boolexpr864;
bool mu__boolexpr865;
bool mu__boolexpr866;
bool mu__boolexpr867;
bool mu__boolexpr868;
bool mu__boolexpr869;
bool mu__boolexpr870;
bool mu__boolexpr871;
bool mu__boolexpr872;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr872 = FALSE ;
  else {
  mu__boolexpr872 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr872)) mu__boolexpr871 = FALSE ;
  else {
  mu__boolexpr871 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr871)) mu__boolexpr870 = FALSE ;
  else {
  mu__boolexpr870 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr870)) mu__boolexpr869 = FALSE ;
  else {
  mu__boolexpr869 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr869)) mu__boolexpr868 = FALSE ;
  else {
  mu__boolexpr868 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr868)) mu__boolexpr867 = FALSE ;
  else {
  mu__boolexpr867 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr867)) mu__boolexpr866 = FALSE ;
  else {
  mu__boolexpr866 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr866)) mu__boolexpr865 = FALSE ;
  else {
  mu__boolexpr865 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr865)) mu__boolexpr864 = FALSE ;
  else {
  mu__boolexpr864 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr864)) mu__boolexpr863 = FALSE ;
  else {
  mu__boolexpr863 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr863)) mu__boolexpr862 = FALSE ;
  else {
  mu__boolexpr862 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr873;
bool mu__boolexpr874;
bool mu__boolexpr875;
bool mu__boolexpr876;
bool mu__boolexpr877;
bool mu__boolexpr878;
bool mu__boolexpr879;
bool mu__boolexpr880;
bool mu__boolexpr881;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr881 = FALSE ;
  else {
  mu__boolexpr881 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr881)) mu__boolexpr880 = FALSE ;
  else {
  mu__boolexpr880 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr880)) mu__boolexpr879 = FALSE ;
  else {
  mu__boolexpr879 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr879)) mu__boolexpr878 = FALSE ;
  else {
  mu__boolexpr878 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr878)) mu__boolexpr877 = FALSE ;
  else {
  mu__boolexpr877 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr877)) mu__boolexpr876 = FALSE ;
  else {
  mu__boolexpr876 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr876)) mu__boolexpr875 = FALSE ;
  else {
  mu__boolexpr875 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr875)) mu__boolexpr874 = FALSE ;
  else {
  mu__boolexpr874 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr874)) mu__boolexpr873 = FALSE ;
  else {
  mu__boolexpr873 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr882;
bool mu__boolexpr883;
bool mu__boolexpr884;
bool mu__boolexpr885;
bool mu__boolexpr886;
bool mu__boolexpr887;
bool mu__boolexpr888;
bool mu__boolexpr889;
bool mu__boolexpr890;
bool mu__boolexpr891;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr891 = FALSE ;
  else {
  mu__boolexpr891 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr891)) mu__boolexpr890 = FALSE ;
  else {
  mu__boolexpr890 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr890)) mu__boolexpr889 = FALSE ;
  else {
  mu__boolexpr889 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr889)) mu__boolexpr888 = FALSE ;
  else {
  mu__boolexpr888 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr888)) mu__boolexpr887 = FALSE ;
  else {
  mu__boolexpr887 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr887)) mu__boolexpr886 = FALSE ;
  else {
  mu__boolexpr886 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr886)) mu__boolexpr885 = FALSE ;
  else {
  mu__boolexpr885 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr885)) mu__boolexpr884 = FALSE ;
  else {
  mu__boolexpr884 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr884)) mu__boolexpr883 = FALSE ;
  else {
  mu__boolexpr883 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr883)) mu__boolexpr882 = FALSE ;
  else {
  mu__boolexpr882 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
bool mu__boolexpr892;
bool mu__boolexpr893;
bool mu__boolexpr894;
bool mu__boolexpr895;
bool mu__boolexpr896;
bool mu__boolexpr897;
bool mu__boolexpr898;
bool mu__boolexpr899;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr899 = FALSE ;
  else {
  mu__boolexpr899 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr899)) mu__boolexpr898 = FALSE ;
  else {
  mu__boolexpr898 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr898)) mu__boolexpr897 = FALSE ;
  else {
  mu__boolexpr897 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr897)) mu__boolexpr896 = FALSE ;
  else {
  mu__boolexpr896 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr896)) mu__boolexpr895 = FALSE ;
  else {
  mu__boolexpr895 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr895)) mu__boolexpr894 = FALSE ;
  else {
  mu__boolexpr894 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr894)) mu__boolexpr893 = FALSE ;
  else {
  mu__boolexpr893 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr893)) mu__boolexpr892 = FALSE ;
  else {
  mu__boolexpr892 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr900;
bool mu__boolexpr901;
bool mu__boolexpr902;
bool mu__boolexpr903;
bool mu__boolexpr904;
bool mu__boolexpr905;
bool mu__boolexpr906;
bool mu__boolexpr907;
bool mu__boolexpr908;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr908 = FALSE ;
  else {
  mu__boolexpr908 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr908)) mu__boolexpr907 = FALSE ;
  else {
  mu__boolexpr907 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr907)) mu__boolexpr906 = FALSE ;
  else {
  mu__boolexpr906 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr906)) mu__boolexpr905 = FALSE ;
  else {
  mu__boolexpr905 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr905)) mu__boolexpr904 = FALSE ;
  else {
  mu__boolexpr904 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr904)) mu__boolexpr903 = FALSE ;
  else {
  mu__boolexpr903 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr903)) mu__boolexpr902 = FALSE ;
  else {
  mu__boolexpr902 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr902)) mu__boolexpr901 = FALSE ;
  else {
  mu__boolexpr901 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr901)) mu__boolexpr900 = FALSE ;
  else {
  mu__boolexpr900 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
bool mu__boolexpr909;
bool mu__boolexpr910;
bool mu__boolexpr911;
bool mu__boolexpr912;
bool mu__boolexpr913;
bool mu__boolexpr914;
bool mu__boolexpr915;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr915 = FALSE ;
  else {
  mu__boolexpr915 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr915)) mu__boolexpr914 = FALSE ;
  else {
  mu__boolexpr914 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr914)) mu__boolexpr913 = FALSE ;
  else {
  mu__boolexpr913 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr913)) mu__boolexpr912 = FALSE ;
  else {
  mu__boolexpr912 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr912)) mu__boolexpr911 = FALSE ;
  else {
  mu__boolexpr911 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr911)) mu__boolexpr910 = FALSE ;
  else {
  mu__boolexpr910 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr910)) mu__boolexpr909 = FALSE ;
  else {
  mu__boolexpr909 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr916;
bool mu__boolexpr917;
bool mu__boolexpr918;
bool mu__boolexpr919;
bool mu__boolexpr920;
bool mu__boolexpr921;
bool mu__boolexpr922;
bool mu__boolexpr923;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr923 = FALSE ;
  else {
  mu__boolexpr923 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr923)) mu__boolexpr922 = FALSE ;
  else {
  mu__boolexpr922 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr922)) mu__boolexpr921 = FALSE ;
  else {
  mu__boolexpr921 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr921)) mu__boolexpr920 = FALSE ;
  else {
  mu__boolexpr920 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr920)) mu__boolexpr919 = FALSE ;
  else {
  mu__boolexpr919 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr919)) mu__boolexpr918 = FALSE ;
  else {
  mu__boolexpr918 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr918)) mu__boolexpr917 = FALSE ;
  else {
  mu__boolexpr917 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr917)) mu__boolexpr916 = FALSE ;
  else {
  mu__boolexpr916 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr924;
bool mu__boolexpr925;
bool mu__boolexpr926;
bool mu__boolexpr927;
bool mu__boolexpr928;
bool mu__boolexpr929;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr929 = FALSE ;
  else {
  mu__boolexpr929 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr929)) mu__boolexpr928 = FALSE ;
  else {
  mu__boolexpr928 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr928)) mu__boolexpr927 = FALSE ;
  else {
  mu__boolexpr927 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr927)) mu__boolexpr926 = FALSE ;
  else {
  mu__boolexpr926 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr926)) mu__boolexpr925 = FALSE ;
  else {
  mu__boolexpr925 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr925)) mu__boolexpr924 = FALSE ;
  else {
  mu__boolexpr924 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr930;
bool mu__boolexpr931;
bool mu__boolexpr932;
bool mu__boolexpr933;
bool mu__boolexpr934;
bool mu__boolexpr935;
bool mu__boolexpr936;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr936 = FALSE ;
  else {
  mu__boolexpr936 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr936)) mu__boolexpr935 = FALSE ;
  else {
  mu__boolexpr935 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr935)) mu__boolexpr934 = FALSE ;
  else {
  mu__boolexpr934 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr934)) mu__boolexpr933 = FALSE ;
  else {
  mu__boolexpr933 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr933)) mu__boolexpr932 = FALSE ;
  else {
  mu__boolexpr932 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr932)) mu__boolexpr931 = FALSE ;
  else {
  mu__boolexpr931 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr931)) mu__boolexpr930 = FALSE ;
  else {
  mu__boolexpr930 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr937;
bool mu__boolexpr938;
bool mu__boolexpr939;
bool mu__boolexpr940;
bool mu__boolexpr941;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr941 = FALSE ;
  else {
  mu__boolexpr941 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr941)) mu__boolexpr940 = FALSE ;
  else {
  mu__boolexpr940 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr940)) mu__boolexpr939 = FALSE ;
  else {
  mu__boolexpr939 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr939)) mu__boolexpr938 = FALSE ;
  else {
  mu__boolexpr938 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr938)) mu__boolexpr937 = FALSE ;
  else {
  mu__boolexpr937 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr942;
bool mu__boolexpr943;
bool mu__boolexpr944;
bool mu__boolexpr945;
bool mu__boolexpr946;
bool mu__boolexpr947;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr947 = FALSE ;
  else {
  mu__boolexpr947 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr947)) mu__boolexpr946 = FALSE ;
  else {
  mu__boolexpr946 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr946)) mu__boolexpr945 = FALSE ;
  else {
  mu__boolexpr945 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr945)) mu__boolexpr944 = FALSE ;
  else {
  mu__boolexpr944 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr944)) mu__boolexpr943 = FALSE ;
  else {
  mu__boolexpr943 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr943)) mu__boolexpr942 = FALSE ;
  else {
  mu__boolexpr942 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr948;
bool mu__boolexpr949;
bool mu__boolexpr950;
bool mu__boolexpr951;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr951 = FALSE ;
  else {
  mu__boolexpr951 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr951)) mu__boolexpr950 = FALSE ;
  else {
  mu__boolexpr950 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr950)) mu__boolexpr949 = FALSE ;
  else {
  mu__boolexpr949 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr949)) mu__boolexpr948 = FALSE ;
  else {
  mu__boolexpr948 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr952;
bool mu__boolexpr953;
bool mu__boolexpr954;
bool mu__boolexpr955;
bool mu__boolexpr956;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr956 = FALSE ;
  else {
  mu__boolexpr956 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr956)) mu__boolexpr955 = FALSE ;
  else {
  mu__boolexpr955 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr955)) mu__boolexpr954 = FALSE ;
  else {
  mu__boolexpr954 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr954)) mu__boolexpr953 = FALSE ;
  else {
  mu__boolexpr953 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr953)) mu__boolexpr952 = FALSE ;
  else {
  mu__boolexpr952 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
bool mu__boolexpr957;
bool mu__boolexpr958;
bool mu__boolexpr959;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr959 = FALSE ;
  else {
  mu__boolexpr959 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr959)) mu__boolexpr958 = FALSE ;
  else {
  mu__boolexpr958 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr958)) mu__boolexpr957 = FALSE ;
  else {
  mu__boolexpr957 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr960;
bool mu__boolexpr961;
bool mu__boolexpr962;
bool mu__boolexpr963;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr963 = FALSE ;
  else {
  mu__boolexpr963 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr963)) mu__boolexpr962 = FALSE ;
  else {
  mu__boolexpr962 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr962)) mu__boolexpr961 = FALSE ;
  else {
  mu__boolexpr961 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr961)) mu__boolexpr960 = FALSE ;
  else {
  mu__boolexpr960 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr964;
bool mu__boolexpr965;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr965 = FALSE ;
  else {
  mu__boolexpr965 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr965)) mu__boolexpr964 = FALSE ;
  else {
  mu__boolexpr964 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr966;
bool mu__boolexpr967;
bool mu__boolexpr968;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr968 = FALSE ;
  else {
  mu__boolexpr968 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr968)) mu__boolexpr967 = FALSE ;
  else {
  mu__boolexpr967 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr967)) mu__boolexpr966 = FALSE ;
  else {
  mu__boolexpr966 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
bool mu__boolexpr969;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr969 = FALSE ;
  else {
  mu__boolexpr969 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr970;
bool mu__boolexpr971;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr971 = FALSE ;
  else {
  mu__boolexpr971 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr971)) mu__boolexpr970 = FALSE ;
  else {
  mu__boolexpr970 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
bool mu__boolexpr972;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr972 = FALSE ;
  else {
  mu__boolexpr972 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 34561 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr973;
bool mu__boolexpr974;
bool mu__boolexpr975;
bool mu__boolexpr976;
bool mu__boolexpr977;
bool mu__boolexpr978;
bool mu__boolexpr979;
bool mu__boolexpr980;
bool mu__boolexpr981;
bool mu__boolexpr982;
bool mu__boolexpr983;
bool mu__boolexpr984;
bool mu__boolexpr985;
bool mu__boolexpr986;
bool mu__boolexpr987;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr987 = FALSE ;
  else {
  mu__boolexpr987 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr987)) mu__boolexpr986 = FALSE ;
  else {
  mu__boolexpr986 = (mu_patientspecialty[mu_p][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr986)) mu__boolexpr985 = FALSE ;
  else {
  mu__boolexpr985 = (mu_patientstay[mu_p][mu_varstay]) ; 
}
  if (!(mu__boolexpr985)) mu__boolexpr984 = FALSE ;
  else {
  mu__boolexpr984 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr984)) mu__boolexpr983 = FALSE ;
  else {
  mu__boolexpr983 = (mu_patientorigin[mu_p][mu_varorigin]) ; 
}
  if (!(mu__boolexpr983)) mu__boolexpr982 = FALSE ;
  else {
  mu__boolexpr982 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr982)) mu__boolexpr981 = FALSE ;
  else {
  mu__boolexpr981 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr981)) mu__boolexpr980 = FALSE ;
  else {
  mu__boolexpr980 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr980)) mu__boolexpr979 = FALSE ;
  else {
  mu__boolexpr979 = (mu_bedspecialty[mu_varbed][mu_varspecialty]) ; 
}
  if (!(mu__boolexpr979)) mu__boolexpr978 = FALSE ;
  else {
  mu__boolexpr978 = (mu_bedstay[mu_varbed][mu_varstay]) ; 
}
  if (!(mu__boolexpr978)) mu__boolexpr977 = FALSE ;
  else {
  mu__boolexpr977 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr977)) mu__boolexpr976 = FALSE ;
  else {
  mu__boolexpr976 = (mu_bedorigin[mu_varbed][mu_varorigin]) ; 
}
  if (!(mu__boolexpr976)) mu__boolexpr975 = FALSE ;
  else {
  mu__boolexpr975 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
  if (!(mu__boolexpr975)) mu__boolexpr974 = FALSE ;
  else {
  mu__boolexpr974 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
  if (!(mu__boolexpr974)) mu__boolexpr973 = FALSE ;
  else {
  mu__boolexpr973 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
	      if (mu__boolexpr973) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 32);
    r = r / 3;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_origin mu_varorigin;
    mu_varorigin.value((r % 2) + 43);
    r = r / 2;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_stay mu_varstay;
    mu_varstay.value((r % 2) + 47);
    r = r / 2;
    static mu_1_specialty mu_varspecialty;
    mu_varspecialty.value((r % 1) + 35);
    r = r / 1;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocate %s %s %s %s %s %s %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varspecialty.Name(), mu_varstay.Name(), mu_varroomtype.Name(), mu_varorigin.Name(), mu_vargender.Name(), mu_varage.Name(), mu_varcare.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocateginecologia , varroomtype:%s, varbed:%s, p:%s", mu_varroomtype.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr988;
bool mu__boolexpr989;
bool mu__boolexpr990;
bool mu__boolexpr991;
bool mu__boolexpr992;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr992 = FALSE ;
  else {
  mu__boolexpr992 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr992)) mu__boolexpr991 = FALSE ;
  else {
  mu__boolexpr991 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr991)) mu__boolexpr990 = FALSE ;
  else {
  mu__boolexpr990 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr990)) mu__boolexpr989 = FALSE ;
  else {
  mu__boolexpr989 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr989)) mu__boolexpr988 = FALSE ;
  else {
  mu__boolexpr988 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
    return mu__boolexpr988;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr993;
bool mu__boolexpr994;
bool mu__boolexpr995;
bool mu__boolexpr996;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr996 = FALSE ;
  else {
  mu__boolexpr996 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr996)) mu__boolexpr995 = FALSE ;
  else {
  mu__boolexpr995 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr995)) mu__boolexpr994 = FALSE ;
  else {
  mu__boolexpr994 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr994)) mu__boolexpr993 = FALSE ;
  else {
  mu__boolexpr993 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr997;
bool mu__boolexpr998;
bool mu__boolexpr999;
bool mu__boolexpr1000;
bool mu__boolexpr1001;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1001 = FALSE ;
  else {
  mu__boolexpr1001 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1001)) mu__boolexpr1000 = FALSE ;
  else {
  mu__boolexpr1000 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1000)) mu__boolexpr999 = FALSE ;
  else {
  mu__boolexpr999 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr999)) mu__boolexpr998 = FALSE ;
  else {
  mu__boolexpr998 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr998)) mu__boolexpr997 = FALSE ;
  else {
  mu__boolexpr997 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr1002;
bool mu__boolexpr1003;
bool mu__boolexpr1004;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1004 = FALSE ;
  else {
  mu__boolexpr1004 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1004)) mu__boolexpr1003 = FALSE ;
  else {
  mu__boolexpr1003 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1003)) mu__boolexpr1002 = FALSE ;
  else {
  mu__boolexpr1002 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1005;
bool mu__boolexpr1006;
bool mu__boolexpr1007;
bool mu__boolexpr1008;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1008 = FALSE ;
  else {
  mu__boolexpr1008 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1008)) mu__boolexpr1007 = FALSE ;
  else {
  mu__boolexpr1007 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1007)) mu__boolexpr1006 = FALSE ;
  else {
  mu__boolexpr1006 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1006)) mu__boolexpr1005 = FALSE ;
  else {
  mu__boolexpr1005 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr1009;
bool mu__boolexpr1010;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1010 = FALSE ;
  else {
  mu__boolexpr1010 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1010)) mu__boolexpr1009 = FALSE ;
  else {
  mu__boolexpr1009 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1011;
bool mu__boolexpr1012;
bool mu__boolexpr1013;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1013 = FALSE ;
  else {
  mu__boolexpr1013 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1013)) mu__boolexpr1012 = FALSE ;
  else {
  mu__boolexpr1012 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1012)) mu__boolexpr1011 = FALSE ;
  else {
  mu__boolexpr1011 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1014;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1014 = FALSE ;
  else {
  mu__boolexpr1014 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1015;
bool mu__boolexpr1016;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1016 = FALSE ;
  else {
  mu__boolexpr1016 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1016)) mu__boolexpr1015 = FALSE ;
  else {
  mu__boolexpr1015 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1017;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1017 = FALSE ;
  else {
  mu__boolexpr1017 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedginecologia[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedginecologia[mu_varbed])); 
 		if (std::string(typeid(mu_bedroomtype[mu_varbed][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedroomtype[mu_varbed][mu_varroomtype])); 
 		if (std::string(typeid(mu_patientginecologia[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientginecologia[mu_p])); 
 		if (std::string(typeid(mu_patientroomtype[mu_p][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientroomtype[mu_p][mu_varroomtype])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1018;
bool mu__boolexpr1019;
bool mu__boolexpr1020;
bool mu__boolexpr1021;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1021 = FALSE ;
  else {
  mu__boolexpr1021 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1021)) mu__boolexpr1020 = FALSE ;
  else {
  mu__boolexpr1020 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1020)) mu__boolexpr1019 = FALSE ;
  else {
  mu__boolexpr1019 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1019)) mu__boolexpr1018 = FALSE ;
  else {
  mu__boolexpr1018 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr1022;
bool mu__boolexpr1023;
bool mu__boolexpr1024;
bool mu__boolexpr1025;
bool mu__boolexpr1026;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1026 = FALSE ;
  else {
  mu__boolexpr1026 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1026)) mu__boolexpr1025 = FALSE ;
  else {
  mu__boolexpr1025 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1025)) mu__boolexpr1024 = FALSE ;
  else {
  mu__boolexpr1024 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1024)) mu__boolexpr1023 = FALSE ;
  else {
  mu__boolexpr1023 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr1023)) mu__boolexpr1022 = FALSE ;
  else {
  mu__boolexpr1022 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr1027;
bool mu__boolexpr1028;
bool mu__boolexpr1029;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1029 = FALSE ;
  else {
  mu__boolexpr1029 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1029)) mu__boolexpr1028 = FALSE ;
  else {
  mu__boolexpr1028 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1028)) mu__boolexpr1027 = FALSE ;
  else {
  mu__boolexpr1027 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1030;
bool mu__boolexpr1031;
bool mu__boolexpr1032;
bool mu__boolexpr1033;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1033 = FALSE ;
  else {
  mu__boolexpr1033 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1033)) mu__boolexpr1032 = FALSE ;
  else {
  mu__boolexpr1032 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1032)) mu__boolexpr1031 = FALSE ;
  else {
  mu__boolexpr1031 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1031)) mu__boolexpr1030 = FALSE ;
  else {
  mu__boolexpr1030 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr1034;
bool mu__boolexpr1035;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1035 = FALSE ;
  else {
  mu__boolexpr1035 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1035)) mu__boolexpr1034 = FALSE ;
  else {
  mu__boolexpr1034 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1036;
bool mu__boolexpr1037;
bool mu__boolexpr1038;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1038 = FALSE ;
  else {
  mu__boolexpr1038 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1038)) mu__boolexpr1037 = FALSE ;
  else {
  mu__boolexpr1037 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1037)) mu__boolexpr1036 = FALSE ;
  else {
  mu__boolexpr1036 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1039;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1039 = FALSE ;
  else {
  mu__boolexpr1039 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1040;
bool mu__boolexpr1041;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1041 = FALSE ;
  else {
  mu__boolexpr1041 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1041)) mu__boolexpr1040 = FALSE ;
  else {
  mu__boolexpr1040 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1042;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1042 = FALSE ;
  else {
  mu__boolexpr1042 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedginecologia[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedginecologia[mu_varbed])); 
 		if (std::string(typeid(mu_bedroomtype[mu_varbed][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedroomtype[mu_varbed][mu_varroomtype])); 
 		if (std::string(typeid(mu_patientginecologia[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientginecologia[mu_p])); 
 		if (std::string(typeid(mu_patientroomtype[mu_p][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientroomtype[mu_p][mu_varroomtype])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1043;
bool mu__boolexpr1044;
bool mu__boolexpr1045;
bool mu__boolexpr1046;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1046 = FALSE ;
  else {
  mu__boolexpr1046 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1046)) mu__boolexpr1045 = FALSE ;
  else {
  mu__boolexpr1045 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1045)) mu__boolexpr1044 = FALSE ;
  else {
  mu__boolexpr1044 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1044)) mu__boolexpr1043 = FALSE ;
  else {
  mu__boolexpr1043 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr1047;
bool mu__boolexpr1048;
bool mu__boolexpr1049;
bool mu__boolexpr1050;
bool mu__boolexpr1051;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1051 = FALSE ;
  else {
  mu__boolexpr1051 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1051)) mu__boolexpr1050 = FALSE ;
  else {
  mu__boolexpr1050 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1050)) mu__boolexpr1049 = FALSE ;
  else {
  mu__boolexpr1049 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1049)) mu__boolexpr1048 = FALSE ;
  else {
  mu__boolexpr1048 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr1048)) mu__boolexpr1047 = FALSE ;
  else {
  mu__boolexpr1047 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr1052;
bool mu__boolexpr1053;
bool mu__boolexpr1054;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1054 = FALSE ;
  else {
  mu__boolexpr1054 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1054)) mu__boolexpr1053 = FALSE ;
  else {
  mu__boolexpr1053 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1053)) mu__boolexpr1052 = FALSE ;
  else {
  mu__boolexpr1052 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1055;
bool mu__boolexpr1056;
bool mu__boolexpr1057;
bool mu__boolexpr1058;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1058 = FALSE ;
  else {
  mu__boolexpr1058 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1058)) mu__boolexpr1057 = FALSE ;
  else {
  mu__boolexpr1057 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1057)) mu__boolexpr1056 = FALSE ;
  else {
  mu__boolexpr1056 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1056)) mu__boolexpr1055 = FALSE ;
  else {
  mu__boolexpr1055 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr1059;
bool mu__boolexpr1060;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1060 = FALSE ;
  else {
  mu__boolexpr1060 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1060)) mu__boolexpr1059 = FALSE ;
  else {
  mu__boolexpr1059 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1061;
bool mu__boolexpr1062;
bool mu__boolexpr1063;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1063 = FALSE ;
  else {
  mu__boolexpr1063 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1063)) mu__boolexpr1062 = FALSE ;
  else {
  mu__boolexpr1062 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1062)) mu__boolexpr1061 = FALSE ;
  else {
  mu__boolexpr1061 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1064;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1064 = FALSE ;
  else {
  mu__boolexpr1064 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1065;
bool mu__boolexpr1066;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1066 = FALSE ;
  else {
  mu__boolexpr1066 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1066)) mu__boolexpr1065 = FALSE ;
  else {
  mu__boolexpr1065 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1067;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1067 = FALSE ;
  else {
  mu__boolexpr1067 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedginecologia[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedginecologia[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedroomtype[mu_varbed][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedroomtype[mu_varbed][mu_varroomtype]), 1)); 
 		if (std::string(typeid(mu_patientginecologia[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientginecologia[mu_p]), 1)); 
 		if (std::string(typeid(mu_patientroomtype[mu_p][mu_varroomtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientroomtype[mu_p][mu_varroomtype]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1068;
bool mu__boolexpr1069;
bool mu__boolexpr1070;
bool mu__boolexpr1071;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1071 = FALSE ;
  else {
  mu__boolexpr1071 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1071)) mu__boolexpr1070 = FALSE ;
  else {
  mu__boolexpr1070 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1070)) mu__boolexpr1069 = FALSE ;
  else {
  mu__boolexpr1069 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1069)) mu__boolexpr1068 = FALSE ;
  else {
  mu__boolexpr1068 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr1072;
bool mu__boolexpr1073;
bool mu__boolexpr1074;
bool mu__boolexpr1075;
bool mu__boolexpr1076;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1076 = FALSE ;
  else {
  mu__boolexpr1076 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1076)) mu__boolexpr1075 = FALSE ;
  else {
  mu__boolexpr1075 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1075)) mu__boolexpr1074 = FALSE ;
  else {
  mu__boolexpr1074 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1074)) mu__boolexpr1073 = FALSE ;
  else {
  mu__boolexpr1073 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr1073)) mu__boolexpr1072 = FALSE ;
  else {
  mu__boolexpr1072 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
bool mu__boolexpr1077;
bool mu__boolexpr1078;
bool mu__boolexpr1079;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1079 = FALSE ;
  else {
  mu__boolexpr1079 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1079)) mu__boolexpr1078 = FALSE ;
  else {
  mu__boolexpr1078 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1078)) mu__boolexpr1077 = FALSE ;
  else {
  mu__boolexpr1077 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1080;
bool mu__boolexpr1081;
bool mu__boolexpr1082;
bool mu__boolexpr1083;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1083 = FALSE ;
  else {
  mu__boolexpr1083 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1083)) mu__boolexpr1082 = FALSE ;
  else {
  mu__boolexpr1082 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1082)) mu__boolexpr1081 = FALSE ;
  else {
  mu__boolexpr1081 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1081)) mu__boolexpr1080 = FALSE ;
  else {
  mu__boolexpr1080 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
bool mu__boolexpr1084;
bool mu__boolexpr1085;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1085 = FALSE ;
  else {
  mu__boolexpr1085 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1085)) mu__boolexpr1084 = FALSE ;
  else {
  mu__boolexpr1084 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1086;
bool mu__boolexpr1087;
bool mu__boolexpr1088;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1088 = FALSE ;
  else {
  mu__boolexpr1088 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1088)) mu__boolexpr1087 = FALSE ;
  else {
  mu__boolexpr1087 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1087)) mu__boolexpr1086 = FALSE ;
  else {
  mu__boolexpr1086 = (mu_bedginecologia[mu_varbed]) ; 
}
bool mu__boolexpr1089;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1089 = FALSE ;
  else {
  mu__boolexpr1089 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1090;
bool mu__boolexpr1091;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1091 = FALSE ;
  else {
  mu__boolexpr1091 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1091)) mu__boolexpr1090 = FALSE ;
  else {
  mu__boolexpr1090 = (mu_patientginecologia[mu_p]) ; 
}
bool mu__boolexpr1092;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1092 = FALSE ;
  else {
  mu__boolexpr1092 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 34561;
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 35041 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1093;
bool mu__boolexpr1094;
bool mu__boolexpr1095;
bool mu__boolexpr1096;
bool mu__boolexpr1097;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1097 = FALSE ;
  else {
  mu__boolexpr1097 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1097)) mu__boolexpr1096 = FALSE ;
  else {
  mu__boolexpr1096 = (mu_patientginecologia[mu_p]) ; 
}
  if (!(mu__boolexpr1096)) mu__boolexpr1095 = FALSE ;
  else {
  mu__boolexpr1095 = (mu_bedginecologia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1095)) mu__boolexpr1094 = FALSE ;
  else {
  mu__boolexpr1094 = (mu_patientroomtype[mu_p][mu_varroomtype]) ; 
}
  if (!(mu__boolexpr1094)) mu__boolexpr1093 = FALSE ;
  else {
  mu__boolexpr1093 = (mu_bedroomtype[mu_varbed][mu_varroomtype]) ; 
}
	      if (mu__boolexpr1093) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 34561;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_roomtype mu_varroomtype;
    mu_varroomtype.value((r % 2) + 45);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocateginecologia %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varroomtype.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocatecirurgiabariatrica , vargender:%s, varbed:%s, p:%s", mu_vargender.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr1098;
bool mu__boolexpr1099;
bool mu__boolexpr1100;
bool mu__boolexpr1101;
bool mu__boolexpr1102;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1102 = FALSE ;
  else {
  mu__boolexpr1102 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1102)) mu__boolexpr1101 = FALSE ;
  else {
  mu__boolexpr1101 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1101)) mu__boolexpr1100 = FALSE ;
  else {
  mu__boolexpr1100 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1100)) mu__boolexpr1099 = FALSE ;
  else {
  mu__boolexpr1099 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1099)) mu__boolexpr1098 = FALSE ;
  else {
  mu__boolexpr1098 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
    return mu__boolexpr1098;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1103;
bool mu__boolexpr1104;
bool mu__boolexpr1105;
bool mu__boolexpr1106;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1106 = FALSE ;
  else {
  mu__boolexpr1106 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1106)) mu__boolexpr1105 = FALSE ;
  else {
  mu__boolexpr1105 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1105)) mu__boolexpr1104 = FALSE ;
  else {
  mu__boolexpr1104 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1104)) mu__boolexpr1103 = FALSE ;
  else {
  mu__boolexpr1103 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1107;
bool mu__boolexpr1108;
bool mu__boolexpr1109;
bool mu__boolexpr1110;
bool mu__boolexpr1111;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1111 = FALSE ;
  else {
  mu__boolexpr1111 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1111)) mu__boolexpr1110 = FALSE ;
  else {
  mu__boolexpr1110 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1110)) mu__boolexpr1109 = FALSE ;
  else {
  mu__boolexpr1109 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1109)) mu__boolexpr1108 = FALSE ;
  else {
  mu__boolexpr1108 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1108)) mu__boolexpr1107 = FALSE ;
  else {
  mu__boolexpr1107 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1112;
bool mu__boolexpr1113;
bool mu__boolexpr1114;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1114 = FALSE ;
  else {
  mu__boolexpr1114 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1114)) mu__boolexpr1113 = FALSE ;
  else {
  mu__boolexpr1113 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1113)) mu__boolexpr1112 = FALSE ;
  else {
  mu__boolexpr1112 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1115;
bool mu__boolexpr1116;
bool mu__boolexpr1117;
bool mu__boolexpr1118;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1118 = FALSE ;
  else {
  mu__boolexpr1118 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1118)) mu__boolexpr1117 = FALSE ;
  else {
  mu__boolexpr1117 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1117)) mu__boolexpr1116 = FALSE ;
  else {
  mu__boolexpr1116 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1116)) mu__boolexpr1115 = FALSE ;
  else {
  mu__boolexpr1115 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1119;
bool mu__boolexpr1120;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1120 = FALSE ;
  else {
  mu__boolexpr1120 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1120)) mu__boolexpr1119 = FALSE ;
  else {
  mu__boolexpr1119 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1121;
bool mu__boolexpr1122;
bool mu__boolexpr1123;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1123 = FALSE ;
  else {
  mu__boolexpr1123 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1123)) mu__boolexpr1122 = FALSE ;
  else {
  mu__boolexpr1122 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1122)) mu__boolexpr1121 = FALSE ;
  else {
  mu__boolexpr1121 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1124;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1124 = FALSE ;
  else {
  mu__boolexpr1124 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1125;
bool mu__boolexpr1126;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1126 = FALSE ;
  else {
  mu__boolexpr1126 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1126)) mu__boolexpr1125 = FALSE ;
  else {
  mu__boolexpr1125 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1127;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1127 = FALSE ;
  else {
  mu__boolexpr1127 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedcirurgiabariatrica[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedcirurgiabariatrica[mu_varbed])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_patientcirurgiabariatrica[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientcirurgiabariatrica[mu_p])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1128;
bool mu__boolexpr1129;
bool mu__boolexpr1130;
bool mu__boolexpr1131;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1131 = FALSE ;
  else {
  mu__boolexpr1131 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1131)) mu__boolexpr1130 = FALSE ;
  else {
  mu__boolexpr1130 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1130)) mu__boolexpr1129 = FALSE ;
  else {
  mu__boolexpr1129 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1129)) mu__boolexpr1128 = FALSE ;
  else {
  mu__boolexpr1128 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1132;
bool mu__boolexpr1133;
bool mu__boolexpr1134;
bool mu__boolexpr1135;
bool mu__boolexpr1136;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1136 = FALSE ;
  else {
  mu__boolexpr1136 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1136)) mu__boolexpr1135 = FALSE ;
  else {
  mu__boolexpr1135 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1135)) mu__boolexpr1134 = FALSE ;
  else {
  mu__boolexpr1134 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1134)) mu__boolexpr1133 = FALSE ;
  else {
  mu__boolexpr1133 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1133)) mu__boolexpr1132 = FALSE ;
  else {
  mu__boolexpr1132 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1137;
bool mu__boolexpr1138;
bool mu__boolexpr1139;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1139 = FALSE ;
  else {
  mu__boolexpr1139 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1139)) mu__boolexpr1138 = FALSE ;
  else {
  mu__boolexpr1138 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1138)) mu__boolexpr1137 = FALSE ;
  else {
  mu__boolexpr1137 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1140;
bool mu__boolexpr1141;
bool mu__boolexpr1142;
bool mu__boolexpr1143;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1143 = FALSE ;
  else {
  mu__boolexpr1143 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1143)) mu__boolexpr1142 = FALSE ;
  else {
  mu__boolexpr1142 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1142)) mu__boolexpr1141 = FALSE ;
  else {
  mu__boolexpr1141 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1141)) mu__boolexpr1140 = FALSE ;
  else {
  mu__boolexpr1140 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1144;
bool mu__boolexpr1145;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1145 = FALSE ;
  else {
  mu__boolexpr1145 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1145)) mu__boolexpr1144 = FALSE ;
  else {
  mu__boolexpr1144 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1146;
bool mu__boolexpr1147;
bool mu__boolexpr1148;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1148 = FALSE ;
  else {
  mu__boolexpr1148 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1148)) mu__boolexpr1147 = FALSE ;
  else {
  mu__boolexpr1147 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1147)) mu__boolexpr1146 = FALSE ;
  else {
  mu__boolexpr1146 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1149;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1149 = FALSE ;
  else {
  mu__boolexpr1149 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1150;
bool mu__boolexpr1151;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1151 = FALSE ;
  else {
  mu__boolexpr1151 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1151)) mu__boolexpr1150 = FALSE ;
  else {
  mu__boolexpr1150 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1152;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1152 = FALSE ;
  else {
  mu__boolexpr1152 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedcirurgiabariatrica[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedcirurgiabariatrica[mu_varbed])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_patientcirurgiabariatrica[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientcirurgiabariatrica[mu_p])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1153;
bool mu__boolexpr1154;
bool mu__boolexpr1155;
bool mu__boolexpr1156;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1156 = FALSE ;
  else {
  mu__boolexpr1156 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1156)) mu__boolexpr1155 = FALSE ;
  else {
  mu__boolexpr1155 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1155)) mu__boolexpr1154 = FALSE ;
  else {
  mu__boolexpr1154 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1154)) mu__boolexpr1153 = FALSE ;
  else {
  mu__boolexpr1153 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1157;
bool mu__boolexpr1158;
bool mu__boolexpr1159;
bool mu__boolexpr1160;
bool mu__boolexpr1161;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1161 = FALSE ;
  else {
  mu__boolexpr1161 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1161)) mu__boolexpr1160 = FALSE ;
  else {
  mu__boolexpr1160 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1160)) mu__boolexpr1159 = FALSE ;
  else {
  mu__boolexpr1159 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1159)) mu__boolexpr1158 = FALSE ;
  else {
  mu__boolexpr1158 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1158)) mu__boolexpr1157 = FALSE ;
  else {
  mu__boolexpr1157 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1162;
bool mu__boolexpr1163;
bool mu__boolexpr1164;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1164 = FALSE ;
  else {
  mu__boolexpr1164 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1164)) mu__boolexpr1163 = FALSE ;
  else {
  mu__boolexpr1163 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1163)) mu__boolexpr1162 = FALSE ;
  else {
  mu__boolexpr1162 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1165;
bool mu__boolexpr1166;
bool mu__boolexpr1167;
bool mu__boolexpr1168;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1168 = FALSE ;
  else {
  mu__boolexpr1168 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1168)) mu__boolexpr1167 = FALSE ;
  else {
  mu__boolexpr1167 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1167)) mu__boolexpr1166 = FALSE ;
  else {
  mu__boolexpr1166 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1166)) mu__boolexpr1165 = FALSE ;
  else {
  mu__boolexpr1165 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1169;
bool mu__boolexpr1170;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1170 = FALSE ;
  else {
  mu__boolexpr1170 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1170)) mu__boolexpr1169 = FALSE ;
  else {
  mu__boolexpr1169 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1171;
bool mu__boolexpr1172;
bool mu__boolexpr1173;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1173 = FALSE ;
  else {
  mu__boolexpr1173 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1173)) mu__boolexpr1172 = FALSE ;
  else {
  mu__boolexpr1172 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1172)) mu__boolexpr1171 = FALSE ;
  else {
  mu__boolexpr1171 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1174;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1174 = FALSE ;
  else {
  mu__boolexpr1174 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1175;
bool mu__boolexpr1176;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1176 = FALSE ;
  else {
  mu__boolexpr1176 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1176)) mu__boolexpr1175 = FALSE ;
  else {
  mu__boolexpr1175 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1177;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1177 = FALSE ;
  else {
  mu__boolexpr1177 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedcirurgiabariatrica[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedcirurgiabariatrica[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedgender[mu_varbed][mu_vargender]), 1)); 
 		if (std::string(typeid(mu_patientcirurgiabariatrica[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientcirurgiabariatrica[mu_p]), 1)); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientgender[mu_p][mu_vargender]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1178;
bool mu__boolexpr1179;
bool mu__boolexpr1180;
bool mu__boolexpr1181;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1181 = FALSE ;
  else {
  mu__boolexpr1181 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1181)) mu__boolexpr1180 = FALSE ;
  else {
  mu__boolexpr1180 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1180)) mu__boolexpr1179 = FALSE ;
  else {
  mu__boolexpr1179 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1179)) mu__boolexpr1178 = FALSE ;
  else {
  mu__boolexpr1178 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1182;
bool mu__boolexpr1183;
bool mu__boolexpr1184;
bool mu__boolexpr1185;
bool mu__boolexpr1186;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1186 = FALSE ;
  else {
  mu__boolexpr1186 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1186)) mu__boolexpr1185 = FALSE ;
  else {
  mu__boolexpr1185 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1185)) mu__boolexpr1184 = FALSE ;
  else {
  mu__boolexpr1184 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1184)) mu__boolexpr1183 = FALSE ;
  else {
  mu__boolexpr1183 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1183)) mu__boolexpr1182 = FALSE ;
  else {
  mu__boolexpr1182 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1187;
bool mu__boolexpr1188;
bool mu__boolexpr1189;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1189 = FALSE ;
  else {
  mu__boolexpr1189 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1189)) mu__boolexpr1188 = FALSE ;
  else {
  mu__boolexpr1188 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1188)) mu__boolexpr1187 = FALSE ;
  else {
  mu__boolexpr1187 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1190;
bool mu__boolexpr1191;
bool mu__boolexpr1192;
bool mu__boolexpr1193;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1193 = FALSE ;
  else {
  mu__boolexpr1193 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1193)) mu__boolexpr1192 = FALSE ;
  else {
  mu__boolexpr1192 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1192)) mu__boolexpr1191 = FALSE ;
  else {
  mu__boolexpr1191 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1191)) mu__boolexpr1190 = FALSE ;
  else {
  mu__boolexpr1190 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1194;
bool mu__boolexpr1195;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1195 = FALSE ;
  else {
  mu__boolexpr1195 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1195)) mu__boolexpr1194 = FALSE ;
  else {
  mu__boolexpr1194 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1196;
bool mu__boolexpr1197;
bool mu__boolexpr1198;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1198 = FALSE ;
  else {
  mu__boolexpr1198 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1198)) mu__boolexpr1197 = FALSE ;
  else {
  mu__boolexpr1197 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1197)) mu__boolexpr1196 = FALSE ;
  else {
  mu__boolexpr1196 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
bool mu__boolexpr1199;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1199 = FALSE ;
  else {
  mu__boolexpr1199 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1200;
bool mu__boolexpr1201;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1201 = FALSE ;
  else {
  mu__boolexpr1201 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1201)) mu__boolexpr1200 = FALSE ;
  else {
  mu__boolexpr1200 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
bool mu__boolexpr1202;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1202 = FALSE ;
  else {
  mu__boolexpr1202 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 35041;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 35521 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1203;
bool mu__boolexpr1204;
bool mu__boolexpr1205;
bool mu__boolexpr1206;
bool mu__boolexpr1207;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1207 = FALSE ;
  else {
  mu__boolexpr1207 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1207)) mu__boolexpr1206 = FALSE ;
  else {
  mu__boolexpr1206 = (mu_patientcirurgiabariatrica[mu_p]) ; 
}
  if (!(mu__boolexpr1206)) mu__boolexpr1205 = FALSE ;
  else {
  mu__boolexpr1205 = (mu_bedcirurgiabariatrica[mu_varbed]) ; 
}
  if (!(mu__boolexpr1205)) mu__boolexpr1204 = FALSE ;
  else {
  mu__boolexpr1204 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1204)) mu__boolexpr1203 = FALSE ;
  else {
  mu__boolexpr1203 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
	      if (mu__boolexpr1203) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 35041;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocatecirurgiabariatrica %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_vargender.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocatepsiquiatria , vargender:%s, varbed:%s, p:%s", mu_vargender.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr1208;
bool mu__boolexpr1209;
bool mu__boolexpr1210;
bool mu__boolexpr1211;
bool mu__boolexpr1212;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1212 = FALSE ;
  else {
  mu__boolexpr1212 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1212)) mu__boolexpr1211 = FALSE ;
  else {
  mu__boolexpr1211 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1211)) mu__boolexpr1210 = FALSE ;
  else {
  mu__boolexpr1210 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1210)) mu__boolexpr1209 = FALSE ;
  else {
  mu__boolexpr1209 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1209)) mu__boolexpr1208 = FALSE ;
  else {
  mu__boolexpr1208 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
    return mu__boolexpr1208;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1213;
bool mu__boolexpr1214;
bool mu__boolexpr1215;
bool mu__boolexpr1216;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1216 = FALSE ;
  else {
  mu__boolexpr1216 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1216)) mu__boolexpr1215 = FALSE ;
  else {
  mu__boolexpr1215 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1215)) mu__boolexpr1214 = FALSE ;
  else {
  mu__boolexpr1214 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1214)) mu__boolexpr1213 = FALSE ;
  else {
  mu__boolexpr1213 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1217;
bool mu__boolexpr1218;
bool mu__boolexpr1219;
bool mu__boolexpr1220;
bool mu__boolexpr1221;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1221 = FALSE ;
  else {
  mu__boolexpr1221 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1221)) mu__boolexpr1220 = FALSE ;
  else {
  mu__boolexpr1220 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1220)) mu__boolexpr1219 = FALSE ;
  else {
  mu__boolexpr1219 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1219)) mu__boolexpr1218 = FALSE ;
  else {
  mu__boolexpr1218 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1218)) mu__boolexpr1217 = FALSE ;
  else {
  mu__boolexpr1217 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1222;
bool mu__boolexpr1223;
bool mu__boolexpr1224;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1224 = FALSE ;
  else {
  mu__boolexpr1224 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1224)) mu__boolexpr1223 = FALSE ;
  else {
  mu__boolexpr1223 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1223)) mu__boolexpr1222 = FALSE ;
  else {
  mu__boolexpr1222 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1225;
bool mu__boolexpr1226;
bool mu__boolexpr1227;
bool mu__boolexpr1228;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1228 = FALSE ;
  else {
  mu__boolexpr1228 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1228)) mu__boolexpr1227 = FALSE ;
  else {
  mu__boolexpr1227 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1227)) mu__boolexpr1226 = FALSE ;
  else {
  mu__boolexpr1226 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1226)) mu__boolexpr1225 = FALSE ;
  else {
  mu__boolexpr1225 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1229;
bool mu__boolexpr1230;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1230 = FALSE ;
  else {
  mu__boolexpr1230 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1230)) mu__boolexpr1229 = FALSE ;
  else {
  mu__boolexpr1229 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1231;
bool mu__boolexpr1232;
bool mu__boolexpr1233;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1233 = FALSE ;
  else {
  mu__boolexpr1233 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1233)) mu__boolexpr1232 = FALSE ;
  else {
  mu__boolexpr1232 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1232)) mu__boolexpr1231 = FALSE ;
  else {
  mu__boolexpr1231 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1234;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1234 = FALSE ;
  else {
  mu__boolexpr1234 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1235;
bool mu__boolexpr1236;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1236 = FALSE ;
  else {
  mu__boolexpr1236 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1236)) mu__boolexpr1235 = FALSE ;
  else {
  mu__boolexpr1235 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1237;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1237 = FALSE ;
  else {
  mu__boolexpr1237 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_bedpsiquiatria[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedpsiquiatria[mu_varbed])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 
 		if (std::string(typeid(mu_patientpsiquiatria[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientpsiquiatria[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1238;
bool mu__boolexpr1239;
bool mu__boolexpr1240;
bool mu__boolexpr1241;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1241 = FALSE ;
  else {
  mu__boolexpr1241 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1241)) mu__boolexpr1240 = FALSE ;
  else {
  mu__boolexpr1240 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1240)) mu__boolexpr1239 = FALSE ;
  else {
  mu__boolexpr1239 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1239)) mu__boolexpr1238 = FALSE ;
  else {
  mu__boolexpr1238 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1242;
bool mu__boolexpr1243;
bool mu__boolexpr1244;
bool mu__boolexpr1245;
bool mu__boolexpr1246;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1246 = FALSE ;
  else {
  mu__boolexpr1246 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1246)) mu__boolexpr1245 = FALSE ;
  else {
  mu__boolexpr1245 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1245)) mu__boolexpr1244 = FALSE ;
  else {
  mu__boolexpr1244 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1244)) mu__boolexpr1243 = FALSE ;
  else {
  mu__boolexpr1243 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1243)) mu__boolexpr1242 = FALSE ;
  else {
  mu__boolexpr1242 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1247;
bool mu__boolexpr1248;
bool mu__boolexpr1249;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1249 = FALSE ;
  else {
  mu__boolexpr1249 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1249)) mu__boolexpr1248 = FALSE ;
  else {
  mu__boolexpr1248 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1248)) mu__boolexpr1247 = FALSE ;
  else {
  mu__boolexpr1247 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1250;
bool mu__boolexpr1251;
bool mu__boolexpr1252;
bool mu__boolexpr1253;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1253 = FALSE ;
  else {
  mu__boolexpr1253 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1253)) mu__boolexpr1252 = FALSE ;
  else {
  mu__boolexpr1252 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1252)) mu__boolexpr1251 = FALSE ;
  else {
  mu__boolexpr1251 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1251)) mu__boolexpr1250 = FALSE ;
  else {
  mu__boolexpr1250 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1254;
bool mu__boolexpr1255;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1255 = FALSE ;
  else {
  mu__boolexpr1255 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1255)) mu__boolexpr1254 = FALSE ;
  else {
  mu__boolexpr1254 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1256;
bool mu__boolexpr1257;
bool mu__boolexpr1258;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1258 = FALSE ;
  else {
  mu__boolexpr1258 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1258)) mu__boolexpr1257 = FALSE ;
  else {
  mu__boolexpr1257 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1257)) mu__boolexpr1256 = FALSE ;
  else {
  mu__boolexpr1256 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1259;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1259 = FALSE ;
  else {
  mu__boolexpr1259 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1260;
bool mu__boolexpr1261;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1261 = FALSE ;
  else {
  mu__boolexpr1261 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1261)) mu__boolexpr1260 = FALSE ;
  else {
  mu__boolexpr1260 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1262;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1262 = FALSE ;
  else {
  mu__boolexpr1262 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_bedpsiquiatria[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedpsiquiatria[mu_varbed])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 
 		if (std::string(typeid(mu_patientpsiquiatria[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientpsiquiatria[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1263;
bool mu__boolexpr1264;
bool mu__boolexpr1265;
bool mu__boolexpr1266;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1266 = FALSE ;
  else {
  mu__boolexpr1266 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1266)) mu__boolexpr1265 = FALSE ;
  else {
  mu__boolexpr1265 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1265)) mu__boolexpr1264 = FALSE ;
  else {
  mu__boolexpr1264 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1264)) mu__boolexpr1263 = FALSE ;
  else {
  mu__boolexpr1263 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1267;
bool mu__boolexpr1268;
bool mu__boolexpr1269;
bool mu__boolexpr1270;
bool mu__boolexpr1271;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1271 = FALSE ;
  else {
  mu__boolexpr1271 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1271)) mu__boolexpr1270 = FALSE ;
  else {
  mu__boolexpr1270 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1270)) mu__boolexpr1269 = FALSE ;
  else {
  mu__boolexpr1269 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1269)) mu__boolexpr1268 = FALSE ;
  else {
  mu__boolexpr1268 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1268)) mu__boolexpr1267 = FALSE ;
  else {
  mu__boolexpr1267 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1272;
bool mu__boolexpr1273;
bool mu__boolexpr1274;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1274 = FALSE ;
  else {
  mu__boolexpr1274 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1274)) mu__boolexpr1273 = FALSE ;
  else {
  mu__boolexpr1273 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1273)) mu__boolexpr1272 = FALSE ;
  else {
  mu__boolexpr1272 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1275;
bool mu__boolexpr1276;
bool mu__boolexpr1277;
bool mu__boolexpr1278;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1278 = FALSE ;
  else {
  mu__boolexpr1278 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1278)) mu__boolexpr1277 = FALSE ;
  else {
  mu__boolexpr1277 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1277)) mu__boolexpr1276 = FALSE ;
  else {
  mu__boolexpr1276 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1276)) mu__boolexpr1275 = FALSE ;
  else {
  mu__boolexpr1275 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1279;
bool mu__boolexpr1280;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1280 = FALSE ;
  else {
  mu__boolexpr1280 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1280)) mu__boolexpr1279 = FALSE ;
  else {
  mu__boolexpr1279 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1281;
bool mu__boolexpr1282;
bool mu__boolexpr1283;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1283 = FALSE ;
  else {
  mu__boolexpr1283 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1283)) mu__boolexpr1282 = FALSE ;
  else {
  mu__boolexpr1282 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1282)) mu__boolexpr1281 = FALSE ;
  else {
  mu__boolexpr1281 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1284;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1284 = FALSE ;
  else {
  mu__boolexpr1284 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1285;
bool mu__boolexpr1286;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1286 = FALSE ;
  else {
  mu__boolexpr1286 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1286)) mu__boolexpr1285 = FALSE ;
  else {
  mu__boolexpr1285 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1287;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1287 = FALSE ;
  else {
  mu__boolexpr1287 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedgender[mu_varbed][mu_vargender]), 1)); 
 		if (std::string(typeid(mu_bedpsiquiatria[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedpsiquiatria[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientgender[mu_p][mu_vargender]), 1)); 
 		if (std::string(typeid(mu_patientpsiquiatria[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientpsiquiatria[mu_p]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1288;
bool mu__boolexpr1289;
bool mu__boolexpr1290;
bool mu__boolexpr1291;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1291 = FALSE ;
  else {
  mu__boolexpr1291 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1291)) mu__boolexpr1290 = FALSE ;
  else {
  mu__boolexpr1290 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1290)) mu__boolexpr1289 = FALSE ;
  else {
  mu__boolexpr1289 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1289)) mu__boolexpr1288 = FALSE ;
  else {
  mu__boolexpr1288 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1292;
bool mu__boolexpr1293;
bool mu__boolexpr1294;
bool mu__boolexpr1295;
bool mu__boolexpr1296;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1296 = FALSE ;
  else {
  mu__boolexpr1296 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1296)) mu__boolexpr1295 = FALSE ;
  else {
  mu__boolexpr1295 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1295)) mu__boolexpr1294 = FALSE ;
  else {
  mu__boolexpr1294 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1294)) mu__boolexpr1293 = FALSE ;
  else {
  mu__boolexpr1293 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1293)) mu__boolexpr1292 = FALSE ;
  else {
  mu__boolexpr1292 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1297;
bool mu__boolexpr1298;
bool mu__boolexpr1299;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1299 = FALSE ;
  else {
  mu__boolexpr1299 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1299)) mu__boolexpr1298 = FALSE ;
  else {
  mu__boolexpr1298 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1298)) mu__boolexpr1297 = FALSE ;
  else {
  mu__boolexpr1297 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1300;
bool mu__boolexpr1301;
bool mu__boolexpr1302;
bool mu__boolexpr1303;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1303 = FALSE ;
  else {
  mu__boolexpr1303 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1303)) mu__boolexpr1302 = FALSE ;
  else {
  mu__boolexpr1302 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1302)) mu__boolexpr1301 = FALSE ;
  else {
  mu__boolexpr1301 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1301)) mu__boolexpr1300 = FALSE ;
  else {
  mu__boolexpr1300 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1304;
bool mu__boolexpr1305;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1305 = FALSE ;
  else {
  mu__boolexpr1305 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1305)) mu__boolexpr1304 = FALSE ;
  else {
  mu__boolexpr1304 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1306;
bool mu__boolexpr1307;
bool mu__boolexpr1308;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1308 = FALSE ;
  else {
  mu__boolexpr1308 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1308)) mu__boolexpr1307 = FALSE ;
  else {
  mu__boolexpr1307 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1307)) mu__boolexpr1306 = FALSE ;
  else {
  mu__boolexpr1306 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr1309;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1309 = FALSE ;
  else {
  mu__boolexpr1309 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1310;
bool mu__boolexpr1311;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1311 = FALSE ;
  else {
  mu__boolexpr1311 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1311)) mu__boolexpr1310 = FALSE ;
  else {
  mu__boolexpr1310 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr1312;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1312 = FALSE ;
  else {
  mu__boolexpr1312 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 35521;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 36001 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1313;
bool mu__boolexpr1314;
bool mu__boolexpr1315;
bool mu__boolexpr1316;
bool mu__boolexpr1317;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1317 = FALSE ;
  else {
  mu__boolexpr1317 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1317)) mu__boolexpr1316 = FALSE ;
  else {
  mu__boolexpr1316 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr1316)) mu__boolexpr1315 = FALSE ;
  else {
  mu__boolexpr1315 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr1315)) mu__boolexpr1314 = FALSE ;
  else {
  mu__boolexpr1314 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1314)) mu__boolexpr1313 = FALSE ;
  else {
  mu__boolexpr1313 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
	      if (mu__boolexpr1313) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 35521;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocatepsiquiatria %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_vargender.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocateavc , vargender:%s, varbed:%s, p:%s", mu_vargender.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr1318;
bool mu__boolexpr1319;
bool mu__boolexpr1320;
bool mu__boolexpr1321;
bool mu__boolexpr1322;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1322 = FALSE ;
  else {
  mu__boolexpr1322 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1322)) mu__boolexpr1321 = FALSE ;
  else {
  mu__boolexpr1321 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1321)) mu__boolexpr1320 = FALSE ;
  else {
  mu__boolexpr1320 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1320)) mu__boolexpr1319 = FALSE ;
  else {
  mu__boolexpr1319 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1319)) mu__boolexpr1318 = FALSE ;
  else {
  mu__boolexpr1318 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
    return mu__boolexpr1318;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1323;
bool mu__boolexpr1324;
bool mu__boolexpr1325;
bool mu__boolexpr1326;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1326 = FALSE ;
  else {
  mu__boolexpr1326 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1326)) mu__boolexpr1325 = FALSE ;
  else {
  mu__boolexpr1325 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1325)) mu__boolexpr1324 = FALSE ;
  else {
  mu__boolexpr1324 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1324)) mu__boolexpr1323 = FALSE ;
  else {
  mu__boolexpr1323 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1327;
bool mu__boolexpr1328;
bool mu__boolexpr1329;
bool mu__boolexpr1330;
bool mu__boolexpr1331;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1331 = FALSE ;
  else {
  mu__boolexpr1331 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1331)) mu__boolexpr1330 = FALSE ;
  else {
  mu__boolexpr1330 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1330)) mu__boolexpr1329 = FALSE ;
  else {
  mu__boolexpr1329 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1329)) mu__boolexpr1328 = FALSE ;
  else {
  mu__boolexpr1328 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1328)) mu__boolexpr1327 = FALSE ;
  else {
  mu__boolexpr1327 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1332;
bool mu__boolexpr1333;
bool mu__boolexpr1334;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1334 = FALSE ;
  else {
  mu__boolexpr1334 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1334)) mu__boolexpr1333 = FALSE ;
  else {
  mu__boolexpr1333 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1333)) mu__boolexpr1332 = FALSE ;
  else {
  mu__boolexpr1332 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1335;
bool mu__boolexpr1336;
bool mu__boolexpr1337;
bool mu__boolexpr1338;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1338 = FALSE ;
  else {
  mu__boolexpr1338 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1338)) mu__boolexpr1337 = FALSE ;
  else {
  mu__boolexpr1337 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1337)) mu__boolexpr1336 = FALSE ;
  else {
  mu__boolexpr1336 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1336)) mu__boolexpr1335 = FALSE ;
  else {
  mu__boolexpr1335 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1339;
bool mu__boolexpr1340;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1340 = FALSE ;
  else {
  mu__boolexpr1340 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1340)) mu__boolexpr1339 = FALSE ;
  else {
  mu__boolexpr1339 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1341;
bool mu__boolexpr1342;
bool mu__boolexpr1343;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1343 = FALSE ;
  else {
  mu__boolexpr1343 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1343)) mu__boolexpr1342 = FALSE ;
  else {
  mu__boolexpr1342 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1342)) mu__boolexpr1341 = FALSE ;
  else {
  mu__boolexpr1341 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1344;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1344 = FALSE ;
  else {
  mu__boolexpr1344 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1345;
bool mu__boolexpr1346;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1346 = FALSE ;
  else {
  mu__boolexpr1346 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1346)) mu__boolexpr1345 = FALSE ;
  else {
  mu__boolexpr1345 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1347;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1347 = FALSE ;
  else {
  mu__boolexpr1347 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedavc[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedavc[mu_varbed])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_patientavc[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientavc[mu_p])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1348;
bool mu__boolexpr1349;
bool mu__boolexpr1350;
bool mu__boolexpr1351;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1351 = FALSE ;
  else {
  mu__boolexpr1351 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1351)) mu__boolexpr1350 = FALSE ;
  else {
  mu__boolexpr1350 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1350)) mu__boolexpr1349 = FALSE ;
  else {
  mu__boolexpr1349 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1349)) mu__boolexpr1348 = FALSE ;
  else {
  mu__boolexpr1348 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1352;
bool mu__boolexpr1353;
bool mu__boolexpr1354;
bool mu__boolexpr1355;
bool mu__boolexpr1356;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1356 = FALSE ;
  else {
  mu__boolexpr1356 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1356)) mu__boolexpr1355 = FALSE ;
  else {
  mu__boolexpr1355 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1355)) mu__boolexpr1354 = FALSE ;
  else {
  mu__boolexpr1354 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1354)) mu__boolexpr1353 = FALSE ;
  else {
  mu__boolexpr1353 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1353)) mu__boolexpr1352 = FALSE ;
  else {
  mu__boolexpr1352 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1357;
bool mu__boolexpr1358;
bool mu__boolexpr1359;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1359 = FALSE ;
  else {
  mu__boolexpr1359 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1359)) mu__boolexpr1358 = FALSE ;
  else {
  mu__boolexpr1358 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1358)) mu__boolexpr1357 = FALSE ;
  else {
  mu__boolexpr1357 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1360;
bool mu__boolexpr1361;
bool mu__boolexpr1362;
bool mu__boolexpr1363;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1363 = FALSE ;
  else {
  mu__boolexpr1363 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1363)) mu__boolexpr1362 = FALSE ;
  else {
  mu__boolexpr1362 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1362)) mu__boolexpr1361 = FALSE ;
  else {
  mu__boolexpr1361 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1361)) mu__boolexpr1360 = FALSE ;
  else {
  mu__boolexpr1360 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1364;
bool mu__boolexpr1365;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1365 = FALSE ;
  else {
  mu__boolexpr1365 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1365)) mu__boolexpr1364 = FALSE ;
  else {
  mu__boolexpr1364 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1366;
bool mu__boolexpr1367;
bool mu__boolexpr1368;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1368 = FALSE ;
  else {
  mu__boolexpr1368 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1368)) mu__boolexpr1367 = FALSE ;
  else {
  mu__boolexpr1367 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1367)) mu__boolexpr1366 = FALSE ;
  else {
  mu__boolexpr1366 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1369;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1369 = FALSE ;
  else {
  mu__boolexpr1369 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1370;
bool mu__boolexpr1371;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1371 = FALSE ;
  else {
  mu__boolexpr1371 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1371)) mu__boolexpr1370 = FALSE ;
  else {
  mu__boolexpr1370 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1372;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1372 = FALSE ;
  else {
  mu__boolexpr1372 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedavc[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedavc[mu_varbed])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedgender[mu_varbed][mu_vargender])); 
 		if (std::string(typeid(mu_patientavc[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientavc[mu_p])); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientgender[mu_p][mu_vargender])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1373;
bool mu__boolexpr1374;
bool mu__boolexpr1375;
bool mu__boolexpr1376;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1376 = FALSE ;
  else {
  mu__boolexpr1376 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1376)) mu__boolexpr1375 = FALSE ;
  else {
  mu__boolexpr1375 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1375)) mu__boolexpr1374 = FALSE ;
  else {
  mu__boolexpr1374 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1374)) mu__boolexpr1373 = FALSE ;
  else {
  mu__boolexpr1373 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1377;
bool mu__boolexpr1378;
bool mu__boolexpr1379;
bool mu__boolexpr1380;
bool mu__boolexpr1381;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1381 = FALSE ;
  else {
  mu__boolexpr1381 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1381)) mu__boolexpr1380 = FALSE ;
  else {
  mu__boolexpr1380 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1380)) mu__boolexpr1379 = FALSE ;
  else {
  mu__boolexpr1379 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1379)) mu__boolexpr1378 = FALSE ;
  else {
  mu__boolexpr1378 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1378)) mu__boolexpr1377 = FALSE ;
  else {
  mu__boolexpr1377 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1382;
bool mu__boolexpr1383;
bool mu__boolexpr1384;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1384 = FALSE ;
  else {
  mu__boolexpr1384 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1384)) mu__boolexpr1383 = FALSE ;
  else {
  mu__boolexpr1383 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1383)) mu__boolexpr1382 = FALSE ;
  else {
  mu__boolexpr1382 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1385;
bool mu__boolexpr1386;
bool mu__boolexpr1387;
bool mu__boolexpr1388;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1388 = FALSE ;
  else {
  mu__boolexpr1388 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1388)) mu__boolexpr1387 = FALSE ;
  else {
  mu__boolexpr1387 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1387)) mu__boolexpr1386 = FALSE ;
  else {
  mu__boolexpr1386 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1386)) mu__boolexpr1385 = FALSE ;
  else {
  mu__boolexpr1385 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1389;
bool mu__boolexpr1390;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1390 = FALSE ;
  else {
  mu__boolexpr1390 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1390)) mu__boolexpr1389 = FALSE ;
  else {
  mu__boolexpr1389 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1391;
bool mu__boolexpr1392;
bool mu__boolexpr1393;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1393 = FALSE ;
  else {
  mu__boolexpr1393 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1393)) mu__boolexpr1392 = FALSE ;
  else {
  mu__boolexpr1392 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1392)) mu__boolexpr1391 = FALSE ;
  else {
  mu__boolexpr1391 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1394;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1394 = FALSE ;
  else {
  mu__boolexpr1394 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1395;
bool mu__boolexpr1396;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1396 = FALSE ;
  else {
  mu__boolexpr1396 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1396)) mu__boolexpr1395 = FALSE ;
  else {
  mu__boolexpr1395 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1397;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1397 = FALSE ;
  else {
  mu__boolexpr1397 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedavc[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedavc[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedgender[mu_varbed][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedgender[mu_varbed][mu_vargender]), 1)); 
 		if (std::string(typeid(mu_patientavc[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientavc[mu_p]), 1)); 
 		if (std::string(typeid(mu_patientgender[mu_p][mu_vargender]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientgender[mu_p][mu_vargender]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1398;
bool mu__boolexpr1399;
bool mu__boolexpr1400;
bool mu__boolexpr1401;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1401 = FALSE ;
  else {
  mu__boolexpr1401 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1401)) mu__boolexpr1400 = FALSE ;
  else {
  mu__boolexpr1400 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1400)) mu__boolexpr1399 = FALSE ;
  else {
  mu__boolexpr1399 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1399)) mu__boolexpr1398 = FALSE ;
  else {
  mu__boolexpr1398 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1402;
bool mu__boolexpr1403;
bool mu__boolexpr1404;
bool mu__boolexpr1405;
bool mu__boolexpr1406;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1406 = FALSE ;
  else {
  mu__boolexpr1406 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1406)) mu__boolexpr1405 = FALSE ;
  else {
  mu__boolexpr1405 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1405)) mu__boolexpr1404 = FALSE ;
  else {
  mu__boolexpr1404 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1404)) mu__boolexpr1403 = FALSE ;
  else {
  mu__boolexpr1403 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1403)) mu__boolexpr1402 = FALSE ;
  else {
  mu__boolexpr1402 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr1407;
bool mu__boolexpr1408;
bool mu__boolexpr1409;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1409 = FALSE ;
  else {
  mu__boolexpr1409 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1409)) mu__boolexpr1408 = FALSE ;
  else {
  mu__boolexpr1408 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1408)) mu__boolexpr1407 = FALSE ;
  else {
  mu__boolexpr1407 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1410;
bool mu__boolexpr1411;
bool mu__boolexpr1412;
bool mu__boolexpr1413;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1413 = FALSE ;
  else {
  mu__boolexpr1413 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1413)) mu__boolexpr1412 = FALSE ;
  else {
  mu__boolexpr1412 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1412)) mu__boolexpr1411 = FALSE ;
  else {
  mu__boolexpr1411 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1411)) mu__boolexpr1410 = FALSE ;
  else {
  mu__boolexpr1410 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr1414;
bool mu__boolexpr1415;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1415 = FALSE ;
  else {
  mu__boolexpr1415 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1415)) mu__boolexpr1414 = FALSE ;
  else {
  mu__boolexpr1414 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1416;
bool mu__boolexpr1417;
bool mu__boolexpr1418;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1418 = FALSE ;
  else {
  mu__boolexpr1418 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1418)) mu__boolexpr1417 = FALSE ;
  else {
  mu__boolexpr1417 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1417)) mu__boolexpr1416 = FALSE ;
  else {
  mu__boolexpr1416 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr1419;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1419 = FALSE ;
  else {
  mu__boolexpr1419 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1420;
bool mu__boolexpr1421;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1421 = FALSE ;
  else {
  mu__boolexpr1421 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1421)) mu__boolexpr1420 = FALSE ;
  else {
  mu__boolexpr1420 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr1422;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1422 = FALSE ;
  else {
  mu__boolexpr1422 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 36001;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 36481 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1423;
bool mu__boolexpr1424;
bool mu__boolexpr1425;
bool mu__boolexpr1426;
bool mu__boolexpr1427;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1427 = FALSE ;
  else {
  mu__boolexpr1427 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1427)) mu__boolexpr1426 = FALSE ;
  else {
  mu__boolexpr1426 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr1426)) mu__boolexpr1425 = FALSE ;
  else {
  mu__boolexpr1425 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr1425)) mu__boolexpr1424 = FALSE ;
  else {
  mu__boolexpr1424 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr1424)) mu__boolexpr1423 = FALSE ;
  else {
  mu__boolexpr1423 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
	      if (mu__boolexpr1423) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 36001;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 41);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocateavc %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_vargender.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocateucl , varage:%s, varbed:%s, p:%s", mu_varage.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr1428;
bool mu__boolexpr1429;
bool mu__boolexpr1430;
bool mu__boolexpr1431;
bool mu__boolexpr1432;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1432 = FALSE ;
  else {
  mu__boolexpr1432 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1432)) mu__boolexpr1431 = FALSE ;
  else {
  mu__boolexpr1431 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1431)) mu__boolexpr1430 = FALSE ;
  else {
  mu__boolexpr1430 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1430)) mu__boolexpr1429 = FALSE ;
  else {
  mu__boolexpr1429 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr1429)) mu__boolexpr1428 = FALSE ;
  else {
  mu__boolexpr1428 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
    return mu__boolexpr1428;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1433;
bool mu__boolexpr1434;
bool mu__boolexpr1435;
bool mu__boolexpr1436;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1436 = FALSE ;
  else {
  mu__boolexpr1436 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1436)) mu__boolexpr1435 = FALSE ;
  else {
  mu__boolexpr1435 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1435)) mu__boolexpr1434 = FALSE ;
  else {
  mu__boolexpr1434 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1434)) mu__boolexpr1433 = FALSE ;
  else {
  mu__boolexpr1433 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1437;
bool mu__boolexpr1438;
bool mu__boolexpr1439;
bool mu__boolexpr1440;
bool mu__boolexpr1441;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1441 = FALSE ;
  else {
  mu__boolexpr1441 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1441)) mu__boolexpr1440 = FALSE ;
  else {
  mu__boolexpr1440 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1440)) mu__boolexpr1439 = FALSE ;
  else {
  mu__boolexpr1439 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1439)) mu__boolexpr1438 = FALSE ;
  else {
  mu__boolexpr1438 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr1438)) mu__boolexpr1437 = FALSE ;
  else {
  mu__boolexpr1437 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr1442;
bool mu__boolexpr1443;
bool mu__boolexpr1444;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1444 = FALSE ;
  else {
  mu__boolexpr1444 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1444)) mu__boolexpr1443 = FALSE ;
  else {
  mu__boolexpr1443 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1443)) mu__boolexpr1442 = FALSE ;
  else {
  mu__boolexpr1442 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1445;
bool mu__boolexpr1446;
bool mu__boolexpr1447;
bool mu__boolexpr1448;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1448 = FALSE ;
  else {
  mu__boolexpr1448 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1448)) mu__boolexpr1447 = FALSE ;
  else {
  mu__boolexpr1447 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1447)) mu__boolexpr1446 = FALSE ;
  else {
  mu__boolexpr1446 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1446)) mu__boolexpr1445 = FALSE ;
  else {
  mu__boolexpr1445 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1449;
bool mu__boolexpr1450;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1450 = FALSE ;
  else {
  mu__boolexpr1450 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1450)) mu__boolexpr1449 = FALSE ;
  else {
  mu__boolexpr1449 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1451;
bool mu__boolexpr1452;
bool mu__boolexpr1453;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1453 = FALSE ;
  else {
  mu__boolexpr1453 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1453)) mu__boolexpr1452 = FALSE ;
  else {
  mu__boolexpr1452 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1452)) mu__boolexpr1451 = FALSE ;
  else {
  mu__boolexpr1451 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1454;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1454 = FALSE ;
  else {
  mu__boolexpr1454 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1455;
bool mu__boolexpr1456;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1456 = FALSE ;
  else {
  mu__boolexpr1456 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1456)) mu__boolexpr1455 = FALSE ;
  else {
  mu__boolexpr1455 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1457;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1457 = FALSE ;
  else {
  mu__boolexpr1457 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedage[mu_varbed][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedage[mu_varbed][mu_varage])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_beducl[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_beducl[mu_varbed])); 
 		if (std::string(typeid(mu_patientage[mu_p][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientage[mu_p][mu_varage])); 
 		if (std::string(typeid(mu_patientucl[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientucl[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1458;
bool mu__boolexpr1459;
bool mu__boolexpr1460;
bool mu__boolexpr1461;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1461 = FALSE ;
  else {
  mu__boolexpr1461 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1461)) mu__boolexpr1460 = FALSE ;
  else {
  mu__boolexpr1460 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1460)) mu__boolexpr1459 = FALSE ;
  else {
  mu__boolexpr1459 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1459)) mu__boolexpr1458 = FALSE ;
  else {
  mu__boolexpr1458 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1462;
bool mu__boolexpr1463;
bool mu__boolexpr1464;
bool mu__boolexpr1465;
bool mu__boolexpr1466;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1466 = FALSE ;
  else {
  mu__boolexpr1466 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1466)) mu__boolexpr1465 = FALSE ;
  else {
  mu__boolexpr1465 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1465)) mu__boolexpr1464 = FALSE ;
  else {
  mu__boolexpr1464 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1464)) mu__boolexpr1463 = FALSE ;
  else {
  mu__boolexpr1463 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr1463)) mu__boolexpr1462 = FALSE ;
  else {
  mu__boolexpr1462 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr1467;
bool mu__boolexpr1468;
bool mu__boolexpr1469;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1469 = FALSE ;
  else {
  mu__boolexpr1469 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1469)) mu__boolexpr1468 = FALSE ;
  else {
  mu__boolexpr1468 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1468)) mu__boolexpr1467 = FALSE ;
  else {
  mu__boolexpr1467 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1470;
bool mu__boolexpr1471;
bool mu__boolexpr1472;
bool mu__boolexpr1473;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1473 = FALSE ;
  else {
  mu__boolexpr1473 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1473)) mu__boolexpr1472 = FALSE ;
  else {
  mu__boolexpr1472 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1472)) mu__boolexpr1471 = FALSE ;
  else {
  mu__boolexpr1471 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1471)) mu__boolexpr1470 = FALSE ;
  else {
  mu__boolexpr1470 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1474;
bool mu__boolexpr1475;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1475 = FALSE ;
  else {
  mu__boolexpr1475 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1475)) mu__boolexpr1474 = FALSE ;
  else {
  mu__boolexpr1474 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1476;
bool mu__boolexpr1477;
bool mu__boolexpr1478;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1478 = FALSE ;
  else {
  mu__boolexpr1478 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1478)) mu__boolexpr1477 = FALSE ;
  else {
  mu__boolexpr1477 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1477)) mu__boolexpr1476 = FALSE ;
  else {
  mu__boolexpr1476 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1479;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1479 = FALSE ;
  else {
  mu__boolexpr1479 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1480;
bool mu__boolexpr1481;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1481 = FALSE ;
  else {
  mu__boolexpr1481 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1481)) mu__boolexpr1480 = FALSE ;
  else {
  mu__boolexpr1480 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1482;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1482 = FALSE ;
  else {
  mu__boolexpr1482 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedage[mu_varbed][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedage[mu_varbed][mu_varage])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_beducl[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_beducl[mu_varbed])); 
 		if (std::string(typeid(mu_patientage[mu_p][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientage[mu_p][mu_varage])); 
 		if (std::string(typeid(mu_patientucl[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientucl[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1483;
bool mu__boolexpr1484;
bool mu__boolexpr1485;
bool mu__boolexpr1486;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1486 = FALSE ;
  else {
  mu__boolexpr1486 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1486)) mu__boolexpr1485 = FALSE ;
  else {
  mu__boolexpr1485 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1485)) mu__boolexpr1484 = FALSE ;
  else {
  mu__boolexpr1484 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1484)) mu__boolexpr1483 = FALSE ;
  else {
  mu__boolexpr1483 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1487;
bool mu__boolexpr1488;
bool mu__boolexpr1489;
bool mu__boolexpr1490;
bool mu__boolexpr1491;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1491 = FALSE ;
  else {
  mu__boolexpr1491 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1491)) mu__boolexpr1490 = FALSE ;
  else {
  mu__boolexpr1490 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1490)) mu__boolexpr1489 = FALSE ;
  else {
  mu__boolexpr1489 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1489)) mu__boolexpr1488 = FALSE ;
  else {
  mu__boolexpr1488 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr1488)) mu__boolexpr1487 = FALSE ;
  else {
  mu__boolexpr1487 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr1492;
bool mu__boolexpr1493;
bool mu__boolexpr1494;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1494 = FALSE ;
  else {
  mu__boolexpr1494 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1494)) mu__boolexpr1493 = FALSE ;
  else {
  mu__boolexpr1493 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1493)) mu__boolexpr1492 = FALSE ;
  else {
  mu__boolexpr1492 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1495;
bool mu__boolexpr1496;
bool mu__boolexpr1497;
bool mu__boolexpr1498;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1498 = FALSE ;
  else {
  mu__boolexpr1498 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1498)) mu__boolexpr1497 = FALSE ;
  else {
  mu__boolexpr1497 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1497)) mu__boolexpr1496 = FALSE ;
  else {
  mu__boolexpr1496 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1496)) mu__boolexpr1495 = FALSE ;
  else {
  mu__boolexpr1495 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1499;
bool mu__boolexpr1500;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1500 = FALSE ;
  else {
  mu__boolexpr1500 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1500)) mu__boolexpr1499 = FALSE ;
  else {
  mu__boolexpr1499 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1501;
bool mu__boolexpr1502;
bool mu__boolexpr1503;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1503 = FALSE ;
  else {
  mu__boolexpr1503 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1503)) mu__boolexpr1502 = FALSE ;
  else {
  mu__boolexpr1502 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1502)) mu__boolexpr1501 = FALSE ;
  else {
  mu__boolexpr1501 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1504;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1504 = FALSE ;
  else {
  mu__boolexpr1504 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1505;
bool mu__boolexpr1506;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1506 = FALSE ;
  else {
  mu__boolexpr1506 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1506)) mu__boolexpr1505 = FALSE ;
  else {
  mu__boolexpr1505 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1507;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1507 = FALSE ;
  else {
  mu__boolexpr1507 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedage[mu_varbed][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedage[mu_varbed][mu_varage]), 1)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_beducl[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_beducl[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_patientage[mu_p][mu_varage]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientage[mu_p][mu_varage]), 1)); 
 		if (std::string(typeid(mu_patientucl[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientucl[mu_p]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1508;
bool mu__boolexpr1509;
bool mu__boolexpr1510;
bool mu__boolexpr1511;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1511 = FALSE ;
  else {
  mu__boolexpr1511 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1511)) mu__boolexpr1510 = FALSE ;
  else {
  mu__boolexpr1510 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1510)) mu__boolexpr1509 = FALSE ;
  else {
  mu__boolexpr1509 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1509)) mu__boolexpr1508 = FALSE ;
  else {
  mu__boolexpr1508 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1512;
bool mu__boolexpr1513;
bool mu__boolexpr1514;
bool mu__boolexpr1515;
bool mu__boolexpr1516;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1516 = FALSE ;
  else {
  mu__boolexpr1516 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1516)) mu__boolexpr1515 = FALSE ;
  else {
  mu__boolexpr1515 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1515)) mu__boolexpr1514 = FALSE ;
  else {
  mu__boolexpr1514 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1514)) mu__boolexpr1513 = FALSE ;
  else {
  mu__boolexpr1513 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr1513)) mu__boolexpr1512 = FALSE ;
  else {
  mu__boolexpr1512 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr1517;
bool mu__boolexpr1518;
bool mu__boolexpr1519;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1519 = FALSE ;
  else {
  mu__boolexpr1519 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1519)) mu__boolexpr1518 = FALSE ;
  else {
  mu__boolexpr1518 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1518)) mu__boolexpr1517 = FALSE ;
  else {
  mu__boolexpr1517 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1520;
bool mu__boolexpr1521;
bool mu__boolexpr1522;
bool mu__boolexpr1523;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1523 = FALSE ;
  else {
  mu__boolexpr1523 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1523)) mu__boolexpr1522 = FALSE ;
  else {
  mu__boolexpr1522 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1522)) mu__boolexpr1521 = FALSE ;
  else {
  mu__boolexpr1521 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1521)) mu__boolexpr1520 = FALSE ;
  else {
  mu__boolexpr1520 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr1524;
bool mu__boolexpr1525;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1525 = FALSE ;
  else {
  mu__boolexpr1525 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1525)) mu__boolexpr1524 = FALSE ;
  else {
  mu__boolexpr1524 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1526;
bool mu__boolexpr1527;
bool mu__boolexpr1528;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1528 = FALSE ;
  else {
  mu__boolexpr1528 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1528)) mu__boolexpr1527 = FALSE ;
  else {
  mu__boolexpr1527 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1527)) mu__boolexpr1526 = FALSE ;
  else {
  mu__boolexpr1526 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr1529;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1529 = FALSE ;
  else {
  mu__boolexpr1529 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1530;
bool mu__boolexpr1531;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1531 = FALSE ;
  else {
  mu__boolexpr1531 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1531)) mu__boolexpr1530 = FALSE ;
  else {
  mu__boolexpr1530 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr1532;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1532 = FALSE ;
  else {
  mu__boolexpr1532 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 36481;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 37201 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1533;
bool mu__boolexpr1534;
bool mu__boolexpr1535;
bool mu__boolexpr1536;
bool mu__boolexpr1537;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1537 = FALSE ;
  else {
  mu__boolexpr1537 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1537)) mu__boolexpr1536 = FALSE ;
  else {
  mu__boolexpr1536 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr1536)) mu__boolexpr1535 = FALSE ;
  else {
  mu__boolexpr1535 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr1535)) mu__boolexpr1534 = FALSE ;
  else {
  mu__boolexpr1534 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr1534)) mu__boolexpr1533 = FALSE ;
  else {
  mu__boolexpr1533 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
	      if (mu__boolexpr1533) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 36481;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 38);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocateucl %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varage.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocateobstetricia , varbirthtype:%s, varbed:%s, p:%s", mu_varbirthtype.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr1538;
bool mu__boolexpr1539;
bool mu__boolexpr1540;
bool mu__boolexpr1541;
bool mu__boolexpr1542;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1542 = FALSE ;
  else {
  mu__boolexpr1542 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1542)) mu__boolexpr1541 = FALSE ;
  else {
  mu__boolexpr1541 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1541)) mu__boolexpr1540 = FALSE ;
  else {
  mu__boolexpr1540 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1540)) mu__boolexpr1539 = FALSE ;
  else {
  mu__boolexpr1539 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr1539)) mu__boolexpr1538 = FALSE ;
  else {
  mu__boolexpr1538 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
    return mu__boolexpr1538;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1543;
bool mu__boolexpr1544;
bool mu__boolexpr1545;
bool mu__boolexpr1546;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1546 = FALSE ;
  else {
  mu__boolexpr1546 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1546)) mu__boolexpr1545 = FALSE ;
  else {
  mu__boolexpr1545 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1545)) mu__boolexpr1544 = FALSE ;
  else {
  mu__boolexpr1544 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1544)) mu__boolexpr1543 = FALSE ;
  else {
  mu__boolexpr1543 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1547;
bool mu__boolexpr1548;
bool mu__boolexpr1549;
bool mu__boolexpr1550;
bool mu__boolexpr1551;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1551 = FALSE ;
  else {
  mu__boolexpr1551 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1551)) mu__boolexpr1550 = FALSE ;
  else {
  mu__boolexpr1550 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1550)) mu__boolexpr1549 = FALSE ;
  else {
  mu__boolexpr1549 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1549)) mu__boolexpr1548 = FALSE ;
  else {
  mu__boolexpr1548 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr1548)) mu__boolexpr1547 = FALSE ;
  else {
  mu__boolexpr1547 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr1552;
bool mu__boolexpr1553;
bool mu__boolexpr1554;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1554 = FALSE ;
  else {
  mu__boolexpr1554 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1554)) mu__boolexpr1553 = FALSE ;
  else {
  mu__boolexpr1553 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1553)) mu__boolexpr1552 = FALSE ;
  else {
  mu__boolexpr1552 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1555;
bool mu__boolexpr1556;
bool mu__boolexpr1557;
bool mu__boolexpr1558;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1558 = FALSE ;
  else {
  mu__boolexpr1558 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1558)) mu__boolexpr1557 = FALSE ;
  else {
  mu__boolexpr1557 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1557)) mu__boolexpr1556 = FALSE ;
  else {
  mu__boolexpr1556 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1556)) mu__boolexpr1555 = FALSE ;
  else {
  mu__boolexpr1555 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1559;
bool mu__boolexpr1560;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1560 = FALSE ;
  else {
  mu__boolexpr1560 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1560)) mu__boolexpr1559 = FALSE ;
  else {
  mu__boolexpr1559 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1561;
bool mu__boolexpr1562;
bool mu__boolexpr1563;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1563 = FALSE ;
  else {
  mu__boolexpr1563 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1563)) mu__boolexpr1562 = FALSE ;
  else {
  mu__boolexpr1562 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1562)) mu__boolexpr1561 = FALSE ;
  else {
  mu__boolexpr1561 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1564;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1564 = FALSE ;
  else {
  mu__boolexpr1564 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1565;
bool mu__boolexpr1566;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1566 = FALSE ;
  else {
  mu__boolexpr1566 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1566)) mu__boolexpr1565 = FALSE ;
  else {
  mu__boolexpr1565 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1567;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1567 = FALSE ;
  else {
  mu__boolexpr1567 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedbirthtype[mu_varbed][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedbirthtype[mu_varbed][mu_varbirthtype])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedobstetricia[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedobstetricia[mu_varbed])); 
 		if (std::string(typeid(mu_patientbirthtype[mu_p][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientbirthtype[mu_p][mu_varbirthtype])); 
 		if (std::string(typeid(mu_patientobstetricia[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientobstetricia[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1568;
bool mu__boolexpr1569;
bool mu__boolexpr1570;
bool mu__boolexpr1571;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1571 = FALSE ;
  else {
  mu__boolexpr1571 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1571)) mu__boolexpr1570 = FALSE ;
  else {
  mu__boolexpr1570 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1570)) mu__boolexpr1569 = FALSE ;
  else {
  mu__boolexpr1569 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1569)) mu__boolexpr1568 = FALSE ;
  else {
  mu__boolexpr1568 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1572;
bool mu__boolexpr1573;
bool mu__boolexpr1574;
bool mu__boolexpr1575;
bool mu__boolexpr1576;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1576 = FALSE ;
  else {
  mu__boolexpr1576 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1576)) mu__boolexpr1575 = FALSE ;
  else {
  mu__boolexpr1575 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1575)) mu__boolexpr1574 = FALSE ;
  else {
  mu__boolexpr1574 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1574)) mu__boolexpr1573 = FALSE ;
  else {
  mu__boolexpr1573 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr1573)) mu__boolexpr1572 = FALSE ;
  else {
  mu__boolexpr1572 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr1577;
bool mu__boolexpr1578;
bool mu__boolexpr1579;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1579 = FALSE ;
  else {
  mu__boolexpr1579 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1579)) mu__boolexpr1578 = FALSE ;
  else {
  mu__boolexpr1578 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1578)) mu__boolexpr1577 = FALSE ;
  else {
  mu__boolexpr1577 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1580;
bool mu__boolexpr1581;
bool mu__boolexpr1582;
bool mu__boolexpr1583;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1583 = FALSE ;
  else {
  mu__boolexpr1583 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1583)) mu__boolexpr1582 = FALSE ;
  else {
  mu__boolexpr1582 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1582)) mu__boolexpr1581 = FALSE ;
  else {
  mu__boolexpr1581 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1581)) mu__boolexpr1580 = FALSE ;
  else {
  mu__boolexpr1580 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1584;
bool mu__boolexpr1585;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1585 = FALSE ;
  else {
  mu__boolexpr1585 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1585)) mu__boolexpr1584 = FALSE ;
  else {
  mu__boolexpr1584 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1586;
bool mu__boolexpr1587;
bool mu__boolexpr1588;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1588 = FALSE ;
  else {
  mu__boolexpr1588 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1588)) mu__boolexpr1587 = FALSE ;
  else {
  mu__boolexpr1587 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1587)) mu__boolexpr1586 = FALSE ;
  else {
  mu__boolexpr1586 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1589;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1589 = FALSE ;
  else {
  mu__boolexpr1589 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1590;
bool mu__boolexpr1591;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1591 = FALSE ;
  else {
  mu__boolexpr1591 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1591)) mu__boolexpr1590 = FALSE ;
  else {
  mu__boolexpr1590 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1592;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1592 = FALSE ;
  else {
  mu__boolexpr1592 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedbirthtype[mu_varbed][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedbirthtype[mu_varbed][mu_varbirthtype])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedobstetricia[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedobstetricia[mu_varbed])); 
 		if (std::string(typeid(mu_patientbirthtype[mu_p][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientbirthtype[mu_p][mu_varbirthtype])); 
 		if (std::string(typeid(mu_patientobstetricia[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientobstetricia[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1593;
bool mu__boolexpr1594;
bool mu__boolexpr1595;
bool mu__boolexpr1596;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1596 = FALSE ;
  else {
  mu__boolexpr1596 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1596)) mu__boolexpr1595 = FALSE ;
  else {
  mu__boolexpr1595 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1595)) mu__boolexpr1594 = FALSE ;
  else {
  mu__boolexpr1594 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1594)) mu__boolexpr1593 = FALSE ;
  else {
  mu__boolexpr1593 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1597;
bool mu__boolexpr1598;
bool mu__boolexpr1599;
bool mu__boolexpr1600;
bool mu__boolexpr1601;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1601 = FALSE ;
  else {
  mu__boolexpr1601 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1601)) mu__boolexpr1600 = FALSE ;
  else {
  mu__boolexpr1600 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1600)) mu__boolexpr1599 = FALSE ;
  else {
  mu__boolexpr1599 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1599)) mu__boolexpr1598 = FALSE ;
  else {
  mu__boolexpr1598 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr1598)) mu__boolexpr1597 = FALSE ;
  else {
  mu__boolexpr1597 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr1602;
bool mu__boolexpr1603;
bool mu__boolexpr1604;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1604 = FALSE ;
  else {
  mu__boolexpr1604 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1604)) mu__boolexpr1603 = FALSE ;
  else {
  mu__boolexpr1603 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1603)) mu__boolexpr1602 = FALSE ;
  else {
  mu__boolexpr1602 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1605;
bool mu__boolexpr1606;
bool mu__boolexpr1607;
bool mu__boolexpr1608;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1608 = FALSE ;
  else {
  mu__boolexpr1608 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1608)) mu__boolexpr1607 = FALSE ;
  else {
  mu__boolexpr1607 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1607)) mu__boolexpr1606 = FALSE ;
  else {
  mu__boolexpr1606 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1606)) mu__boolexpr1605 = FALSE ;
  else {
  mu__boolexpr1605 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1609;
bool mu__boolexpr1610;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1610 = FALSE ;
  else {
  mu__boolexpr1610 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1610)) mu__boolexpr1609 = FALSE ;
  else {
  mu__boolexpr1609 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1611;
bool mu__boolexpr1612;
bool mu__boolexpr1613;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1613 = FALSE ;
  else {
  mu__boolexpr1613 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1613)) mu__boolexpr1612 = FALSE ;
  else {
  mu__boolexpr1612 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1612)) mu__boolexpr1611 = FALSE ;
  else {
  mu__boolexpr1611 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1614;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1614 = FALSE ;
  else {
  mu__boolexpr1614 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1615;
bool mu__boolexpr1616;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1616 = FALSE ;
  else {
  mu__boolexpr1616 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1616)) mu__boolexpr1615 = FALSE ;
  else {
  mu__boolexpr1615 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1617;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1617 = FALSE ;
  else {
  mu__boolexpr1617 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedbirthtype[mu_varbed][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedbirthtype[mu_varbed][mu_varbirthtype]), 1)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedobstetricia[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedobstetricia[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_patientbirthtype[mu_p][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientbirthtype[mu_p][mu_varbirthtype]), 1)); 
 		if (std::string(typeid(mu_patientobstetricia[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientobstetricia[mu_p]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1618;
bool mu__boolexpr1619;
bool mu__boolexpr1620;
bool mu__boolexpr1621;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1621 = FALSE ;
  else {
  mu__boolexpr1621 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1621)) mu__boolexpr1620 = FALSE ;
  else {
  mu__boolexpr1620 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1620)) mu__boolexpr1619 = FALSE ;
  else {
  mu__boolexpr1619 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1619)) mu__boolexpr1618 = FALSE ;
  else {
  mu__boolexpr1618 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1622;
bool mu__boolexpr1623;
bool mu__boolexpr1624;
bool mu__boolexpr1625;
bool mu__boolexpr1626;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1626 = FALSE ;
  else {
  mu__boolexpr1626 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1626)) mu__boolexpr1625 = FALSE ;
  else {
  mu__boolexpr1625 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1625)) mu__boolexpr1624 = FALSE ;
  else {
  mu__boolexpr1624 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1624)) mu__boolexpr1623 = FALSE ;
  else {
  mu__boolexpr1623 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr1623)) mu__boolexpr1622 = FALSE ;
  else {
  mu__boolexpr1622 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr1627;
bool mu__boolexpr1628;
bool mu__boolexpr1629;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1629 = FALSE ;
  else {
  mu__boolexpr1629 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1629)) mu__boolexpr1628 = FALSE ;
  else {
  mu__boolexpr1628 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1628)) mu__boolexpr1627 = FALSE ;
  else {
  mu__boolexpr1627 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1630;
bool mu__boolexpr1631;
bool mu__boolexpr1632;
bool mu__boolexpr1633;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1633 = FALSE ;
  else {
  mu__boolexpr1633 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1633)) mu__boolexpr1632 = FALSE ;
  else {
  mu__boolexpr1632 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1632)) mu__boolexpr1631 = FALSE ;
  else {
  mu__boolexpr1631 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1631)) mu__boolexpr1630 = FALSE ;
  else {
  mu__boolexpr1630 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr1634;
bool mu__boolexpr1635;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1635 = FALSE ;
  else {
  mu__boolexpr1635 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1635)) mu__boolexpr1634 = FALSE ;
  else {
  mu__boolexpr1634 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1636;
bool mu__boolexpr1637;
bool mu__boolexpr1638;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1638 = FALSE ;
  else {
  mu__boolexpr1638 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1638)) mu__boolexpr1637 = FALSE ;
  else {
  mu__boolexpr1637 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1637)) mu__boolexpr1636 = FALSE ;
  else {
  mu__boolexpr1636 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr1639;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1639 = FALSE ;
  else {
  mu__boolexpr1639 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1640;
bool mu__boolexpr1641;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1641 = FALSE ;
  else {
  mu__boolexpr1641 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1641)) mu__boolexpr1640 = FALSE ;
  else {
  mu__boolexpr1640 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr1642;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1642 = FALSE ;
  else {
  mu__boolexpr1642 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 37201;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 37681 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1643;
bool mu__boolexpr1644;
bool mu__boolexpr1645;
bool mu__boolexpr1646;
bool mu__boolexpr1647;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1647 = FALSE ;
  else {
  mu__boolexpr1647 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1647)) mu__boolexpr1646 = FALSE ;
  else {
  mu__boolexpr1646 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr1646)) mu__boolexpr1645 = FALSE ;
  else {
  mu__boolexpr1645 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr1645)) mu__boolexpr1644 = FALSE ;
  else {
  mu__boolexpr1644 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr1644)) mu__boolexpr1643 = FALSE ;
  else {
  mu__boolexpr1643 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
	      if (mu__boolexpr1643) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 37201;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 36);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocateobstetricia %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varbirthtype.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocateisolation , varbed:%s, p:%s", mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr1648;
bool mu__boolexpr1649;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1649 = FALSE ;
  else {
  mu__boolexpr1649 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1649)) mu__boolexpr1648 = FALSE ;
  else {
  mu__boolexpr1648 = (mu_patientisolation[mu_p]) ; 
}
    return mu__boolexpr1648;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1650;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1650 = FALSE ;
  else {
  mu__boolexpr1650 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1651;
bool mu__boolexpr1652;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1652 = FALSE ;
  else {
  mu__boolexpr1652 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1652)) mu__boolexpr1651 = FALSE ;
  else {
  mu__boolexpr1651 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr1653;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1653 = FALSE ;
  else {
  mu__boolexpr1653 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_patientisolation[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientisolation[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1654;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1654 = FALSE ;
  else {
  mu__boolexpr1654 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1655;
bool mu__boolexpr1656;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1656 = FALSE ;
  else {
  mu__boolexpr1656 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1656)) mu__boolexpr1655 = FALSE ;
  else {
  mu__boolexpr1655 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr1657;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1657 = FALSE ;
  else {
  mu__boolexpr1657 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_patientisolation[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientisolation[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1658;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1658 = FALSE ;
  else {
  mu__boolexpr1658 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1659;
bool mu__boolexpr1660;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1660 = FALSE ;
  else {
  mu__boolexpr1660 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1660)) mu__boolexpr1659 = FALSE ;
  else {
  mu__boolexpr1659 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr1661;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1661 = FALSE ;
  else {
  mu__boolexpr1661 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_patientisolation[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientisolation[mu_p]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1662;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1662 = FALSE ;
  else {
  mu__boolexpr1662 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr1663;
bool mu__boolexpr1664;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1664 = FALSE ;
  else {
  mu__boolexpr1664 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1664)) mu__boolexpr1663 = FALSE ;
  else {
  mu__boolexpr1663 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr1665;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1665 = FALSE ;
  else {
  mu__boolexpr1665 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_bedisolation[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedisolation[mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 0)); //  mu_false 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_bedisolation[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 37681;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 37921 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1666;
bool mu__boolexpr1667;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1667 = FALSE ;
  else {
  mu__boolexpr1667 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr1667)) mu__boolexpr1666 = FALSE ;
  else {
  mu__boolexpr1666 = (mu_patientisolation[mu_p]) ; 
}
	      if (mu__boolexpr1666) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 37681;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 15) + 17);
    r = r / 15;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocateisolation %s %s)", mu_p.Name(), mu_varbed.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf(" allocateuti , p:%s", mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr1668;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1668 = FALSE ;
  else {
  mu__boolexpr1668 = (mu_patientuti[mu_p]) ; 
}
    return mu__boolexpr1668;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1669;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1669 = FALSE ;
  else {
  mu__boolexpr1669 = (mu_patientuti[mu_p]) ; 
}

 		if (std::string(typeid(mu_patientuti[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientuti[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1670;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1670 = FALSE ;
  else {
  mu__boolexpr1670 = (mu_patientuti[mu_p]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
 		if (std::string(typeid(mu_patientuti[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientuti[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1671;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1671 = FALSE ;
  else {
  mu__boolexpr1671 = (mu_patientuti[mu_p]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_patientuti[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientuti[mu_p]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

bool mu__boolexpr1672;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1672 = FALSE ;
  else {
  mu__boolexpr1672 = (mu_patientuti[mu_p]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    aeffs.push_back(&(mu_donotallocate[mu_p])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

    inter_effs.insert(std::make_pair(&(mu_donotallocate[mu_p]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    aeffs.push_back(&(mu_donotallocate[mu_p])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 37921;
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 37937 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr1673;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr1673 = FALSE ;
  else {
  mu__boolexpr1673 = (mu_patientuti[mu_p]) ; 
}
	      if (mu__boolexpr1673) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 37921;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
mu_donotallocate[mu_p] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_donotallocate[mu_p] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_donotallocate[mu_p] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

mu_donotallocate[mu_p] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("( allocateuti %s)", mu_p.Name());
  }
   RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
  {
    return RuleManager::Action;
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
public:
void SetNextEnabledRule(RULE_INDEX_TYPE & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<34561)
    { R1.NextRule(what_rule);
      if (what_rule<34561) return; }
  if (what_rule>=34561 && what_rule<35041)
    { R2.NextRule(what_rule);
      if (what_rule<35041) return; }
  if (what_rule>=35041 && what_rule<35521)
    { R3.NextRule(what_rule);
      if (what_rule<35521) return; }
  if (what_rule>=35521 && what_rule<36001)
    { R4.NextRule(what_rule);
      if (what_rule<36001) return; }
  if (what_rule>=36001 && what_rule<36481)
    { R5.NextRule(what_rule);
      if (what_rule<36481) return; }
  if (what_rule>=36481 && what_rule<37201)
    { R6.NextRule(what_rule);
      if (what_rule<37201) return; }
  if (what_rule>=37201 && what_rule<37681)
    { R7.NextRule(what_rule);
      if (what_rule<37681) return; }
  if (what_rule>=37681 && what_rule<37921)
    { R8.NextRule(what_rule);
      if (what_rule<37921) return; }
  if (what_rule>=37921 && what_rule<37937)
    { R9.NextRule(what_rule);
      if (what_rule<37937) return; }
}
bool Condition(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=34560) return R1.Condition(r-1);
  if (r>=34561 && r<=35040) return R2.Condition(r-34561);
  if (r>=35041 && r<=35520) return R3.Condition(r-35041);
  if (r>=35521 && r<=36000) return R4.Condition(r-35521);
  if (r>=36001 && r<=36480) return R5.Condition(r-36001);
  if (r>=36481 && r<=37200) return R6.Condition(r-36481);
  if (r>=37201 && r<=37680) return R7.Condition(r-37201);
  if (r>=37681 && r<=37920) return R8.Condition(r-37681);
  if (r>=37921 && r<=37936) return R9.Condition(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.bool_precond_array(r-0);
  if (r>=1 && r<=34560) return R1.bool_precond_array(r-1);
  if (r>=34561 && r<=35040) return R2.bool_precond_array(r-34561);
  if (r>=35041 && r<=35520) return R3.bool_precond_array(r-35041);
  if (r>=35521 && r<=36000) return R4.bool_precond_array(r-35521);
  if (r>=36001 && r<=36480) return R5.bool_precond_array(r-36001);
  if (r>=36481 && r<=37200) return R6.bool_precond_array(r-36481);
  if (r>=37201 && r<=37680) return R7.bool_precond_array(r-37201);
  if (r>=37681 && r<=37920) return R8.bool_precond_array(r-37681);
  if (r>=37921 && r<=37936) return R9.bool_precond_array(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::map<mu__real*, std::pair<double,int> > num_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.num_precond_array(r-0);
  if (r>=1 && r<=34560) return R1.num_precond_array(r-1);
  if (r>=34561 && r<=35040) return R2.num_precond_array(r-34561);
  if (r>=35041 && r<=35520) return R3.num_precond_array(r-35041);
  if (r>=35521 && r<=36000) return R4.num_precond_array(r-35521);
  if (r>=36001 && r<=36480) return R5.num_precond_array(r-36001);
  if (r>=36481 && r<=37200) return R6.num_precond_array(r-36481);
  if (r>=37201 && r<=37680) return R7.num_precond_array(r-37201);
  if (r>=37681 && r<=37920) return R8.num_precond_array(r-37681);
  if (r>=37921 && r<=37936) return R9.num_precond_array(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.all_precond_array(r-0);
  if (r>=1 && r<=34560) return R1.all_precond_array(r-1);
  if (r>=34561 && r<=35040) return R2.all_precond_array(r-34561);
  if (r>=35041 && r<=35520) return R3.all_precond_array(r-35041);
  if (r>=35521 && r<=36000) return R4.all_precond_array(r-35521);
  if (r>=36001 && r<=36480) return R5.all_precond_array(r-36001);
  if (r>=36481 && r<=37200) return R6.all_precond_array(r-36481);
  if (r>=37201 && r<=37680) return R7.all_precond_array(r-37201);
  if (r>=37681 && r<=37920) return R8.all_precond_array(r-37681);
  if (r>=37921 && r<=37936) return R9.all_precond_array(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.precond_bool_interference(r-0);
  if (r>=1 && r<=34560) return R1.precond_bool_interference(r-1);
  if (r>=34561 && r<=35040) return R2.precond_bool_interference(r-34561);
  if (r>=35041 && r<=35520) return R3.precond_bool_interference(r-35041);
  if (r>=35521 && r<=36000) return R4.precond_bool_interference(r-35521);
  if (r>=36001 && r<=36480) return R5.precond_bool_interference(r-36001);
  if (r>=36481 && r<=37200) return R6.precond_bool_interference(r-36481);
  if (r>=37201 && r<=37680) return R7.precond_bool_interference(r-37201);
  if (r>=37681 && r<=37920) return R8.precond_bool_interference(r-37681);
  if (r>=37921 && r<=37936) return R9.precond_bool_interference(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.temporal_constraints(r-0);
  if (r>=1 && r<=34560) return R1.temporal_constraints(r-1);
  if (r>=34561 && r<=35040) return R2.temporal_constraints(r-34561);
  if (r>=35041 && r<=35520) return R3.temporal_constraints(r-35041);
  if (r>=35521 && r<=36000) return R4.temporal_constraints(r-35521);
  if (r>=36001 && r<=36480) return R5.temporal_constraints(r-36001);
  if (r>=36481 && r<=37200) return R6.temporal_constraints(r-36481);
  if (r>=37201 && r<=37680) return R7.temporal_constraints(r-37201);
  if (r>=37681 && r<=37920) return R8.temporal_constraints(r-37681);
  if (r>=37921 && r<=37936) return R9.temporal_constraints(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_bool_interference(r-0);
  if (r>=1 && r<=34560) return R1.effects_bool_interference(r-1);
  if (r>=34561 && r<=35040) return R2.effects_bool_interference(r-34561);
  if (r>=35041 && r<=35520) return R3.effects_bool_interference(r-35041);
  if (r>=35521 && r<=36000) return R4.effects_bool_interference(r-35521);
  if (r>=36001 && r<=36480) return R5.effects_bool_interference(r-36001);
  if (r>=36481 && r<=37200) return R6.effects_bool_interference(r-36481);
  if (r>=37201 && r<=37680) return R7.effects_bool_interference(r-37201);
  if (r>=37681 && r<=37920) return R8.effects_bool_interference(r-37681);
  if (r>=37921 && r<=37936) return R9.effects_bool_interference(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_add_bool_array(r-0);
  if (r>=1 && r<=34560) return R1.effects_add_bool_array(r-1);
  if (r>=34561 && r<=35040) return R2.effects_add_bool_array(r-34561);
  if (r>=35041 && r<=35520) return R3.effects_add_bool_array(r-35041);
  if (r>=35521 && r<=36000) return R4.effects_add_bool_array(r-35521);
  if (r>=36001 && r<=36480) return R5.effects_add_bool_array(r-36001);
  if (r>=36481 && r<=37200) return R6.effects_add_bool_array(r-36481);
  if (r>=37201 && r<=37680) return R7.effects_add_bool_array(r-37201);
  if (r>=37681 && r<=37920) return R8.effects_add_bool_array(r-37681);
  if (r>=37921 && r<=37936) return R9.effects_add_bool_array(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_num_array(r-0);
  if (r>=1 && r<=34560) return R1.effects_num_array(r-1);
  if (r>=34561 && r<=35040) return R2.effects_num_array(r-34561);
  if (r>=35041 && r<=35520) return R3.effects_num_array(r-35041);
  if (r>=35521 && r<=36000) return R4.effects_num_array(r-35521);
  if (r>=36001 && r<=36480) return R5.effects_num_array(r-36001);
  if (r>=36481 && r<=37200) return R6.effects_num_array(r-36481);
  if (r>=37201 && r<=37680) return R7.effects_num_array(r-37201);
  if (r>=37681 && r<=37920) return R8.effects_num_array(r-37681);
  if (r>=37921 && r<=37936) return R9.effects_num_array(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_all_array(r-0);
  if (r>=1 && r<=34560) return R1.effects_all_array(r-1);
  if (r>=34561 && r<=35040) return R2.effects_all_array(r-34561);
  if (r>=35041 && r<=35520) return R3.effects_all_array(r-35041);
  if (r>=35521 && r<=36000) return R4.effects_all_array(r-35521);
  if (r>=36001 && r<=36480) return R5.effects_all_array(r-36001);
  if (r>=36481 && r<=37200) return R6.effects_all_array(r-36481);
  if (r>=37201 && r<=37680) return R7.effects_all_array(r-37201);
  if (r>=37681 && r<=37920) return R8.effects_all_array(r-37681);
  if (r>=37921 && r<=37936) return R9.effects_all_array(r-37921);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
void Code(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=34560) { R1.Code(r-1); return; } 
  if (r>=34561 && r<=35040) { R2.Code(r-34561); return; } 
  if (r>=35041 && r<=35520) { R3.Code(r-35041); return; } 
  if (r>=35521 && r<=36000) { R4.Code(r-35521); return; } 
  if (r>=36001 && r<=36480) { R5.Code(r-36001); return; } 
  if (r>=36481 && r<=37200) { R6.Code(r-36481); return; } 
  if (r>=37201 && r<=37680) { R7.Code(r-37201); return; } 
  if (r>=37681 && r<=37920) { R8.Code(r-37681); return; } 
  if (r>=37921 && r<=37936) { R9.Code(r-37921); return; } 
}
void Code_ff(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_ff(r-0); return; } 
  if (r>=1 && r<=34560) { R1.Code_ff(r-1); return; } 
  if (r>=34561 && r<=35040) { R2.Code_ff(r-34561); return; } 
  if (r>=35041 && r<=35520) { R3.Code_ff(r-35041); return; } 
  if (r>=35521 && r<=36000) { R4.Code_ff(r-35521); return; } 
  if (r>=36001 && r<=36480) { R5.Code_ff(r-36001); return; } 
  if (r>=36481 && r<=37200) { R6.Code_ff(r-36481); return; } 
  if (r>=37201 && r<=37680) { R7.Code_ff(r-37201); return; } 
  if (r>=37681 && r<=37920) { R8.Code_ff(r-37681); return; } 
  if (r>=37921 && r<=37936) { R9.Code_ff(r-37921); return; } 
}
void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_plus(r-0); return; } 
  if (r>=1 && r<=34560) { R1.Code_numeric_ff_plus(r-1); return; } 
  if (r>=34561 && r<=35040) { R2.Code_numeric_ff_plus(r-34561); return; } 
  if (r>=35041 && r<=35520) { R3.Code_numeric_ff_plus(r-35041); return; } 
  if (r>=35521 && r<=36000) { R4.Code_numeric_ff_plus(r-35521); return; } 
  if (r>=36001 && r<=36480) { R5.Code_numeric_ff_plus(r-36001); return; } 
  if (r>=36481 && r<=37200) { R6.Code_numeric_ff_plus(r-36481); return; } 
  if (r>=37201 && r<=37680) { R7.Code_numeric_ff_plus(r-37201); return; } 
  if (r>=37681 && r<=37920) { R8.Code_numeric_ff_plus(r-37681); return; } 
  if (r>=37921 && r<=37936) { R9.Code_numeric_ff_plus(r-37921); return; } 
}
void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_minus(r-0); return; } 
  if (r>=1 && r<=34560) { R1.Code_numeric_ff_minus(r-1); return; } 
  if (r>=34561 && r<=35040) { R2.Code_numeric_ff_minus(r-34561); return; } 
  if (r>=35041 && r<=35520) { R3.Code_numeric_ff_minus(r-35041); return; } 
  if (r>=35521 && r<=36000) { R4.Code_numeric_ff_minus(r-35521); return; } 
  if (r>=36001 && r<=36480) { R5.Code_numeric_ff_minus(r-36001); return; } 
  if (r>=36481 && r<=37200) { R6.Code_numeric_ff_minus(r-36481); return; } 
  if (r>=37201 && r<=37680) { R7.Code_numeric_ff_minus(r-37201); return; } 
  if (r>=37681 && r<=37920) { R8.Code_numeric_ff_minus(r-37681); return; } 
  if (r>=37921 && r<=37936) { R9.Code_numeric_ff_minus(r-37921); return; } 
}
mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_rule_clock_started(r-0); } 
  if (r>=1 && r<=34560) { return R1.get_rule_clock_started(r-1); } 
  if (r>=34561 && r<=35040) { return R2.get_rule_clock_started(r-34561); } 
  if (r>=35041 && r<=35520) { return R3.get_rule_clock_started(r-35041); } 
  if (r>=35521 && r<=36000) { return R4.get_rule_clock_started(r-35521); } 
  if (r>=36001 && r<=36480) { return R5.get_rule_clock_started(r-36001); } 
  if (r>=36481 && r<=37200) { return R6.get_rule_clock_started(r-36481); } 
  if (r>=37201 && r<=37680) { return R7.get_rule_clock_started(r-37201); } 
  if (r>=37681 && r<=37920) { return R8.get_rule_clock_started(r-37681); } 
  if (r>=37921 && r<=37936) { return R9.get_rule_clock_started(r-37921); } 
}
std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_clocks(r-0); } 
  if (r>=1 && r<=34560) { return R1.get_clocks(r-1); } 
  if (r>=34561 && r<=35040) { return R2.get_clocks(r-34561); } 
  if (r>=35041 && r<=35520) { return R3.get_clocks(r-35041); } 
  if (r>=35521 && r<=36000) { return R4.get_clocks(r-35521); } 
  if (r>=36001 && r<=36480) { return R5.get_clocks(r-36001); } 
  if (r>=36481 && r<=37200) { return R6.get_clocks(r-36481); } 
  if (r>=37201 && r<=37680) { return R7.get_clocks(r-37201); } 
  if (r>=37681 && r<=37920) { return R8.get_clocks(r-37681); } 
  if (r>=37921 && r<=37936) { return R9.get_clocks(r-37921); } 
}
int Priority(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=34560) { return R1.Priority(); } 
  if (r>=34561 && r<=35040) { return R2.Priority(); } 
  if (r>=35041 && r<=35520) { return R3.Priority(); } 
  if (r>=35521 && r<=36000) { return R4.Priority(); } 
  if (r>=36001 && r<=36480) { return R5.Priority(); } 
  if (r>=36481 && r<=37200) { return R6.Priority(); } 
  if (r>=37201 && r<=37680) { return R7.Priority(); } 
  if (r>=37681 && r<=37920) { return R8.Priority(); } 
  if (r>=37921 && r<=37936) { return R9.Priority(); } 
}
char * Name(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=34560) return R1.Name(r-1);
  if (r>=34561 && r<=35040) return R2.Name(r-34561);
  if (r>=35041 && r<=35520) return R3.Name(r-35041);
  if (r>=35521 && r<=36000) return R4.Name(r-35521);
  if (r>=36001 && r<=36480) return R5.Name(r-36001);
  if (r>=36481 && r<=37200) return R6.Name(r-36481);
  if (r>=37201 && r<=37680) return R7.Name(r-37201);
  if (r>=37681 && r<=37920) return R8.Name(r-37681);
  if (r>=37921 && r<=37936) return R9.Name(r-37921);
  return NULL;
}
int Duration(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Duration(r-0);
  if (r>=1 && r<=34560) return R1.Duration(r-1);
  if (r>=34561 && r<=35040) return R2.Duration(r-34561);
  if (r>=35041 && r<=35520) return R3.Duration(r-35041);
  if (r>=35521 && r<=36000) return R4.Duration(r-35521);
  if (r>=36001 && r<=36480) return R5.Duration(r-36001);
  if (r>=36481 && r<=37200) return R6.Duration(r-36481);
  if (r>=37201 && r<=37680) return R7.Duration(r-37201);
  if (r>=37681 && r<=37920) return R8.Duration(r-37681);
  if (r>=37921 && r<=37936) return R9.Duration(r-37921);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
int Weight(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Weight(r-0);
  if (r>=1 && r<=34560) return R1.Weight(r-1);
  if (r>=34561 && r<=35040) return R2.Weight(r-34561);
  if (r>=35041 && r<=35520) return R3.Weight(r-35041);
  if (r>=35521 && r<=36000) return R4.Weight(r-35521);
  if (r>=36001 && r<=36480) return R5.Weight(r-36001);
  if (r>=36481 && r<=37200) return R6.Weight(r-36481);
  if (r>=37201 && r<=37680) return R7.Weight(r-37201);
  if (r>=37681 && r<=37920) return R8.Weight(r-37681);
  if (r>=37921 && r<=37936) return R9.Weight(r-37921);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
 char * PDDLName(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLName(r-0);
  if (r>=1 && r<=34560) return R1.PDDLName(r-1);
  if (r>=34561 && r<=35040) return R2.PDDLName(r-34561);
  if (r>=35041 && r<=35520) return R3.PDDLName(r-35041);
  if (r>=35521 && r<=36000) return R4.PDDLName(r-35521);
  if (r>=36001 && r<=36480) return R5.PDDLName(r-36001);
  if (r>=36481 && r<=37200) return R6.PDDLName(r-36481);
  if (r>=37201 && r<=37680) return R7.PDDLName(r-37201);
  if (r>=37681 && r<=37920) return R8.PDDLName(r-37681);
  if (r>=37921 && r<=37936) return R9.PDDLName(r-37921);
  return NULL;
}
RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLClass(r-0);
  if (r>=1 && r<=34560) return R1.PDDLClass(r-1);
  if (r>=34561 && r<=35040) return R2.PDDLClass(r-34561);
  if (r>=35041 && r<=35520) return R3.PDDLClass(r-35041);
  if (r>=35521 && r<=36000) return R4.PDDLClass(r-35521);
  if (r>=36001 && r<=36480) return R5.PDDLClass(r-36001);
  if (r>=36481 && r<=37200) return R6.PDDLClass(r-36481);
  if (r>=37201 && r<=37680) return R7.PDDLClass(r-37201);
  if (r>=37681 && r<=37920) return R8.PDDLClass(r-37681);
  if (r>=37921 && r<=37936) return R9.PDDLClass(r-37921);
Error.Notrace("Internal: NextStateGenerator -- querying PDDL class for nonexisting rule.");
}
};
const RULE_INDEX_TYPE numrules = 37937;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 37937


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("start");
  }
  void Code(unsigned short r)
  {
mu_TIME = 0.000000e+00;
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_varstay = 47; mu_varstay <= 48; mu_varstay++) {
mu_set_bedstay ( mu_varbed, mu_varstay, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_varroomtype = 45; mu_varroomtype <= 46; mu_varroomtype++) {
mu_set_bedroomtype ( mu_varbed, mu_varroomtype, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_varorigin = 43; mu_varorigin <= 44; mu_varorigin++) {
mu_set_bedorigin ( mu_varbed, mu_varorigin, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_vargender = 41; mu_vargender <= 42; mu_vargender++) {
mu_set_bedgender ( mu_varbed, mu_vargender, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_varage = 38; mu_varage <= 40; mu_varage++) {
mu_set_bedage ( mu_varbed, mu_varage, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_varbirthtype = 36; mu_varbirthtype <= 37; mu_varbirthtype++) {
mu_set_bedbirthtype ( mu_varbed, mu_varbirthtype, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_varcare = 32; mu_varcare <= 34; mu_varcare++) {
mu_set_bedcare ( mu_varbed, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
{
for(int mu_varspecialty = 35; mu_varspecialty <= 35; mu_varspecialty++) {
mu_set_bedspecialty ( mu_varbed, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_bedisolation ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_bedfree ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_busybed ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_in_ ( mu_p, mu_varbed, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varstay = 47; mu_varstay <= 48; mu_varstay++) {
mu_set_patientstay ( mu_p, mu_varstay, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varroomtype = 45; mu_varroomtype <= 46; mu_varroomtype++) {
mu_set_patientroomtype ( mu_p, mu_varroomtype, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varorigin = 43; mu_varorigin <= 44; mu_varorigin++) {
mu_set_patientorigin ( mu_p, mu_varorigin, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_vargender = 41; mu_vargender <= 42; mu_vargender++) {
mu_set_patientgender ( mu_p, mu_vargender, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varage = 38; mu_varage <= 40; mu_varage++) {
mu_set_patientage ( mu_p, mu_varage, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varbirthtype = 36; mu_varbirthtype <= 37; mu_varbirthtype++) {
mu_set_patientbirthtype ( mu_p, mu_varbirthtype, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varcare = 32; mu_varcare <= 34; mu_varcare++) {
mu_set_patientcare ( mu_p, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
{
for(int mu_varspecialty = 35; mu_varspecialty <= 35; mu_varspecialty++) {
mu_set_patientspecialty ( mu_p, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientisolation ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_allocated ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_donotallocate ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientuti ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_bedobstetricia ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientobstetricia ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_beducl ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientucl ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_bedavc ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientavc ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_bedpsiquiatria ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientpsiquiatria ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_bedcirurgiabariatrica ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientcirurgiabariatrica ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 17; mu_varbed <= 31; mu_varbed++) {
mu_set_bedginecologia ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_set_patientginecologia ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 16; mu_p++) {
mu_agefunc[mu_p] = 0.000000e+00;
};
};
mu_patientuti[mu_pacienteuti] = mu_true;
mu_bedfree[mu_camaisolamento] = mu_true;
mu_patientisolation[mu_pacienteisolamento] = mu_true;
mu_bedfree[mu_camaobstetriciaaborto] = mu_true;
mu_bedfree[mu_camaobstetricianascimento] = mu_true;
mu_patientobstetricia[mu_pacienteobstetriciaaborto] = mu_true;
mu_patientobstetricia[mu_pacienteobstetricianascimento] = mu_true;
mu_bedobstetricia[mu_camaobstetriciaaborto] = mu_true;
mu_bedobstetricia[mu_camaobstetricianascimento] = mu_true;
mu_bedbirthtype[mu_camaobstetriciaaborto][mu_aborto] = mu_true;
mu_bedbirthtype[mu_camaobstetricianascimento][mu_nascimento] = mu_true;
mu_patientbirthtype[mu_pacienteobstetriciaaborto][mu_aborto] = mu_true;
mu_patientbirthtype[mu_pacienteobstetricianascimento][mu_nascimento] = mu_true;
mu_bedfree[mu_camaucladulto] = mu_true;
mu_bedfree[mu_camauclcrianca] = mu_true;
mu_patientucl[mu_pacienteucladulto] = mu_true;
mu_patientucl[mu_pacienteuclcrianca] = mu_true;
mu_beducl[mu_camaucladulto] = mu_true;
mu_beducl[mu_camauclcrianca] = mu_true;
mu_patientage[mu_pacienteucladulto][mu_adulto] = mu_true;
mu_patientage[mu_pacienteuclcrianca][mu_crianca] = mu_true;
mu_bedage[mu_camaucladulto][mu_adulto] = mu_true;
mu_bedage[mu_camauclcrianca][mu_crianca] = mu_true;
mu_bedfree[mu_camaavcfeminino] = mu_true;
mu_bedfree[mu_camaavcmasculino] = mu_true;
mu_patientavc[mu_pacienteavcfeminino] = mu_true;
mu_patientavc[mu_pacienteavcmasculino] = mu_true;
mu_bedavc[mu_camaavcfeminino] = mu_true;
mu_bedavc[mu_camaavcmasculino] = mu_true;
mu_patientgender[mu_pacienteavcfeminino][mu_feminino] = mu_true;
mu_patientgender[mu_pacienteavcmasculino][mu_masculino] = mu_true;
mu_bedgender[mu_camaavcfeminino][mu_feminino] = mu_true;
mu_bedgender[mu_camaavcmasculino][mu_masculino] = mu_true;
mu_bedfree[mu_camapsiquiatriafeminino] = mu_true;
mu_bedfree[mu_camapsiquiatriamasculino] = mu_true;
mu_patientpsiquiatria[mu_pacientepsiquiatriafeminino] = mu_true;
mu_patientpsiquiatria[mu_pacientepsiquiatriamasculino] = mu_true;
mu_bedpsiquiatria[mu_camapsiquiatriafeminino] = mu_true;
mu_bedpsiquiatria[mu_camapsiquiatriamasculino] = mu_true;
mu_patientgender[mu_pacientepsiquiatriafeminino][mu_feminino] = mu_true;
mu_patientgender[mu_pacientepsiquiatriamasculino][mu_masculino] = mu_true;
mu_bedgender[mu_camapsiquiatriafeminino][mu_feminino] = mu_true;
mu_bedgender[mu_camapsiquiatriamasculino][mu_masculino] = mu_true;
mu_bedfree[mu_camacirurgiabariatricafeminino] = mu_true;
mu_bedfree[mu_camacirurgiabariatricamasculino] = mu_true;
mu_patientcirurgiabariatrica[mu_pacientecirurgiabariatricafeminino] = mu_true;
mu_patientcirurgiabariatrica[mu_pacientecirurgiabariatricamasculino] = mu_true;
mu_bedcirurgiabariatrica[mu_camacirurgiabariatricafeminino] = mu_true;
mu_bedcirurgiabariatrica[mu_camacirurgiabariatricamasculino] = mu_true;
mu_patientgender[mu_pacientecirurgiabariatricafeminino][mu_feminino] = mu_true;
mu_patientgender[mu_pacientecirurgiabariatricamasculino][mu_masculino] = mu_true;
mu_bedgender[mu_camacirurgiabariatricafeminino][mu_feminino] = mu_true;
mu_bedgender[mu_camacirurgiabariatricamasculino][mu_masculino] = mu_true;
mu_bedfree[mu_camaginecologiaclinico] = mu_true;
mu_bedfree[mu_camaginecologiacirurgico] = mu_true;
mu_patientginecologia[mu_pacienteginecologiaclinico] = mu_true;
mu_patientginecologia[mu_pacienteginecologiacirurgico] = mu_true;
mu_bedginecologia[mu_camaginecologiaclinico] = mu_true;
mu_bedginecologia[mu_camaginecologiacirurgico] = mu_true;
mu_patientroomtype[mu_pacienteginecologiaclinico][mu_clinico] = mu_true;
mu_patientroomtype[mu_pacienteginecologiacirurgico][mu_cirurgico] = mu_true;
mu_bedroomtype[mu_camaginecologiaclinico][mu_clinico] = mu_true;
mu_bedroomtype[mu_camaginecologiacirurgico][mu_cirurgico] = mu_true;
mu_bedfree[mu_camageralminimolongapermanencia] = mu_true;
mu_bedfree[mu_camageralintensivogirorapido] = mu_true;
mu_patientspecialty[mu_pacientegeralminimolongapermanencia][mu_geral] = mu_true;
mu_patientspecialty[mu_pacientegeralintensivogirorapido][mu_geral] = mu_true;
mu_patientstay[mu_pacientegeralminimolongapermanencia][mu_longapermanencia] = mu_true;
mu_patientstay[mu_pacientegeralintensivogirorapido][mu_girorapido] = mu_true;
mu_patientroomtype[mu_pacientegeralminimolongapermanencia][mu_clinico] = mu_true;
mu_patientroomtype[mu_pacientegeralintensivogirorapido][mu_clinico] = mu_true;
mu_patientorigin[mu_pacientegeralminimolongapermanencia][mu_eletivo] = mu_true;
mu_patientorigin[mu_pacientegeralintensivogirorapido][mu_eletivo] = mu_true;
mu_patientgender[mu_pacientegeralminimolongapermanencia][mu_masculino] = mu_true;
mu_patientgender[mu_pacientegeralintensivogirorapido][mu_masculino] = mu_true;
mu_patientage[mu_pacientegeralminimolongapermanencia][mu_adulto] = mu_true;
mu_patientage[mu_pacientegeralintensivogirorapido][mu_adulto] = mu_true;
mu_patientcare[mu_pacientegeralminimolongapermanencia][mu_minimo] = mu_true;
mu_patientcare[mu_pacientegeralintensivogirorapido][mu_intensivo] = mu_true;
mu_bedspecialty[mu_camageralminimolongapermanencia][mu_geral] = mu_true;
mu_bedspecialty[mu_camageralintensivogirorapido][mu_geral] = mu_true;
mu_bedstay[mu_camageralminimolongapermanencia][mu_longapermanencia] = mu_true;
mu_bedstay[mu_camageralintensivogirorapido][mu_girorapido] = mu_true;
mu_bedroomtype[mu_camageralminimolongapermanencia][mu_clinico] = mu_true;
mu_bedroomtype[mu_camageralintensivogirorapido][mu_clinico] = mu_true;
mu_bedorigin[mu_camageralminimolongapermanencia][mu_eletivo] = mu_true;
mu_bedorigin[mu_camageralintensivogirorapido][mu_eletivo] = mu_true;
mu_bedgender[mu_camageralminimolongapermanencia][mu_masculino] = mu_true;
mu_bedgender[mu_camageralintensivogirorapido][mu_masculino] = mu_true;
mu_bedage[mu_camageralminimolongapermanencia][mu_adulto] = mu_true;
mu_bedage[mu_camageralintensivogirorapido][mu_adulto] = mu_true;
mu_bedcare[mu_camageralminimolongapermanencia][mu_minimo] = mu_true;
mu_bedcare[mu_camageralintensivogirorapido][mu_intensivo] = mu_true;
mu_all_event_true = mu_true;
mu_g_n = 0;
mu_h_n = 0;
mu_f_n = 0;
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Goal records
 ********************/

// WP WP WP GOAL
int mu__goal_1674() // Goal "enjoy"
{
bool mu__boolexpr1675;
bool mu__boolexpr1676;
  if (!(mu_allocated[mu_pacientegeralminimolongapermanencia])) mu__boolexpr1676 = FALSE ;
  else {
  mu__boolexpr1676 = (mu_allocated[mu_pacientegeralintensivogirorapido]) ; 
}
  if (!(mu__boolexpr1676)) mu__boolexpr1675 = FALSE ;
  else {
  mu__boolexpr1675 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
return mu__boolexpr1675;
};

  std::set<mu_0_boolean*> get_bool_goal_conditions()
  {
    std::set<mu_0_boolean*> bool_goal_conds;
bool mu__boolexpr1677;
  if (!(mu_allocated[mu_pacientegeralminimolongapermanencia])) mu__boolexpr1677 = FALSE ;
  else {
  mu__boolexpr1677 = (mu_allocated[mu_pacientegeralintensivogirorapido]) ; 
}
bool mu__boolexpr1678;
bool mu__boolexpr1679;
  if (!(mu_allocated[mu_pacientegeralminimolongapermanencia])) mu__boolexpr1679 = FALSE ;
  else {
  mu__boolexpr1679 = (mu_allocated[mu_pacientegeralintensivogirorapido]) ; 
}
  if (!(mu__boolexpr1679)) mu__boolexpr1678 = FALSE ;
  else {
  mu__boolexpr1678 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
bool mu__boolexpr1680;
  if (!(mu_allocated[mu_pacientegeralminimolongapermanencia])) mu__boolexpr1680 = FALSE ;
  else {
  mu__boolexpr1680 = (mu_allocated[mu_pacientegeralintensivogirorapido]) ; 
}

 if (std::string(typeid(mu_allocated[mu_pacientegeralintensivogirorapido]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientegeralintensivogirorapido])); 
 if (std::string(typeid(mu_allocated[mu_pacientegeralminimolongapermanencia]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientegeralminimolongapermanencia])); 

    return bool_goal_conds;
  }

  std::map<mu__real*, std::pair<double, int> > get_numeric_goal_conditions()
  {
    std::map<mu__real*, std::pair<double, int> > numeric_goal_conds;

    return numeric_goal_conds;
  }

bool mu__condition_1681() // Condition for Rule "enjoy"
{
  return mu__goal_1674( );
}

bool mu__goal__00(){ return mu__condition_1681(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/


// WP WP WP GOAL
const rulerec goals[] = {
{"enjoy", &mu__condition_1681, NULL, },
};
const unsigned short numgoals = 1;

/********************
  Metric related stuff
 ********************/
const short metric = -1;

/********************
  Invariant records
 ********************/
int mu__invariant_1682() // Invariant "todo bien"
{
bool mu__boolexpr1683;
  if (!(mu_all_event_true)) mu__boolexpr1683 = FALSE ;
  else {
  mu__boolexpr1683 = (!(mu_DAs_violate_duration(  ))) ; 
}
return mu__boolexpr1683;
};

bool mu__condition_1684() // Condition for Rule "todo bien"
{
  return mu__invariant_1682( );
}

bool mu__goal__01(){ return mu__condition_1684(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/

const rulerec invariants[] = {
{"todo bien", &mu__condition_1684, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
patientcare:NoScalarset
patientage:NoScalarset
patientorigin:NoScalarset
patientstay:NoScalarset
busybed:NoScalarset
bedfree:NoScalarset
bedisolation:NoScalarset
bedspecialty:NoScalarset
bedbirthtype:NoScalarset
bedgender:NoScalarset
bedroomtype:NoScalarset
agefunc:NoScalarset
TIME:NoScalarset
g_n:NoScalarset
all_event_true:NoScalarset
h_n:NoScalarset
f_n:NoScalarset
bedstay:NoScalarset
bedorigin:NoScalarset
bedage:NoScalarset
bedcare:NoScalarset
in_:NoScalarset
patientroomtype:NoScalarset
patientgender:NoScalarset
patientbirthtype:NoScalarset
patientspecialty:NoScalarset
patientisolation:NoScalarset
allocated:NoScalarset
donotallocate:NoScalarset
patientuti:NoScalarset
bedobstetricia:NoScalarset
patientobstetricia:NoScalarset
beducl:NoScalarset
patientucl:NoScalarset
bedavc:NoScalarset
patientavc:NoScalarset
bedpsiquiatria:NoScalarset
patientpsiquiatria:NoScalarset
bedcirurgiabariatrica:NoScalarset
patientcirurgiabariatrica:NoScalarset
bedginecologia:NoScalarset
patientginecologia:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { unsigned long ret=0; for (unsigned long i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_patientcare.MultisetSort();
        mu_patientage.MultisetSort();
        mu_patientorigin.MultisetSort();
        mu_patientstay.MultisetSort();
        mu_busybed.MultisetSort();
        mu_bedfree.MultisetSort();
        mu_bedisolation.MultisetSort();
        mu_bedspecialty.MultisetSort();
        mu_bedbirthtype.MultisetSort();
        mu_bedgender.MultisetSort();
        mu_bedroomtype.MultisetSort();
        mu_agefunc.MultisetSort();
        mu_TIME.MultisetSort();
        mu_g_n.MultisetSort();
        mu_all_event_true.MultisetSort();
        mu_h_n.MultisetSort();
        mu_f_n.MultisetSort();
        mu_bedstay.MultisetSort();
        mu_bedorigin.MultisetSort();
        mu_bedage.MultisetSort();
        mu_bedcare.MultisetSort();
        mu_in_.MultisetSort();
        mu_patientroomtype.MultisetSort();
        mu_patientgender.MultisetSort();
        mu_patientbirthtype.MultisetSort();
        mu_patientspecialty.MultisetSort();
        mu_patientisolation.MultisetSort();
        mu_allocated.MultisetSort();
        mu_donotallocate.MultisetSort();
        mu_patientuti.MultisetSort();
        mu_bedobstetricia.MultisetSort();
        mu_patientobstetricia.MultisetSort();
        mu_beducl.MultisetSort();
        mu_patientucl.MultisetSort();
        mu_bedavc.MultisetSort();
        mu_patientavc.MultisetSort();
        mu_bedpsiquiatria.MultisetSort();
        mu_patientpsiquiatria.MultisetSort();
        mu_bedcirurgiabariatrica.MultisetSort();
        mu_patientcirurgiabariatrica.MultisetSort();
        mu_bedginecologia.MultisetSort();
        mu_patientginecologia.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_real_type::Permute(PermSet& Perm, int i) {};
void mu_1_real_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_real_type::Canonicalize(PermSet& Perm) {};
void mu_1_real_type::SimpleLimit(PermSet& Perm) {};
void mu_1_real_type::ArrayLimit(PermSet& Perm) {};
void mu_1_real_type::Limit(PermSet& Perm) {};
void mu_1_real_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for real type.\n"); };
void mu_1_integer::Permute(PermSet& Perm, int i) {};
void mu_1_integer::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_integer::Canonicalize(PermSet& Perm) {};
void mu_1_integer::SimpleLimit(PermSet& Perm) {};
void mu_1_integer::ArrayLimit(PermSet& Perm) {};
void mu_1_integer::Limit(PermSet& Perm) {};
void mu_1_integer::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_TIME_type::Permute(PermSet& Perm, int i) {};
void mu_1_TIME_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_TIME_type::Canonicalize(PermSet& Perm) {};
void mu_1_TIME_type::SimpleLimit(PermSet& Perm) {};
void mu_1_TIME_type::ArrayLimit(PermSet& Perm) {};
void mu_1_TIME_type::Limit(PermSet& Perm) {};
void mu_1_TIME_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for real type.\n"); };
void mu_1_patient::Permute(PermSet& Perm, int i) {};
void mu_1_patient::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_patient::Canonicalize(PermSet& Perm) {};
void mu_1_patient::SimpleLimit(PermSet& Perm) {};
void mu_1_patient::ArrayLimit(PermSet& Perm) {};
void mu_1_patient::Limit(PermSet& Perm) {};
void mu_1_patient::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_bed::Permute(PermSet& Perm, int i) {};
void mu_1_bed::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_bed::Canonicalize(PermSet& Perm) {};
void mu_1_bed::SimpleLimit(PermSet& Perm) {};
void mu_1_bed::ArrayLimit(PermSet& Perm) {};
void mu_1_bed::Limit(PermSet& Perm) {};
void mu_1_bed::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_care::Permute(PermSet& Perm, int i) {};
void mu_1_care::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_care::Canonicalize(PermSet& Perm) {};
void mu_1_care::SimpleLimit(PermSet& Perm) {};
void mu_1_care::ArrayLimit(PermSet& Perm) {};
void mu_1_care::Limit(PermSet& Perm) {};
void mu_1_care::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_specialty::Permute(PermSet& Perm, int i) {};
void mu_1_specialty::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_specialty::Canonicalize(PermSet& Perm) {};
void mu_1_specialty::SimpleLimit(PermSet& Perm) {};
void mu_1_specialty::ArrayLimit(PermSet& Perm) {};
void mu_1_specialty::Limit(PermSet& Perm) {};
void mu_1_specialty::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_birthtype::Permute(PermSet& Perm, int i) {};
void mu_1_birthtype::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_birthtype::Canonicalize(PermSet& Perm) {};
void mu_1_birthtype::SimpleLimit(PermSet& Perm) {};
void mu_1_birthtype::ArrayLimit(PermSet& Perm) {};
void mu_1_birthtype::Limit(PermSet& Perm) {};
void mu_1_birthtype::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_age::Permute(PermSet& Perm, int i) {};
void mu_1_age::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_age::Canonicalize(PermSet& Perm) {};
void mu_1_age::SimpleLimit(PermSet& Perm) {};
void mu_1_age::ArrayLimit(PermSet& Perm) {};
void mu_1_age::Limit(PermSet& Perm) {};
void mu_1_age::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_gender::Permute(PermSet& Perm, int i) {};
void mu_1_gender::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_gender::Canonicalize(PermSet& Perm) {};
void mu_1_gender::SimpleLimit(PermSet& Perm) {};
void mu_1_gender::ArrayLimit(PermSet& Perm) {};
void mu_1_gender::Limit(PermSet& Perm) {};
void mu_1_gender::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_origin::Permute(PermSet& Perm, int i) {};
void mu_1_origin::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_origin::Canonicalize(PermSet& Perm) {};
void mu_1_origin::SimpleLimit(PermSet& Perm) {};
void mu_1_origin::ArrayLimit(PermSet& Perm) {};
void mu_1_origin::Limit(PermSet& Perm) {};
void mu_1_origin::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_roomtype::Permute(PermSet& Perm, int i) {};
void mu_1_roomtype::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roomtype::Canonicalize(PermSet& Perm) {};
void mu_1_roomtype::SimpleLimit(PermSet& Perm) {};
void mu_1_roomtype::ArrayLimit(PermSet& Perm) {};
void mu_1_roomtype::Limit(PermSet& Perm) {};
void mu_1_roomtype::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_stay::Permute(PermSet& Perm, int i) {};
void mu_1_stay::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_stay::Canonicalize(PermSet& Perm) {};
void mu_1_stay::SimpleLimit(PermSet& Perm) {};
void mu_1_stay::ArrayLimit(PermSet& Perm) {};
void mu_1_stay::Limit(PermSet& Perm) {};
void mu_1_stay::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm){};
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm) {}
void mu_1__type_11::Limit(PermSet& Perm){}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_12::Canonicalize(PermSet& Perm){};
void mu_1__type_12::SimpleLimit(PermSet& Perm){}
void mu_1__type_12::ArrayLimit(PermSet& Perm) {}
void mu_1__type_12::Limit(PermSet& Perm){}
void mu_1__type_12::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_13::Permute(PermSet& Perm, int i)
{
  static mu_1__type_13 temp("Permute_mu_1__type_13",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_13::Canonicalize(PermSet& Perm){};
void mu_1__type_13::SimpleLimit(PermSet& Perm){}
void mu_1__type_13::ArrayLimit(PermSet& Perm) {}
void mu_1__type_13::Limit(PermSet& Perm){}
void mu_1__type_13::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_14::Permute(PermSet& Perm, int i)
{
  static mu_1__type_14 temp("Permute_mu_1__type_14",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_14::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_14::Canonicalize(PermSet& Perm){};
void mu_1__type_14::SimpleLimit(PermSet& Perm){}
void mu_1__type_14::ArrayLimit(PermSet& Perm) {}
void mu_1__type_14::Limit(PermSet& Perm){}
void mu_1__type_14::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_15::Permute(PermSet& Perm, int i)
{
  static mu_1__type_15 temp("Permute_mu_1__type_15",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_15::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_15::Canonicalize(PermSet& Perm){};
void mu_1__type_15::SimpleLimit(PermSet& Perm){}
void mu_1__type_15::ArrayLimit(PermSet& Perm) {}
void mu_1__type_15::Limit(PermSet& Perm){}
void mu_1__type_15::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_16::Permute(PermSet& Perm, int i)
{
  static mu_1__type_16 temp("Permute_mu_1__type_16",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_16::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_16::Canonicalize(PermSet& Perm){};
void mu_1__type_16::SimpleLimit(PermSet& Perm){}
void mu_1__type_16::ArrayLimit(PermSet& Perm) {}
void mu_1__type_16::Limit(PermSet& Perm){}
void mu_1__type_16::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_17::Permute(PermSet& Perm, int i)
{
  static mu_1__type_17 temp("Permute_mu_1__type_17",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_17::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_17::Canonicalize(PermSet& Perm){};
void mu_1__type_17::SimpleLimit(PermSet& Perm){}
void mu_1__type_17::ArrayLimit(PermSet& Perm) {}
void mu_1__type_17::Limit(PermSet& Perm){}
void mu_1__type_17::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_18::Permute(PermSet& Perm, int i)
{
  static mu_1__type_18 temp("Permute_mu_1__type_18",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_18::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_18::Canonicalize(PermSet& Perm){};
void mu_1__type_18::SimpleLimit(PermSet& Perm){}
void mu_1__type_18::ArrayLimit(PermSet& Perm) {}
void mu_1__type_18::Limit(PermSet& Perm){}
void mu_1__type_18::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_19::Permute(PermSet& Perm, int i)
{
  static mu_1__type_19 temp("Permute_mu_1__type_19",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_19::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_19::Canonicalize(PermSet& Perm){};
void mu_1__type_19::SimpleLimit(PermSet& Perm){}
void mu_1__type_19::ArrayLimit(PermSet& Perm) {}
void mu_1__type_19::Limit(PermSet& Perm){}
void mu_1__type_19::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_20::Permute(PermSet& Perm, int i)
{
  static mu_1__type_20 temp("Permute_mu_1__type_20",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_20::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_20::Canonicalize(PermSet& Perm){};
void mu_1__type_20::SimpleLimit(PermSet& Perm){}
void mu_1__type_20::ArrayLimit(PermSet& Perm) {}
void mu_1__type_20::Limit(PermSet& Perm){}
void mu_1__type_20::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_21::Permute(PermSet& Perm, int i)
{
  static mu_1__type_21 temp("Permute_mu_1__type_21",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_21::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_21::Canonicalize(PermSet& Perm){};
void mu_1__type_21::SimpleLimit(PermSet& Perm){}
void mu_1__type_21::ArrayLimit(PermSet& Perm) {}
void mu_1__type_21::Limit(PermSet& Perm){}
void mu_1__type_21::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_22::Permute(PermSet& Perm, int i)
{
  static mu_1__type_22 temp("Permute_mu_1__type_22",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_22::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_22::Canonicalize(PermSet& Perm){};
void mu_1__type_22::SimpleLimit(PermSet& Perm){}
void mu_1__type_22::ArrayLimit(PermSet& Perm) {}
void mu_1__type_22::Limit(PermSet& Perm){}
void mu_1__type_22::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_23::Permute(PermSet& Perm, int i)
{
  static mu_1__type_23 temp("Permute_mu_1__type_23",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_23::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_23::Canonicalize(PermSet& Perm){};
void mu_1__type_23::SimpleLimit(PermSet& Perm){}
void mu_1__type_23::ArrayLimit(PermSet& Perm) {}
void mu_1__type_23::Limit(PermSet& Perm){}
void mu_1__type_23::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_24::Permute(PermSet& Perm, int i)
{
  static mu_1__type_24 temp("Permute_mu_1__type_24",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_24::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_24::Canonicalize(PermSet& Perm){};
void mu_1__type_24::SimpleLimit(PermSet& Perm){}
void mu_1__type_24::ArrayLimit(PermSet& Perm) {}
void mu_1__type_24::Limit(PermSet& Perm){}
void mu_1__type_24::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_25::Permute(PermSet& Perm, int i)
{
  static mu_1__type_25 temp("Permute_mu_1__type_25",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_25::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_25::Canonicalize(PermSet& Perm){};
void mu_1__type_25::SimpleLimit(PermSet& Perm){}
void mu_1__type_25::ArrayLimit(PermSet& Perm) {}
void mu_1__type_25::Limit(PermSet& Perm){}
void mu_1__type_25::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_26::Permute(PermSet& Perm, int i)
{
  static mu_1__type_26 temp("Permute_mu_1__type_26",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_26::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_26::Canonicalize(PermSet& Perm){};
void mu_1__type_26::SimpleLimit(PermSet& Perm){}
void mu_1__type_26::ArrayLimit(PermSet& Perm) {}
void mu_1__type_26::Limit(PermSet& Perm){}
void mu_1__type_26::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_27::Permute(PermSet& Perm, int i)
{
  static mu_1__type_27 temp("Permute_mu_1__type_27",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_27::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_27::Canonicalize(PermSet& Perm){};
void mu_1__type_27::SimpleLimit(PermSet& Perm){}
void mu_1__type_27::ArrayLimit(PermSet& Perm) {}
void mu_1__type_27::Limit(PermSet& Perm){}
void mu_1__type_27::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_28::Permute(PermSet& Perm, int i)
{
  static mu_1__type_28 temp("Permute_mu_1__type_28",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_28::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_28::Canonicalize(PermSet& Perm){};
void mu_1__type_28::SimpleLimit(PermSet& Perm){}
void mu_1__type_28::ArrayLimit(PermSet& Perm) {}
void mu_1__type_28::Limit(PermSet& Perm){}
void mu_1__type_28::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_29::Permute(PermSet& Perm, int i)
{
  static mu_1__type_29 temp("Permute_mu_1__type_29",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_29::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_29::Canonicalize(PermSet& Perm){};
void mu_1__type_29::SimpleLimit(PermSet& Perm){}
void mu_1__type_29::ArrayLimit(PermSet& Perm) {}
void mu_1__type_29::Limit(PermSet& Perm){}
void mu_1__type_29::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_30::Permute(PermSet& Perm, int i)
{
  static mu_1__type_30 temp("Permute_mu_1__type_30",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_30::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_30::Canonicalize(PermSet& Perm){};
void mu_1__type_30::SimpleLimit(PermSet& Perm){}
void mu_1__type_30::ArrayLimit(PermSet& Perm) {}
void mu_1__type_30::Limit(PermSet& Perm){}
void mu_1__type_30::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_31::Permute(PermSet& Perm, int i)
{
  static mu_1__type_31 temp("Permute_mu_1__type_31",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_31::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_31::Canonicalize(PermSet& Perm){};
void mu_1__type_31::SimpleLimit(PermSet& Perm){}
void mu_1__type_31::ArrayLimit(PermSet& Perm) {}
void mu_1__type_31::Limit(PermSet& Perm){}
void mu_1__type_31::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_32::Permute(PermSet& Perm, int i)
{
  static mu_1__type_32 temp("Permute_mu_1__type_32",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_32::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_32::Canonicalize(PermSet& Perm){};
void mu_1__type_32::SimpleLimit(PermSet& Perm){}
void mu_1__type_32::ArrayLimit(PermSet& Perm) {}
void mu_1__type_32::Limit(PermSet& Perm){}
void mu_1__type_32::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_33::Permute(PermSet& Perm, int i)
{
  static mu_1__type_33 temp("Permute_mu_1__type_33",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_33::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_33::Canonicalize(PermSet& Perm){};
void mu_1__type_33::SimpleLimit(PermSet& Perm){}
void mu_1__type_33::ArrayLimit(PermSet& Perm) {}
void mu_1__type_33::Limit(PermSet& Perm){}
void mu_1__type_33::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_34::Permute(PermSet& Perm, int i)
{
  static mu_1__type_34 temp("Permute_mu_1__type_34",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_34::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_34::Canonicalize(PermSet& Perm){};
void mu_1__type_34::SimpleLimit(PermSet& Perm){}
void mu_1__type_34::ArrayLimit(PermSet& Perm) {}
void mu_1__type_34::Limit(PermSet& Perm){}
void mu_1__type_34::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_35::Permute(PermSet& Perm, int i)
{
  static mu_1__type_35 temp("Permute_mu_1__type_35",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_35::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_35::Canonicalize(PermSet& Perm){};
void mu_1__type_35::SimpleLimit(PermSet& Perm){}
void mu_1__type_35::ArrayLimit(PermSet& Perm) {}
void mu_1__type_35::Limit(PermSet& Perm){}
void mu_1__type_35::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_36::Permute(PermSet& Perm, int i)
{
  static mu_1__type_36 temp("Permute_mu_1__type_36",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_36::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_36::Canonicalize(PermSet& Perm){};
void mu_1__type_36::SimpleLimit(PermSet& Perm){}
void mu_1__type_36::ArrayLimit(PermSet& Perm) {}
void mu_1__type_36::Limit(PermSet& Perm){}
void mu_1__type_36::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_37::Permute(PermSet& Perm, int i)
{
  static mu_1__type_37 temp("Permute_mu_1__type_37",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_37::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_37::Canonicalize(PermSet& Perm){};
void mu_1__type_37::SimpleLimit(PermSet& Perm){}
void mu_1__type_37::ArrayLimit(PermSet& Perm) {}
void mu_1__type_37::Limit(PermSet& Perm){}
void mu_1__type_37::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_38::Permute(PermSet& Perm, int i)
{
  static mu_1__type_38 temp("Permute_mu_1__type_38",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_38::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_38::Canonicalize(PermSet& Perm){};
void mu_1__type_38::SimpleLimit(PermSet& Perm){}
void mu_1__type_38::ArrayLimit(PermSet& Perm) {}
void mu_1__type_38::Limit(PermSet& Perm){}
void mu_1__type_38::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_39::Permute(PermSet& Perm, int i)
{
  static mu_1__type_39 temp("Permute_mu_1__type_39",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_39::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_39::Canonicalize(PermSet& Perm){};
void mu_1__type_39::SimpleLimit(PermSet& Perm){}
void mu_1__type_39::ArrayLimit(PermSet& Perm) {}
void mu_1__type_39::Limit(PermSet& Perm){}
void mu_1__type_39::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_40::Permute(PermSet& Perm, int i)
{
  static mu_1__type_40 temp("Permute_mu_1__type_40",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_40::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_40::Canonicalize(PermSet& Perm){};
void mu_1__type_40::SimpleLimit(PermSet& Perm){}
void mu_1__type_40::ArrayLimit(PermSet& Perm) {}
void mu_1__type_40::Limit(PermSet& Perm){}
void mu_1__type_40::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_41::Permute(PermSet& Perm, int i)
{
  static mu_1__type_41 temp("Permute_mu_1__type_41",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_41::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_41::Canonicalize(PermSet& Perm){};
void mu_1__type_41::SimpleLimit(PermSet& Perm){}
void mu_1__type_41::ArrayLimit(PermSet& Perm) {}
void mu_1__type_41::Limit(PermSet& Perm){}
void mu_1__type_41::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_42::Permute(PermSet& Perm, int i)
{
  static mu_1__type_42 temp("Permute_mu_1__type_42",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_42::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_42::Canonicalize(PermSet& Perm){};
void mu_1__type_42::SimpleLimit(PermSet& Perm){}
void mu_1__type_42::ArrayLimit(PermSet& Perm) {}
void mu_1__type_42::Limit(PermSet& Perm){}
void mu_1__type_42::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_43::Permute(PermSet& Perm, int i)
{
  static mu_1__type_43 temp("Permute_mu_1__type_43",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_43::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_43::Canonicalize(PermSet& Perm){};
void mu_1__type_43::SimpleLimit(PermSet& Perm){}
void mu_1__type_43::ArrayLimit(PermSet& Perm) {}
void mu_1__type_43::Limit(PermSet& Perm){}
void mu_1__type_43::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_44::Permute(PermSet& Perm, int i)
{
  static mu_1__type_44 temp("Permute_mu_1__type_44",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_44::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_44::Canonicalize(PermSet& Perm){};
void mu_1__type_44::SimpleLimit(PermSet& Perm){}
void mu_1__type_44::ArrayLimit(PermSet& Perm) {}
void mu_1__type_44::Limit(PermSet& Perm){}
void mu_1__type_44::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_45::Permute(PermSet& Perm, int i)
{
  static mu_1__type_45 temp("Permute_mu_1__type_45",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_45::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_45::Canonicalize(PermSet& Perm){};
void mu_1__type_45::SimpleLimit(PermSet& Perm){}
void mu_1__type_45::ArrayLimit(PermSet& Perm) {}
void mu_1__type_45::Limit(PermSet& Perm){}
void mu_1__type_45::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_46::Permute(PermSet& Perm, int i)
{
  static mu_1__type_46 temp("Permute_mu_1__type_46",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_46::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_46::Canonicalize(PermSet& Perm){};
void mu_1__type_46::SimpleLimit(PermSet& Perm){}
void mu_1__type_46::ArrayLimit(PermSet& Perm) {}
void mu_1__type_46::Limit(PermSet& Perm){}
void mu_1__type_46::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_47::Permute(PermSet& Perm, int i)
{
  static mu_1__type_47 temp("Permute_mu_1__type_47",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_47::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_47::Canonicalize(PermSet& Perm){};
void mu_1__type_47::SimpleLimit(PermSet& Perm){}
void mu_1__type_47::ArrayLimit(PermSet& Perm) {}
void mu_1__type_47::Limit(PermSet& Perm){}
void mu_1__type_47::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_48::Permute(PermSet& Perm, int i)
{
  static mu_1__type_48 temp("Permute_mu_1__type_48",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_48::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_48::Canonicalize(PermSet& Perm){};
void mu_1__type_48::SimpleLimit(PermSet& Perm){}
void mu_1__type_48::ArrayLimit(PermSet& Perm) {}
void mu_1__type_48::Limit(PermSet& Perm){}
void mu_1__type_48::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_49::Permute(PermSet& Perm, int i)
{
  static mu_1__type_49 temp("Permute_mu_1__type_49",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_49::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_49::Canonicalize(PermSet& Perm){};
void mu_1__type_49::SimpleLimit(PermSet& Perm){}
void mu_1__type_49::ArrayLimit(PermSet& Perm) {}
void mu_1__type_49::Limit(PermSet& Perm){}
void mu_1__type_49::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_50::Permute(PermSet& Perm, int i)
{
  static mu_1__type_50 temp("Permute_mu_1__type_50",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_50::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_50::Canonicalize(PermSet& Perm){};
void mu_1__type_50::SimpleLimit(PermSet& Perm){}
void mu_1__type_50::ArrayLimit(PermSet& Perm) {}
void mu_1__type_50::Limit(PermSet& Perm){}
void mu_1__type_50::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_51::Permute(PermSet& Perm, int i)
{
  static mu_1__type_51 temp("Permute_mu_1__type_51",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_51::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_51::Canonicalize(PermSet& Perm){};
void mu_1__type_51::SimpleLimit(PermSet& Perm){}
void mu_1__type_51::ArrayLimit(PermSet& Perm) {}
void mu_1__type_51::Limit(PermSet& Perm){}
void mu_1__type_51::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_52::Permute(PermSet& Perm, int i)
{
  static mu_1__type_52 temp("Permute_mu_1__type_52",-1);
  int j;
  for (j=0; j<15; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_52::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_52::Canonicalize(PermSet& Perm){};
void mu_1__type_52::SimpleLimit(PermSet& Perm){}
void mu_1__type_52::ArrayLimit(PermSet& Perm) {}
void mu_1__type_52::Limit(PermSet& Perm){}
void mu_1__type_52::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_53::Permute(PermSet& Perm, int i)
{
  static mu_1__type_53 temp("Permute_mu_1__type_53",-1);
  int j;
  for (j=0; j<16; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_53::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_53::Canonicalize(PermSet& Perm){};
void mu_1__type_53::SimpleLimit(PermSet& Perm){}
void mu_1__type_53::ArrayLimit(PermSet& Perm) {}
void mu_1__type_53::Limit(PermSet& Perm){}
void mu_1__type_53::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  unsigned int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_patientcare.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientcare.MultisetSort();
              mu_patientage.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientage.MultisetSort();
              mu_patientorigin.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientorigin.MultisetSort();
              mu_patientstay.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientstay.MultisetSort();
              mu_busybed.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_busybed.MultisetSort();
              mu_bedfree.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedfree.MultisetSort();
              mu_bedisolation.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedisolation.MultisetSort();
              mu_bedspecialty.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedspecialty.MultisetSort();
              mu_bedbirthtype.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedbirthtype.MultisetSort();
              mu_bedgender.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedgender.MultisetSort();
              mu_bedroomtype.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedroomtype.MultisetSort();
              mu_agefunc.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_agefunc.MultisetSort();
              mu_TIME.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_TIME.MultisetSort();
              mu_g_n.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_g_n.MultisetSort();
              mu_all_event_true.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_all_event_true.MultisetSort();
              mu_h_n.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_h_n.MultisetSort();
              mu_f_n.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_f_n.MultisetSort();
              mu_bedstay.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedstay.MultisetSort();
              mu_bedorigin.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedorigin.MultisetSort();
              mu_bedage.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedage.MultisetSort();
              mu_bedcare.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedcare.MultisetSort();
              mu_in_.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_in_.MultisetSort();
              mu_patientroomtype.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientroomtype.MultisetSort();
              mu_patientgender.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientgender.MultisetSort();
              mu_patientbirthtype.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientbirthtype.MultisetSort();
              mu_patientspecialty.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientspecialty.MultisetSort();
              mu_patientisolation.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientisolation.MultisetSort();
              mu_allocated.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allocated.MultisetSort();
              mu_donotallocate.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_donotallocate.MultisetSort();
              mu_patientuti.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientuti.MultisetSort();
              mu_bedobstetricia.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedobstetricia.MultisetSort();
              mu_patientobstetricia.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientobstetricia.MultisetSort();
              mu_beducl.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_beducl.MultisetSort();
              mu_patientucl.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientucl.MultisetSort();
              mu_bedavc.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedavc.MultisetSort();
              mu_patientavc.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientavc.MultisetSort();
              mu_bedpsiquiatria.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedpsiquiatria.MultisetSort();
              mu_patientpsiquiatria.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientpsiquiatria.MultisetSort();
              mu_bedcirurgiabariatrica.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedcirurgiabariatrica.MultisetSort();
              mu_patientcirurgiabariatrica.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientcirurgiabariatrica.MultisetSort();
              mu_bedginecologia.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedginecologia.MultisetSort();
              mu_patientginecologia.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientginecologia.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_patientcare.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientcare.MultisetSort();
          mu_patientage.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientage.MultisetSort();
          mu_patientorigin.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientorigin.MultisetSort();
          mu_patientstay.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientstay.MultisetSort();
          mu_busybed.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_busybed.MultisetSort();
          mu_bedfree.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedfree.MultisetSort();
          mu_bedisolation.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedisolation.MultisetSort();
          mu_bedspecialty.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedspecialty.MultisetSort();
          mu_bedbirthtype.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedbirthtype.MultisetSort();
          mu_bedgender.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedgender.MultisetSort();
          mu_bedroomtype.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedroomtype.MultisetSort();
          mu_agefunc.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_agefunc.MultisetSort();
          mu_TIME.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_TIME.MultisetSort();
          mu_g_n.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_g_n.MultisetSort();
          mu_all_event_true.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_all_event_true.MultisetSort();
          mu_h_n.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_h_n.MultisetSort();
          mu_f_n.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_f_n.MultisetSort();
          mu_bedstay.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedstay.MultisetSort();
          mu_bedorigin.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedorigin.MultisetSort();
          mu_bedage.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedage.MultisetSort();
          mu_bedcare.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedcare.MultisetSort();
          mu_in_.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_in_.MultisetSort();
          mu_patientroomtype.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientroomtype.MultisetSort();
          mu_patientgender.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientgender.MultisetSort();
          mu_patientbirthtype.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientbirthtype.MultisetSort();
          mu_patientspecialty.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientspecialty.MultisetSort();
          mu_patientisolation.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientisolation.MultisetSort();
          mu_allocated.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allocated.MultisetSort();
          mu_donotallocate.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_donotallocate.MultisetSort();
          mu_patientuti.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientuti.MultisetSort();
          mu_bedobstetricia.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedobstetricia.MultisetSort();
          mu_patientobstetricia.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientobstetricia.MultisetSort();
          mu_beducl.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_beducl.MultisetSort();
          mu_patientucl.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientucl.MultisetSort();
          mu_bedavc.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedavc.MultisetSort();
          mu_patientavc.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientavc.MultisetSort();
          mu_bedpsiquiatria.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedpsiquiatria.MultisetSort();
          mu_patientpsiquiatria.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientpsiquiatria.MultisetSort();
          mu_bedcirurgiabariatrica.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedcirurgiabariatrica.MultisetSort();
          mu_patientcirurgiabariatrica.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientcirurgiabariatrica.MultisetSort();
          mu_bedginecologia.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedginecologia.MultisetSort();
          mu_patientginecologia.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientginecologia.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_patientcare.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientcare.MultisetSort();
              mu_patientage.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientage.MultisetSort();
              mu_patientorigin.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientorigin.MultisetSort();
              mu_patientstay.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientstay.MultisetSort();
              mu_busybed.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_busybed.MultisetSort();
              mu_bedfree.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedfree.MultisetSort();
              mu_bedisolation.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedisolation.MultisetSort();
              mu_bedspecialty.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedspecialty.MultisetSort();
              mu_bedbirthtype.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedbirthtype.MultisetSort();
              mu_bedgender.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedgender.MultisetSort();
              mu_bedroomtype.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedroomtype.MultisetSort();
              mu_agefunc.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_agefunc.MultisetSort();
              mu_TIME.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_TIME.MultisetSort();
              mu_g_n.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_g_n.MultisetSort();
              mu_all_event_true.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_all_event_true.MultisetSort();
              mu_h_n.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_h_n.MultisetSort();
              mu_f_n.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_f_n.MultisetSort();
              mu_bedstay.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedstay.MultisetSort();
              mu_bedorigin.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedorigin.MultisetSort();
              mu_bedage.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedage.MultisetSort();
              mu_bedcare.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedcare.MultisetSort();
              mu_in_.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_in_.MultisetSort();
              mu_patientroomtype.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientroomtype.MultisetSort();
              mu_patientgender.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientgender.MultisetSort();
              mu_patientbirthtype.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientbirthtype.MultisetSort();
              mu_patientspecialty.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientspecialty.MultisetSort();
              mu_patientisolation.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientisolation.MultisetSort();
              mu_allocated.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allocated.MultisetSort();
              mu_donotallocate.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_donotallocate.MultisetSort();
              mu_patientuti.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientuti.MultisetSort();
              mu_bedobstetricia.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedobstetricia.MultisetSort();
              mu_patientobstetricia.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientobstetricia.MultisetSort();
              mu_beducl.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_beducl.MultisetSort();
              mu_patientucl.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientucl.MultisetSort();
              mu_bedavc.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedavc.MultisetSort();
              mu_patientavc.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientavc.MultisetSort();
              mu_bedpsiquiatria.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedpsiquiatria.MultisetSort();
              mu_patientpsiquiatria.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientpsiquiatria.MultisetSort();
              mu_bedcirurgiabariatrica.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedcirurgiabariatrica.MultisetSort();
              mu_patientcirurgiabariatrica.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientcirurgiabariatrica.MultisetSort();
              mu_bedginecologia.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedginecologia.MultisetSort();
              mu_patientginecologia.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientginecologia.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_patientcare.MultisetSort();
      mu_patientage.MultisetSort();
      mu_patientorigin.MultisetSort();
      mu_patientstay.MultisetSort();
      mu_busybed.MultisetSort();
      mu_bedfree.MultisetSort();
      mu_bedisolation.MultisetSort();
      mu_bedspecialty.MultisetSort();
      mu_bedbirthtype.MultisetSort();
      mu_bedgender.MultisetSort();
      mu_bedroomtype.MultisetSort();
      mu_agefunc.MultisetSort();
      mu_TIME.MultisetSort();
      mu_g_n.MultisetSort();
      mu_all_event_true.MultisetSort();
      mu_h_n.MultisetSort();
      mu_f_n.MultisetSort();
      mu_bedstay.MultisetSort();
      mu_bedorigin.MultisetSort();
      mu_bedage.MultisetSort();
      mu_bedcare.MultisetSort();
      mu_in_.MultisetSort();
      mu_patientroomtype.MultisetSort();
      mu_patientgender.MultisetSort();
      mu_patientbirthtype.MultisetSort();
      mu_patientspecialty.MultisetSort();
      mu_patientisolation.MultisetSort();
      mu_allocated.MultisetSort();
      mu_donotallocate.MultisetSort();
      mu_patientuti.MultisetSort();
      mu_bedobstetricia.MultisetSort();
      mu_patientobstetricia.MultisetSort();
      mu_beducl.MultisetSort();
      mu_patientucl.MultisetSort();
      mu_bedavc.MultisetSort();
      mu_patientavc.MultisetSort();
      mu_bedpsiquiatria.MultisetSort();
      mu_patientpsiquiatria.MultisetSort();
      mu_bedcirurgiabariatrica.MultisetSort();
      mu_patientcirurgiabariatrica.MultisetSort();
      mu_bedginecologia.MultisetSort();
      mu_patientginecologia.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  unsigned int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientcare.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientcare.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientage.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientage.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientorigin.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientorigin.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientstay.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientstay.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_busybed.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_busybed.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedfree.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedfree.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedisolation.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedisolation.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedspecialty.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedspecialty.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedbirthtype.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedbirthtype.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedgender.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedgender.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedroomtype.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedroomtype.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_agefunc.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_agefunc.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_TIME.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_TIME.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_g_n.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_g_n.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_all_event_true.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_all_event_true.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_h_n.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_h_n.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_f_n.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_f_n.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedstay.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedstay.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedorigin.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedorigin.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedage.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedage.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedcare.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedcare.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_in_.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_in_.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientroomtype.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientroomtype.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientgender.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientgender.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientbirthtype.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientbirthtype.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientspecialty.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientspecialty.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientisolation.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientisolation.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_allocated.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_allocated.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_donotallocate.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_donotallocate.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientuti.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientuti.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedobstetricia.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedobstetricia.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientobstetricia.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientobstetricia.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_beducl.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_beducl.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientucl.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientucl.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedavc.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedavc.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientavc.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientavc.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedpsiquiatria.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedpsiquiatria.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientpsiquiatria.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientpsiquiatria.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedcirurgiabariatrica.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedcirurgiabariatrica.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientcirurgiabariatrica.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientcirurgiabariatrica.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_bedginecologia.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedginecologia.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientginecologia.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientginecologia.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "upm_epilog.hpp"
