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
#define BITS_IN_WORLD 783
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

  mu_1_patient (const char *name, int os): mu__byte(1, 6, 3, name, os) {};
  mu_1_patient (void): mu__byte(1, 6, 3) {};
  mu_1_patient (int val): mu__byte(1, 6, 3, "Parameter or function result.", 0)
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

const char *mu_1_patient::values[] = {"pacienteuti","pacienteisolamento","pacienteobstetriciaaborto","pacienteobstetricianascimento","pacientemedicinainternaminimo","pacientemedicinainternaintensivo",NULL };

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
      return ( s << mu_1_bed::values[ int(val) - 7] );
    else return ( s << "Undefined" );
  };

  mu_1_bed (const char *name, int os): mu__byte(7, 11, 3, name, os) {};
  mu_1_bed (void): mu__byte(7, 11, 3) {};
  mu_1_bed (int val): mu__byte(7, 11, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -7]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -7],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_bed::values[] = {"camaisolamento","camaobstetriciaaborto","camaobstetricianascimento","camamedicinainternaminimo","camamedicinainternaintensivo",NULL };

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
      return ( s << mu_1_care::values[ int(val) - 12] );
    else return ( s << "Undefined" );
  };

  mu_1_care (const char *name, int os): mu__byte(12, 14, 2, name, os) {};
  mu_1_care (void): mu__byte(12, 14, 2) {};
  mu_1_care (int val): mu__byte(12, 14, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -12]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -12],separator); 
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
      return ( s << mu_1_specialty::values[ int(val) - 15] );
    else return ( s << "Undefined" );
  };

  mu_1_specialty (const char *name, int os): mu__byte(15, 15, 1, name, os) {};
  mu_1_specialty (void): mu__byte(15, 15, 1) {};
  mu_1_specialty (int val): mu__byte(15, 15, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -15]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -15],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_specialty::values[] = {"medicinainterna",NULL };

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
      return ( s << mu_1_birthtype::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_birthtype (const char *name, int os): mu__byte(16, 17, 2, name, os) {};
  mu_1_birthtype (void): mu__byte(16, 17, 2) {};
  mu_1_birthtype (int val): mu__byte(16, 17, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -16]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -16],separator); 
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
      return ( s << mu_1_age::values[ int(val) - 18] );
    else return ( s << "Undefined" );
  };

  mu_1_age (const char *name, int os): mu__byte(18, 20, 2, name, os) {};
  mu_1_age (void): mu__byte(18, 20, 2) {};
  mu_1_age (int val): mu__byte(18, 20, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -18]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -18],separator); 
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
      return ( s << mu_1_gender::values[ int(val) - 21] );
    else return ( s << "Undefined" );
  };

  mu_1_gender (const char *name, int os): mu__byte(21, 22, 2, name, os) {};
  mu_1_gender (void): mu__byte(21, 22, 2) {};
  mu_1_gender (int val): mu__byte(21, 22, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -21]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -21],separator); 
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
      return ( s << mu_1_origin::values[ int(val) - 23] );
    else return ( s << "Undefined" );
  };

  mu_1_origin (const char *name, int os): mu__byte(23, 24, 2, name, os) {};
  mu_1_origin (void): mu__byte(23, 24, 2) {};
  mu_1_origin (int val): mu__byte(23, 24, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -23]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -23],separator); 
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
      return ( s << mu_1_roomtype::values[ int(val) - 25] );
    else return ( s << "Undefined" );
  };

  mu_1_roomtype (const char *name, int os): mu__byte(25, 26, 2, name, os) {};
  mu_1_roomtype (void): mu__byte(25, 26, 2) {};
  mu_1_roomtype (int val): mu__byte(25, 26, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -25]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -25],separator); 
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
      return ( s << mu_1_stay::values[ int(val) - 27] );
    else return ( s << "Undefined" );
  };

  mu_1_stay (const char *name, int os): mu__byte(27, 28, 2, name, os) {};
  mu_1_stay (void): mu__byte(27, 28, 2) {};
  mu_1_stay (int val): mu__byte(27, 28, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -27]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -27],separator); 
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
  mu_1_real_type array[ 6 ]; 
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
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 40 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 21 ) && ( index <= 22 ) )
      return array[ index - 21 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 21 ];
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

if (n) array[i].set_self_ar(n,"masculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"feminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2/*:public mu_1__type_super*/
{
 public:
  mu_1__type_1 array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 18 ) && ( index <= 20 ) )
      return array[ index - 18 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 18 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"crianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adolescente", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4/*:public mu_1__type_super*/
{
 public:
  mu_1__type_3 array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 16 ) && ( index <= 17 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
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

if (n) array[i].set_self_ar(n,"aborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6/*:public mu_1__type_super*/
{
 public:
  mu_1__type_5 array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 12 ) && ( index <= 14 ) )
      return array[ index - 12 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 12 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"minimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"intensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"semiintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8/*:public mu_1__type_super*/
{
 public:
  mu_1__type_7 array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
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
    if ( ( index >= 15 ) && ( index <= 15 ) )
      return array[ index - 15 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 15 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"medicinainterna", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10/*:public mu_1__type_super*/
{
 public:
  mu_1__type_9 array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 5; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_12 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_14 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_14 (const char *n, int os) { set_self(n, os); };
  mu_1__type_14 ( void ) {};
  virtual ~mu_1__type_14 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15/*:public mu_1__type_super*/
{
 public:
  mu_1__type_14 array[ 6 ]; 
#define awesome_mu_00_mu_1__type_14_mu_1__type_15 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_15 (const char *n, int os) { set_self(n, os); };
  mu_1__type_15 ( void ) {};
  virtual ~mu_1__type_15 ();
  mu_1__type_14& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
  mu_1__type_15& operator= (const mu_1__type_15& from)
  {
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 10 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

class mu_1__type_16/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_16 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_16 (const char *n, int os) { set_self(n, os); };
  mu_1__type_16 ( void ) {};
  virtual ~mu_1__type_16 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 21 ) && ( index <= 22 ) )
      return array[ index - 21 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 21 ];
#endif
  };
  mu_1__type_16& operator= (const mu_1__type_16& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_16& a, mu_1__type_16& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_16& a, mu_1__type_16& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"masculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"feminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_16::~mu_1__type_16()
{
}
/*** end array declaration ***/
mu_1__type_16 mu_1__type_16_undefined_var;

class mu_1__type_17/*:public mu_1__type_super*/
{
 public:
  mu_1__type_16 array[ 6 ]; 
#define awesome_mu_00_mu_1__type_16_mu_1__type_17 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_17 (const char *n, int os) { set_self(n, os); };
  mu_1__type_17 ( void ) {};
  virtual ~mu_1__type_17 ();
  mu_1__type_16& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
  mu_1__type_17& operator= (const mu_1__type_17& from)
  {
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_17::~mu_1__type_17()
{
}
/*** end array declaration ***/
mu_1__type_17 mu_1__type_17_undefined_var;

class mu_1__type_18/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 18 ) && ( index <= 20 ) )
      return array[ index - 18 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 18 ];
#endif
  };
  mu_1__type_18& operator= (const mu_1__type_18& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_18& a, mu_1__type_18& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_18& a, mu_1__type_18& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"crianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"adolescente", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_18::~mu_1__type_18()
{
}
/*** end array declaration ***/
mu_1__type_18 mu_1__type_18_undefined_var;

class mu_1__type_19/*:public mu_1__type_super*/
{
 public:
  mu_1__type_18 array[ 6 ]; 
#define awesome_mu_00_mu_1__type_18_mu_1__type_19 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_19 (const char *n, int os) { set_self(n, os); };
  mu_1__type_19 ( void ) {};
  virtual ~mu_1__type_19 ();
  mu_1__type_18& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
  mu_1__type_19& operator= (const mu_1__type_19& from)
  {
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_19::~mu_1__type_19()
{
}
/*** end array declaration ***/
mu_1__type_19 mu_1__type_19_undefined_var;

class mu_1__type_20/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
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
    if ( ( index >= 16 ) && ( index <= 17 ) )
      return array[ index - 16 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 16 ];
#endif
  };
  mu_1__type_20& operator= (const mu_1__type_20& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_20& a, mu_1__type_20& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_20& a, mu_1__type_20& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"aborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"nascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_20::~mu_1__type_20()
{
}
/*** end array declaration ***/
mu_1__type_20 mu_1__type_20_undefined_var;

class mu_1__type_21/*:public mu_1__type_super*/
{
 public:
  mu_1__type_20 array[ 6 ]; 
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
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_21::~mu_1__type_21()
{
}
/*** end array declaration ***/
mu_1__type_21 mu_1__type_21_undefined_var;

class mu_1__type_22/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 3 ]; 
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
    if ( ( index >= 12 ) && ( index <= 14 ) )
      return array[ index - 12 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 12 ];
#endif
  };
  mu_1__type_22& operator= (const mu_1__type_22& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_22& a, mu_1__type_22& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_22& a, mu_1__type_22& b)
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
    for (int i = 0; i < 3; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 3; i++)
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

if (n) array[i].set_self_ar(n,"minimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"intensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"semiintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_22::~mu_1__type_22()
{
}
/*** end array declaration ***/
mu_1__type_22 mu_1__type_22_undefined_var;

class mu_1__type_23/*:public mu_1__type_super*/
{
 public:
  mu_1__type_22 array[ 6 ]; 
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
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_23::~mu_1__type_23()
{
}
/*** end array declaration ***/
mu_1__type_23 mu_1__type_23_undefined_var;

class mu_1__type_24/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
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
    if ( ( index >= 15 ) && ( index <= 15 ) )
      return array[ index - 15 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 15 ];
#endif
  };
  mu_1__type_24& operator= (const mu_1__type_24& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_24& a, mu_1__type_24& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_24& a, mu_1__type_24& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"medicinainterna", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_24::~mu_1__type_24()
{
}
/*** end array declaration ***/
mu_1__type_24 mu_1__type_24_undefined_var;

class mu_1__type_25/*:public mu_1__type_super*/
{
 public:
  mu_1__type_24 array[ 6 ]; 
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
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_25::~mu_1__type_25()
{
}
/*** end array declaration ***/
mu_1__type_25 mu_1__type_25_undefined_var;

class mu_1__type_26/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
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
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
  mu_1__type_26& operator= (const mu_1__type_26& from)
  {
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_26::~mu_1__type_26()
{
}
/*** end array declaration ***/
mu_1__type_26 mu_1__type_26_undefined_var;

class mu_1__type_27/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_27 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_27 (const char *n, int os) { set_self(n, os); };
  mu_1__type_27 ( void ) {};
  virtual ~mu_1__type_27 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_27::~mu_1__type_27()
{
}
/*** end array declaration ***/
mu_1__type_27 mu_1__type_27_undefined_var;

class mu_1__type_28/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
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
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
  mu_1__type_28& operator= (const mu_1__type_28& from)
  {
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_28::~mu_1__type_28()
{
}
/*** end array declaration ***/
mu_1__type_28 mu_1__type_28_undefined_var;

class mu_1__type_29/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_29 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_29 (const char *n, int os) { set_self(n, os); };
  mu_1__type_29 ( void ) {};
  virtual ~mu_1__type_29 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_29::~mu_1__type_29()
{
}
/*** end array declaration ***/
mu_1__type_29 mu_1__type_29_undefined_var;

class mu_1__type_30/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_30& operator= (const mu_1__type_30& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_30::~mu_1__type_30()
{
}
/*** end array declaration ***/
mu_1__type_30 mu_1__type_30_undefined_var;

class mu_1__type_31/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_31 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_31 (const char *n, int os) { set_self(n, os); };
  mu_1__type_31 ( void ) {};
  virtual ~mu_1__type_31 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_31::~mu_1__type_31()
{
}
/*** end array declaration ***/
mu_1__type_31 mu_1__type_31_undefined_var;

class mu_1__type_32/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_32& operator= (const mu_1__type_32& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_32::~mu_1__type_32()
{
}
/*** end array declaration ***/
mu_1__type_32 mu_1__type_32_undefined_var;

class mu_1__type_33/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_33 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_33 (const char *n, int os) { set_self(n, os); };
  mu_1__type_33 ( void ) {};
  virtual ~mu_1__type_33 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_33::~mu_1__type_33()
{
}
/*** end array declaration ***/
mu_1__type_33 mu_1__type_33_undefined_var;

class mu_1__type_34/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_34& operator= (const mu_1__type_34& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_34::~mu_1__type_34()
{
}
/*** end array declaration ***/
mu_1__type_34 mu_1__type_34_undefined_var;

class mu_1__type_35/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_35 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_35 (const char *n, int os) { set_self(n, os); };
  mu_1__type_35 ( void ) {};
  virtual ~mu_1__type_35 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_35::~mu_1__type_35()
{
}
/*** end array declaration ***/
mu_1__type_35 mu_1__type_35_undefined_var;

class mu_1__type_36/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 5 ]; 
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
    if ( ( index >= 7 ) && ( index <= 11 ) )
      return array[ index - 7 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 7 ];
#endif
  };
  mu_1__type_36& operator= (const mu_1__type_36& from)
  {
    for (int i = 0; i < 5; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<5; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<5; i++) {
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
    for (int i=0; i<5; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<5; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 5; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 5; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 5; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 5; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_36::~mu_1__type_36()
{
}
/*** end array declaration ***/
mu_1__type_36 mu_1__type_36_undefined_var;

class mu_1__type_37/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 6 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_37 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_37 (const char *n, int os) { set_self(n, os); };
  mu_1__type_37 ( void ) {};
  virtual ~mu_1__type_37 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 6 ) )
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
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<6; i++) {
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
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
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
    for (int i = 0; i < 6; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 6; i++)
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
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_37::~mu_1__type_37()
{
}
/*** end array declaration ***/
mu_1__type_37 mu_1__type_37_undefined_var;

const int mu_pacienteuti = 1;
const int mu_pacienteisolamento = 2;
const int mu_pacienteobstetriciaaborto = 3;
const int mu_pacienteobstetricianascimento = 4;
const int mu_pacientemedicinainternaminimo = 5;
const int mu_pacientemedicinainternaintensivo = 6;
const int mu_camaisolamento = 7;
const int mu_camaobstetriciaaborto = 8;
const int mu_camaobstetricianascimento = 9;
const int mu_camamedicinainternaminimo = 10;
const int mu_camamedicinainternaintensivo = 11;
const int mu_minimo = 12;
const int mu_intensivo = 13;
const int mu_semiintensivo = 14;
const int mu_medicinainterna = 15;
const int mu_aborto = 16;
const int mu_nascimento = 17;
const int mu_crianca = 18;
const int mu_adulto = 19;
const int mu_adolescente = 20;
const int mu_masculino = 21;
const int mu_feminino = 22;
const int mu_eletivo = 23;
const int mu_agudo = 24;
const int mu_clinico = 25;
const int mu_cirurgico = 26;
const int mu_longapermanencia = 27;
const int mu_girorapido = 28;
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
mu_1__type_2 mu_bedgender("bedgender",315);

/*** Variable declaration ***/
mu_1__type_4 mu_bedage("bedage",335);

/*** Variable declaration ***/
mu_1__type_6 mu_bedbirthtype("bedbirthtype",365);

/*** Variable declaration ***/
mu_1__type_8 mu_bedcare("bedcare",385);

/*** Variable declaration ***/
mu_1__type_10 mu_bedspecialty("bedspecialty",415);

/*** Variable declaration ***/
mu_1__type_11 mu_bedisolation("bedisolation",425);

/*** Variable declaration ***/
mu_1__type_12 mu_bedfree("bedfree",435);

/*** Variable declaration ***/
mu_1__type_13 mu_busybed("busybed",445);

/*** Variable declaration ***/
mu_1__type_15 mu_in_("in_",455);

/*** Variable declaration ***/
mu_1__type_17 mu_patientgender("patientgender",515);

/*** Variable declaration ***/
mu_1__type_19 mu_patientage("patientage",539);

/*** Variable declaration ***/
mu_1__type_21 mu_patientbirthtype("patientbirthtype",575);

/*** Variable declaration ***/
mu_1__type_23 mu_patientcare("patientcare",599);

/*** Variable declaration ***/
mu_1__type_25 mu_patientspecialty("patientspecialty",635);

/*** Variable declaration ***/
mu_1__type_26 mu_patientisolation("patientisolation",647);

/*** Variable declaration ***/
mu_1__type_27 mu_allocated("allocated",659);

/*** Variable declaration ***/
mu_1__type_28 mu_donotallocate("donotallocate",671);

/*** Variable declaration ***/
mu_1__type_29 mu_patientuti("patientuti",683);

/*** Variable declaration ***/
mu_1__type_30 mu_bedmedicinainterna("bedmedicinainterna",695);

/*** Variable declaration ***/
mu_1__type_31 mu_patientmedicinainterna("patientmedicinainterna",705);

/*** Variable declaration ***/
mu_1__type_32 mu_bedobstetricia("bedobstetricia",717);

/*** Variable declaration ***/
mu_1__type_33 mu_patientobstetricia("patientobstetricia",727);

/*** Variable declaration ***/
mu_1__type_34 mu_beducl("beducl",739);

/*** Variable declaration ***/
mu_1__type_35 mu_patientucl("patientucl",749);

/*** Variable declaration ***/
mu_1__type_36 mu_bedavc("bedavc",761);

/*** Variable declaration ***/
mu_1__type_37 mu_patientavc("patientavc",771);

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

void mu_set_bedmedicinainterna(const mu_1_bed& mu_varbed, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_bedmedicinainterna[mu_varbed].undefine();
else
  mu_bedmedicinainterna[mu_varbed] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_bedmedicinainterna(const mu_1_bed& mu_varbed)
{
return mu_bedmedicinainterna[mu_varbed];
	Error.Error("The end of function get_bedmedicinainterna reached without returning values.");
};
/*** end function declaration ***/

void mu_set_patientmedicinainterna(const mu_1_patient& mu_p, const mu_0_boolean& mu_value)
{
if (mu_value.isundefined())
  mu_patientmedicinainterna[mu_p].undefine();
else
  mu_patientmedicinainterna[mu_p] = mu_value;
};
/*** end procedure declaration ***/

mu_0_boolean mu_get_patientmedicinainterna(const mu_1_patient& mu_p)
{
return mu_patientmedicinainterna[mu_p];
	Error.Error("The end of function get_patientmedicinainterna reached without returning values.");
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

void mu_event_check()
{
/*** Variable declaration ***/
mu_0_boolean mu_event_triggered("event_triggered",0);

mu_event_triggered = mu_true;
{
  bool mu__while_expr_39;  mu__while_expr_39 = mu_event_triggered;
int mu__counter_38 = 0;
while (mu__while_expr_39) {
if ( ++mu__counter_38 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_event_triggered = mu_false;
};
mu__while_expr_39 = mu_event_triggered;
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
  bool mu__while_expr_41;  mu__while_expr_41 = !(mu_end_while);
int mu__counter_40 = 0;
while (mu__while_expr_41) {
if ( ++mu__counter_40 > args->loopmax.value )
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
mu__while_expr_41 = !(mu_end_while);
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
  mu_bedgender.clear();
  mu_bedage.clear();
  mu_bedbirthtype.clear();
  mu_bedcare.clear();
  mu_bedspecialty.clear();
  mu_bedisolation.clear();
  mu_bedfree.clear();
  mu_busybed.clear();
  mu_in_.clear();
  mu_patientgender.clear();
  mu_patientage.clear();
  mu_patientbirthtype.clear();
  mu_patientcare.clear();
  mu_patientspecialty.clear();
  mu_patientisolation.clear();
  mu_allocated.clear();
  mu_donotallocate.clear();
  mu_patientuti.clear();
  mu_bedmedicinainterna.clear();
  mu_patientmedicinainterna.clear();
  mu_bedobstetricia.clear();
  mu_patientobstetricia.clear();
  mu_beducl.clear();
  mu_patientucl.clear();
  mu_bedavc.clear();
  mu_patientavc.clear();
}
void world_class::undefine()
{
  mu_all_event_true.undefine();
  mu_h_n.undefine();
  mu_g_n.undefine();
  mu_f_n.undefine();
  mu_TIME.undefine();
  mu_agefunc.undefine();
  mu_bedgender.undefine();
  mu_bedage.undefine();
  mu_bedbirthtype.undefine();
  mu_bedcare.undefine();
  mu_bedspecialty.undefine();
  mu_bedisolation.undefine();
  mu_bedfree.undefine();
  mu_busybed.undefine();
  mu_in_.undefine();
  mu_patientgender.undefine();
  mu_patientage.undefine();
  mu_patientbirthtype.undefine();
  mu_patientcare.undefine();
  mu_patientspecialty.undefine();
  mu_patientisolation.undefine();
  mu_allocated.undefine();
  mu_donotallocate.undefine();
  mu_patientuti.undefine();
  mu_bedmedicinainterna.undefine();
  mu_patientmedicinainterna.undefine();
  mu_bedobstetricia.undefine();
  mu_patientobstetricia.undefine();
  mu_beducl.undefine();
  mu_patientucl.undefine();
  mu_bedavc.undefine();
  mu_patientavc.undefine();
}
void world_class::reset()
{
  mu_all_event_true.reset();
  mu_h_n.reset();
  mu_g_n.reset();
  mu_f_n.reset();
  mu_TIME.reset();
  mu_agefunc.reset();
  mu_bedgender.reset();
  mu_bedage.reset();
  mu_bedbirthtype.reset();
  mu_bedcare.reset();
  mu_bedspecialty.reset();
  mu_bedisolation.reset();
  mu_bedfree.reset();
  mu_busybed.reset();
  mu_in_.reset();
  mu_patientgender.reset();
  mu_patientage.reset();
  mu_patientbirthtype.reset();
  mu_patientcare.reset();
  mu_patientspecialty.reset();
  mu_patientisolation.reset();
  mu_allocated.reset();
  mu_donotallocate.reset();
  mu_patientuti.reset();
  mu_bedmedicinainterna.reset();
  mu_patientmedicinainterna.reset();
  mu_bedobstetricia.reset();
  mu_patientobstetricia.reset();
  mu_beducl.reset();
  mu_patientucl.reset();
  mu_bedavc.reset();
  mu_patientavc.reset();
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
      interm = mu_bedmedicinainterna.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientmedicinainterna.bool_array();
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
      interm = mu_bedmedicinainterna.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientmedicinainterna.num_array();
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
  mu_bedgender.print(target, separator);
  mu_bedage.print(target, separator);
  mu_bedbirthtype.print(target, separator);
  mu_bedcare.print(target, separator);
  mu_bedspecialty.print(target, separator);
  mu_bedisolation.print(target, separator);
  mu_bedfree.print(target, separator);
  mu_busybed.print(target, separator);
  mu_in_.print(target, separator);
  mu_patientgender.print(target, separator);
  mu_patientage.print(target, separator);
  mu_patientbirthtype.print(target, separator);
  mu_patientcare.print(target, separator);
  mu_patientspecialty.print(target, separator);
  mu_patientisolation.print(target, separator);
  mu_allocated.print(target, separator);
  mu_donotallocate.print(target, separator);
  mu_patientuti.print(target, separator);
  mu_bedmedicinainterna.print(target, separator);
  mu_patientmedicinainterna.print(target, separator);
  mu_bedobstetricia.print(target, separator);
  mu_patientobstetricia.print(target, separator);
  mu_beducl.print(target, separator);
  mu_patientucl.print(target, separator);
  mu_bedavc.print(target, separator);
  mu_patientavc.print(target, separator);
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
  mu_bedgender.print(target, separator);
  mu_bedage.print(target, separator);
  mu_bedbirthtype.print(target, separator);
  mu_bedcare.print(target, separator);
  mu_bedspecialty.print(target, separator);
  mu_bedisolation.print(target, separator);
  mu_bedfree.print(target, separator);
  mu_busybed.print(target, separator);
  mu_in_.print(target, separator);
  mu_patientgender.print(target, separator);
  mu_patientage.print(target, separator);
  mu_patientbirthtype.print(target, separator);
  mu_patientcare.print(target, separator);
  mu_patientspecialty.print(target, separator);
  mu_patientisolation.print(target, separator);
  mu_allocated.print(target, separator);
  mu_donotallocate.print(target, separator);
  mu_patientuti.print(target, separator);
  mu_bedmedicinainterna.print(target, separator);
  mu_patientmedicinainterna.print(target, separator);
  mu_bedobstetricia.print(target, separator);
  mu_patientobstetricia.print(target, separator);
  mu_beducl.print(target, separator);
  mu_patientucl.print(target, separator);
  mu_bedavc.print(target, separator);
  mu_patientavc.print(target, separator);
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
  mu_bedgender.print_statistic();
  mu_bedage.print_statistic();
  mu_bedbirthtype.print_statistic();
  mu_bedcare.print_statistic();
  mu_bedspecialty.print_statistic();
  mu_bedisolation.print_statistic();
  mu_bedfree.print_statistic();
  mu_busybed.print_statistic();
  mu_in_.print_statistic();
  mu_patientgender.print_statistic();
  mu_patientage.print_statistic();
  mu_patientbirthtype.print_statistic();
  mu_patientcare.print_statistic();
  mu_patientspecialty.print_statistic();
  mu_patientisolation.print_statistic();
  mu_allocated.print_statistic();
  mu_donotallocate.print_statistic();
  mu_patientuti.print_statistic();
  mu_bedmedicinainterna.print_statistic();
  mu_patientmedicinainterna.print_statistic();
  mu_bedobstetricia.print_statistic();
  mu_patientobstetricia.print_statistic();
  mu_beducl.print_statistic();
  mu_patientucl.print_statistic();
  mu_bedavc.print_statistic();
  mu_patientavc.print_statistic();
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
    mu_bedgender.print_diff(prevstate,target,separator);
    mu_bedage.print_diff(prevstate,target,separator);
    mu_bedbirthtype.print_diff(prevstate,target,separator);
    mu_bedcare.print_diff(prevstate,target,separator);
    mu_bedspecialty.print_diff(prevstate,target,separator);
    mu_bedisolation.print_diff(prevstate,target,separator);
    mu_bedfree.print_diff(prevstate,target,separator);
    mu_busybed.print_diff(prevstate,target,separator);
    mu_in_.print_diff(prevstate,target,separator);
    mu_patientgender.print_diff(prevstate,target,separator);
    mu_patientage.print_diff(prevstate,target,separator);
    mu_patientbirthtype.print_diff(prevstate,target,separator);
    mu_patientcare.print_diff(prevstate,target,separator);
    mu_patientspecialty.print_diff(prevstate,target,separator);
    mu_patientisolation.print_diff(prevstate,target,separator);
    mu_allocated.print_diff(prevstate,target,separator);
    mu_donotallocate.print_diff(prevstate,target,separator);
    mu_patientuti.print_diff(prevstate,target,separator);
    mu_bedmedicinainterna.print_diff(prevstate,target,separator);
    mu_patientmedicinainterna.print_diff(prevstate,target,separator);
    mu_bedobstetricia.print_diff(prevstate,target,separator);
    mu_patientobstetricia.print_diff(prevstate,target,separator);
    mu_beducl.print_diff(prevstate,target,separator);
    mu_patientucl.print_diff(prevstate,target,separator);
    mu_bedavc.print_diff(prevstate,target,separator);
    mu_patientavc.print_diff(prevstate,target,separator);
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
  mu_bedgender.to_state( newstate );
  mu_bedage.to_state( newstate );
  mu_bedbirthtype.to_state( newstate );
  mu_bedcare.to_state( newstate );
  mu_bedspecialty.to_state( newstate );
  mu_bedisolation.to_state( newstate );
  mu_bedfree.to_state( newstate );
  mu_busybed.to_state( newstate );
  mu_in_.to_state( newstate );
  mu_patientgender.to_state( newstate );
  mu_patientage.to_state( newstate );
  mu_patientbirthtype.to_state( newstate );
  mu_patientcare.to_state( newstate );
  mu_patientspecialty.to_state( newstate );
  mu_patientisolation.to_state( newstate );
  mu_allocated.to_state( newstate );
  mu_donotallocate.to_state( newstate );
  mu_patientuti.to_state( newstate );
  mu_bedmedicinainterna.to_state( newstate );
  mu_patientmedicinainterna.to_state( newstate );
  mu_bedobstetricia.to_state( newstate );
  mu_patientobstetricia.to_state( newstate );
  mu_beducl.to_state( newstate );
  mu_patientucl.to_state( newstate );
  mu_bedavc.to_state( newstate );
  mu_patientavc.to_state( newstate );
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
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf(" actionteste , varbirthtype:%s, varbed:%s, p:%s", mu_varbirthtype.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
    return mu__boolexpr42;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
bool mu__boolexpr52;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr53;
bool mu__boolexpr54;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr58;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr59;
bool mu__boolexpr60;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr61;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedbirthtype[mu_varbed][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedbirthtype[mu_varbed][mu_varbirthtype])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_patientbirthtype[mu_p][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientbirthtype[mu_p][mu_varbirthtype])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr65;
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr69;
bool mu__boolexpr70;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr71;
bool mu__boolexpr72;
bool mu__boolexpr73;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr74;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr75;
bool mu__boolexpr76;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr77;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
 		if (std::string(typeid(mu_bedbirthtype[mu_varbed][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedbirthtype[mu_varbed][mu_varbirthtype])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_patientbirthtype[mu_p][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientbirthtype[mu_p][mu_varbirthtype])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr90;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr93;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_patientmedicinainterna[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientmedicinainterna[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedbirthtype[mu_varbed][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedbirthtype[mu_varbed][mu_varbirthtype]), 1)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_patientbirthtype[mu_p][mu_varbirthtype]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientbirthtype[mu_p][mu_varbirthtype]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr101;
bool mu__boolexpr102;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr106;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr107;
bool mu__boolexpr108;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr109;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    while (what_rule < 61 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
	      if (mu__boolexpr110) {
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
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf("( actionteste %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varbirthtype.Name());
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
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf(" allocatemedicinainterna , varcare:%s, varbed:%s, p:%s", mu_varcare.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_patientmedicinainterna[mu_p]) ; 
}
    return mu__boolexpr114;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr128;
bool mu__boolexpr129;
bool mu__boolexpr130;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
bool mu__boolexpr134;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr140;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr141;
bool mu__boolexpr142;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr143;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_bedcare[mu_varbed][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedcare[mu_varbed][mu_varcare])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedmedicinainterna[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedmedicinainterna[mu_varbed])); 
 		if (std::string(typeid(mu_patientcare[mu_p][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientcare[mu_p][mu_varcare])); 
 		if (std::string(typeid(mu_patientmedicinainterna[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientmedicinainterna[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr160;
bool mu__boolexpr161;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr165;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr166;
bool mu__boolexpr167;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr168;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
 		if (std::string(typeid(mu_bedcare[mu_varbed][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedcare[mu_varbed][mu_varcare])); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedfree[mu_varbed])); 
 		if (std::string(typeid(mu_bedmedicinainterna[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_bedmedicinainterna[mu_varbed])); 
 		if (std::string(typeid(mu_patientcare[mu_p][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientcare[mu_p][mu_varcare])); 
 		if (std::string(typeid(mu_patientmedicinainterna[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientmedicinainterna[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
bool mu__boolexpr172;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
bool mu__boolexpr177;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr185;
bool mu__boolexpr186;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr190;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr191;
bool mu__boolexpr192;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr193;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_bedfree[mu_varbed]) ; 
}

 		if (std::string(typeid(mu_allocated[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_allocated[mu_p]), 0)); 
 		if (std::string(typeid(mu_bedcare[mu_varbed][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedcare[mu_varbed][mu_varcare]), 1)); 
 		if (std::string(typeid(mu_bedfree[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedfree[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_bedmedicinainterna[mu_varbed]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_bedmedicinainterna[mu_varbed]), 1)); 
 		if (std::string(typeid(mu_patientcare[mu_p][mu_varcare]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientcare[mu_p][mu_varcare]), 1)); 
 		if (std::string(typeid(mu_patientmedicinainterna[mu_p]).name()).compare("12mu_0_boolean") == 0)
			interference_preconds.insert(std::make_pair(&(mu_patientmedicinainterna[mu_p]), 1)); 

    return interference_preconds;
  }

  std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
  {
    std::pair<double, double> temporal_cons;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
  mu__boolexpr196 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr210;
bool mu__boolexpr211;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr215;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr218;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 61;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    while (what_rule < 151 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_patientmedicinainterna[mu_p]) ; 
}
	      if (mu__boolexpr219) {
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
    r = what_rule - 61;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 12);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf("( allocatemedicinainterna %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varcare.Name());
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
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf(" allocateavc , vargender:%s, varbed:%s, p:%s", mu_vargender.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
    return mu__boolexpr224;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr250;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr251;
bool mu__boolexpr252;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr253;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_bedfree[mu_varbed]) ; 
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
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
bool mu__boolexpr257;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr270;
bool mu__boolexpr271;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr275;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr276;
bool mu__boolexpr277;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr278;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
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
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
bool mu__boolexpr282;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr283;
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr288;
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
bool mu__boolexpr294;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr294)) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr300;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr301;
bool mu__boolexpr302;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr303;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (mu_bedfree[mu_varbed]) ; 
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
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr313;
bool mu__boolexpr314;
bool mu__boolexpr315;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr316;
bool mu__boolexpr317;
bool mu__boolexpr318;
bool mu__boolexpr319;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr320;
bool mu__boolexpr321;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr325;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr328;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 151;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    while (what_rule < 211 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
bool mu__boolexpr332;
bool mu__boolexpr333;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
	      if (mu__boolexpr329) {
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
    r = what_rule - 151;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 21);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf("( allocateavc %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_vargender.Name());
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
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf(" allocateucl , varage:%s, varbed:%s, p:%s", mu_varage.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
    return mu__boolexpr334;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr339;
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
bool mu__boolexpr347;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr351;
bool mu__boolexpr352;
bool mu__boolexpr353;
bool mu__boolexpr354;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr355;
bool mu__boolexpr356;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr357;
bool mu__boolexpr358;
bool mu__boolexpr359;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr360;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr361;
bool mu__boolexpr362;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr363;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr364;
bool mu__boolexpr365;
bool mu__boolexpr366;
bool mu__boolexpr367;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
bool mu__boolexpr379;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr380;
bool mu__boolexpr381;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr382;
bool mu__boolexpr383;
bool mu__boolexpr384;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr385;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr386;
bool mu__boolexpr387;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr388;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
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
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr389;
bool mu__boolexpr390;
bool mu__boolexpr391;
bool mu__boolexpr392;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr392)) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr393;
bool mu__boolexpr394;
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr398;
bool mu__boolexpr399;
bool mu__boolexpr400;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr401;
bool mu__boolexpr402;
bool mu__boolexpr403;
bool mu__boolexpr404;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr403)) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr402)) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr405;
bool mu__boolexpr406;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr407;
bool mu__boolexpr408;
bool mu__boolexpr409;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr409)) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr410;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr411;
bool mu__boolexpr412;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr412)) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr413;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr414;
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = (mu_patientage[mu_p][mu_varage]) ; 
}
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
  mu__boolexpr421 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr426;
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr430;
bool mu__boolexpr431;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr431)) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr432;
bool mu__boolexpr433;
bool mu__boolexpr434;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr435;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr436;
bool mu__boolexpr437;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr437)) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr438;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 211;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    while (what_rule < 301 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr439;
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr440)) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
	      if (mu__boolexpr439) {
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
    r = what_rule - 211;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 18);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf("( allocateucl %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varage.Name());
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
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf(" allocateobstetrics , varbirthtype:%s, varbed:%s, p:%s", mu_varbirthtype.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
bool mu__boolexpr444;
bool mu__boolexpr445;
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
    return mu__boolexpr444;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr453;
bool mu__boolexpr454;
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr458;
bool mu__boolexpr459;
bool mu__boolexpr460;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr461;
bool mu__boolexpr462;
bool mu__boolexpr463;
bool mu__boolexpr464;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr463)) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr465;
bool mu__boolexpr466;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr470;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr471;
bool mu__boolexpr472;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr473;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
bool mu__boolexpr477;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr477)) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
bool mu__boolexpr481;
bool mu__boolexpr482;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr483;
bool mu__boolexpr484;
bool mu__boolexpr485;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr486;
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr490;
bool mu__boolexpr491;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr491)) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr492;
bool mu__boolexpr493;
bool mu__boolexpr494;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr493)) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr495;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr496;
bool mu__boolexpr497;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr498;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
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
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr499;
bool mu__boolexpr500;
bool mu__boolexpr501;
bool mu__boolexpr502;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr502)) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr501)) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr503;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr508;
bool mu__boolexpr509;
bool mu__boolexpr510;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr510)) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr511;
bool mu__boolexpr512;
bool mu__boolexpr513;
bool mu__boolexpr514;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr512)) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr515;
bool mu__boolexpr516;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr520;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr521;
bool mu__boolexpr522;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr523;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr524;
bool mu__boolexpr525;
bool mu__boolexpr526;
bool mu__boolexpr527;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr528;
bool mu__boolexpr529;
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr533;
bool mu__boolexpr534;
bool mu__boolexpr535;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr535)) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr534)) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr536;
bool mu__boolexpr537;
bool mu__boolexpr538;
bool mu__boolexpr539;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr538)) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr540;
bool mu__boolexpr541;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr542;
bool mu__boolexpr543;
bool mu__boolexpr544;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
  mu__boolexpr542 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr545;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr546;
bool mu__boolexpr547;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr548;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 301;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    while (what_rule < 361 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr549;
bool mu__boolexpr550;
bool mu__boolexpr551;
bool mu__boolexpr552;
bool mu__boolexpr553;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr553)) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr551)) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr550)) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
	      if (mu__boolexpr549) {
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
    r = what_rule - 301;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 16);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf("( allocateobstetrics %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varbirthtype.Name());
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
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf(" allocateisolation , varbed:%s, p:%s", mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
bool mu__boolexpr554;
bool mu__boolexpr555;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = (mu_patientisolation[mu_p]) ; 
}
    return mu__boolexpr554;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr556;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr557;
bool mu__boolexpr558;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr559;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr560;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr561;
bool mu__boolexpr562;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr562)) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr563;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
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
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr564;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr565;
bool mu__boolexpr566;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr567;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr568;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr569;
bool mu__boolexpr570;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr571;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

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
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_bedisolation[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 361;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    while (what_rule < 391 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr572;
bool mu__boolexpr573;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr573)) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = (mu_patientisolation[mu_p]) ; 
}
	      if (mu__boolexpr572) {
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
    r = what_rule - 361;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 5) + 7);
    r = r / 5;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf("( allocateisolation %s %s)", mu_p.Name(), mu_varbed.Name());
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
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return tsprintf(" allocateuti , p:%s", mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
bool mu__boolexpr574;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = (mu_patientuti[mu_p]) ; 
}
    return mu__boolexpr574;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr575;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = (mu_patientuti[mu_p]) ; 
}

 		if (std::string(typeid(mu_patientuti[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientuti[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr576;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = (mu_patientuti[mu_p]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
 		if (std::string(typeid(mu_patientuti[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientuti[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr577;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = (mu_patientuti[mu_p]) ; 
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
    mu_p.value((r % 6) + 1);
    r = r / 6;

bool mu__boolexpr578;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = (mu_patientuti[mu_p]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

    aeffs.push_back(&(mu_donotallocate[mu_p])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

    inter_effs.insert(std::make_pair(&(mu_donotallocate[mu_p]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    aeffs.push_back(&(mu_donotallocate[mu_p])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 391;
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    while (what_rule < 397 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr579;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = (mu_patientuti[mu_p]) ; 
}
	      if (mu__boolexpr579) {
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
    r = what_rule - 391;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
mu_donotallocate[mu_p] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_donotallocate[mu_p] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_donotallocate[mu_p] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

mu_donotallocate[mu_p] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 6) + 1);
    r = r / 6;
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
public:
void SetNextEnabledRule(RULE_INDEX_TYPE & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<61)
    { R1.NextRule(what_rule);
      if (what_rule<61) return; }
  if (what_rule>=61 && what_rule<151)
    { R2.NextRule(what_rule);
      if (what_rule<151) return; }
  if (what_rule>=151 && what_rule<211)
    { R3.NextRule(what_rule);
      if (what_rule<211) return; }
  if (what_rule>=211 && what_rule<301)
    { R4.NextRule(what_rule);
      if (what_rule<301) return; }
  if (what_rule>=301 && what_rule<361)
    { R5.NextRule(what_rule);
      if (what_rule<361) return; }
  if (what_rule>=361 && what_rule<391)
    { R6.NextRule(what_rule);
      if (what_rule<391) return; }
  if (what_rule>=391 && what_rule<397)
    { R7.NextRule(what_rule);
      if (what_rule<397) return; }
}
bool Condition(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=60) return R1.Condition(r-1);
  if (r>=61 && r<=150) return R2.Condition(r-61);
  if (r>=151 && r<=210) return R3.Condition(r-151);
  if (r>=211 && r<=300) return R4.Condition(r-211);
  if (r>=301 && r<=360) return R5.Condition(r-301);
  if (r>=361 && r<=390) return R6.Condition(r-361);
  if (r>=391 && r<=396) return R7.Condition(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.bool_precond_array(r-0);
  if (r>=1 && r<=60) return R1.bool_precond_array(r-1);
  if (r>=61 && r<=150) return R2.bool_precond_array(r-61);
  if (r>=151 && r<=210) return R3.bool_precond_array(r-151);
  if (r>=211 && r<=300) return R4.bool_precond_array(r-211);
  if (r>=301 && r<=360) return R5.bool_precond_array(r-301);
  if (r>=361 && r<=390) return R6.bool_precond_array(r-361);
  if (r>=391 && r<=396) return R7.bool_precond_array(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::map<mu__real*, std::pair<double,int> > num_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.num_precond_array(r-0);
  if (r>=1 && r<=60) return R1.num_precond_array(r-1);
  if (r>=61 && r<=150) return R2.num_precond_array(r-61);
  if (r>=151 && r<=210) return R3.num_precond_array(r-151);
  if (r>=211 && r<=300) return R4.num_precond_array(r-211);
  if (r>=301 && r<=360) return R5.num_precond_array(r-301);
  if (r>=361 && r<=390) return R6.num_precond_array(r-361);
  if (r>=391 && r<=396) return R7.num_precond_array(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.all_precond_array(r-0);
  if (r>=1 && r<=60) return R1.all_precond_array(r-1);
  if (r>=61 && r<=150) return R2.all_precond_array(r-61);
  if (r>=151 && r<=210) return R3.all_precond_array(r-151);
  if (r>=211 && r<=300) return R4.all_precond_array(r-211);
  if (r>=301 && r<=360) return R5.all_precond_array(r-301);
  if (r>=361 && r<=390) return R6.all_precond_array(r-361);
  if (r>=391 && r<=396) return R7.all_precond_array(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.precond_bool_interference(r-0);
  if (r>=1 && r<=60) return R1.precond_bool_interference(r-1);
  if (r>=61 && r<=150) return R2.precond_bool_interference(r-61);
  if (r>=151 && r<=210) return R3.precond_bool_interference(r-151);
  if (r>=211 && r<=300) return R4.precond_bool_interference(r-211);
  if (r>=301 && r<=360) return R5.precond_bool_interference(r-301);
  if (r>=361 && r<=390) return R6.precond_bool_interference(r-361);
  if (r>=391 && r<=396) return R7.precond_bool_interference(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.temporal_constraints(r-0);
  if (r>=1 && r<=60) return R1.temporal_constraints(r-1);
  if (r>=61 && r<=150) return R2.temporal_constraints(r-61);
  if (r>=151 && r<=210) return R3.temporal_constraints(r-151);
  if (r>=211 && r<=300) return R4.temporal_constraints(r-211);
  if (r>=301 && r<=360) return R5.temporal_constraints(r-301);
  if (r>=361 && r<=390) return R6.temporal_constraints(r-361);
  if (r>=391 && r<=396) return R7.temporal_constraints(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_bool_interference(r-0);
  if (r>=1 && r<=60) return R1.effects_bool_interference(r-1);
  if (r>=61 && r<=150) return R2.effects_bool_interference(r-61);
  if (r>=151 && r<=210) return R3.effects_bool_interference(r-151);
  if (r>=211 && r<=300) return R4.effects_bool_interference(r-211);
  if (r>=301 && r<=360) return R5.effects_bool_interference(r-301);
  if (r>=361 && r<=390) return R6.effects_bool_interference(r-361);
  if (r>=391 && r<=396) return R7.effects_bool_interference(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_add_bool_array(r-0);
  if (r>=1 && r<=60) return R1.effects_add_bool_array(r-1);
  if (r>=61 && r<=150) return R2.effects_add_bool_array(r-61);
  if (r>=151 && r<=210) return R3.effects_add_bool_array(r-151);
  if (r>=211 && r<=300) return R4.effects_add_bool_array(r-211);
  if (r>=301 && r<=360) return R5.effects_add_bool_array(r-301);
  if (r>=361 && r<=390) return R6.effects_add_bool_array(r-361);
  if (r>=391 && r<=396) return R7.effects_add_bool_array(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_num_array(r-0);
  if (r>=1 && r<=60) return R1.effects_num_array(r-1);
  if (r>=61 && r<=150) return R2.effects_num_array(r-61);
  if (r>=151 && r<=210) return R3.effects_num_array(r-151);
  if (r>=211 && r<=300) return R4.effects_num_array(r-211);
  if (r>=301 && r<=360) return R5.effects_num_array(r-301);
  if (r>=361 && r<=390) return R6.effects_num_array(r-361);
  if (r>=391 && r<=396) return R7.effects_num_array(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_all_array(r-0);
  if (r>=1 && r<=60) return R1.effects_all_array(r-1);
  if (r>=61 && r<=150) return R2.effects_all_array(r-61);
  if (r>=151 && r<=210) return R3.effects_all_array(r-151);
  if (r>=211 && r<=300) return R4.effects_all_array(r-211);
  if (r>=301 && r<=360) return R5.effects_all_array(r-301);
  if (r>=361 && r<=390) return R6.effects_all_array(r-361);
  if (r>=391 && r<=396) return R7.effects_all_array(r-391);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
void Code(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=60) { R1.Code(r-1); return; } 
  if (r>=61 && r<=150) { R2.Code(r-61); return; } 
  if (r>=151 && r<=210) { R3.Code(r-151); return; } 
  if (r>=211 && r<=300) { R4.Code(r-211); return; } 
  if (r>=301 && r<=360) { R5.Code(r-301); return; } 
  if (r>=361 && r<=390) { R6.Code(r-361); return; } 
  if (r>=391 && r<=396) { R7.Code(r-391); return; } 
}
void Code_ff(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_ff(r-0); return; } 
  if (r>=1 && r<=60) { R1.Code_ff(r-1); return; } 
  if (r>=61 && r<=150) { R2.Code_ff(r-61); return; } 
  if (r>=151 && r<=210) { R3.Code_ff(r-151); return; } 
  if (r>=211 && r<=300) { R4.Code_ff(r-211); return; } 
  if (r>=301 && r<=360) { R5.Code_ff(r-301); return; } 
  if (r>=361 && r<=390) { R6.Code_ff(r-361); return; } 
  if (r>=391 && r<=396) { R7.Code_ff(r-391); return; } 
}
void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_plus(r-0); return; } 
  if (r>=1 && r<=60) { R1.Code_numeric_ff_plus(r-1); return; } 
  if (r>=61 && r<=150) { R2.Code_numeric_ff_plus(r-61); return; } 
  if (r>=151 && r<=210) { R3.Code_numeric_ff_plus(r-151); return; } 
  if (r>=211 && r<=300) { R4.Code_numeric_ff_plus(r-211); return; } 
  if (r>=301 && r<=360) { R5.Code_numeric_ff_plus(r-301); return; } 
  if (r>=361 && r<=390) { R6.Code_numeric_ff_plus(r-361); return; } 
  if (r>=391 && r<=396) { R7.Code_numeric_ff_plus(r-391); return; } 
}
void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_minus(r-0); return; } 
  if (r>=1 && r<=60) { R1.Code_numeric_ff_minus(r-1); return; } 
  if (r>=61 && r<=150) { R2.Code_numeric_ff_minus(r-61); return; } 
  if (r>=151 && r<=210) { R3.Code_numeric_ff_minus(r-151); return; } 
  if (r>=211 && r<=300) { R4.Code_numeric_ff_minus(r-211); return; } 
  if (r>=301 && r<=360) { R5.Code_numeric_ff_minus(r-301); return; } 
  if (r>=361 && r<=390) { R6.Code_numeric_ff_minus(r-361); return; } 
  if (r>=391 && r<=396) { R7.Code_numeric_ff_minus(r-391); return; } 
}
mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_rule_clock_started(r-0); } 
  if (r>=1 && r<=60) { return R1.get_rule_clock_started(r-1); } 
  if (r>=61 && r<=150) { return R2.get_rule_clock_started(r-61); } 
  if (r>=151 && r<=210) { return R3.get_rule_clock_started(r-151); } 
  if (r>=211 && r<=300) { return R4.get_rule_clock_started(r-211); } 
  if (r>=301 && r<=360) { return R5.get_rule_clock_started(r-301); } 
  if (r>=361 && r<=390) { return R6.get_rule_clock_started(r-361); } 
  if (r>=391 && r<=396) { return R7.get_rule_clock_started(r-391); } 
}
std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_clocks(r-0); } 
  if (r>=1 && r<=60) { return R1.get_clocks(r-1); } 
  if (r>=61 && r<=150) { return R2.get_clocks(r-61); } 
  if (r>=151 && r<=210) { return R3.get_clocks(r-151); } 
  if (r>=211 && r<=300) { return R4.get_clocks(r-211); } 
  if (r>=301 && r<=360) { return R5.get_clocks(r-301); } 
  if (r>=361 && r<=390) { return R6.get_clocks(r-361); } 
  if (r>=391 && r<=396) { return R7.get_clocks(r-391); } 
}
int Priority(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=60) { return R1.Priority(); } 
  if (r>=61 && r<=150) { return R2.Priority(); } 
  if (r>=151 && r<=210) { return R3.Priority(); } 
  if (r>=211 && r<=300) { return R4.Priority(); } 
  if (r>=301 && r<=360) { return R5.Priority(); } 
  if (r>=361 && r<=390) { return R6.Priority(); } 
  if (r>=391 && r<=396) { return R7.Priority(); } 
}
char * Name(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=60) return R1.Name(r-1);
  if (r>=61 && r<=150) return R2.Name(r-61);
  if (r>=151 && r<=210) return R3.Name(r-151);
  if (r>=211 && r<=300) return R4.Name(r-211);
  if (r>=301 && r<=360) return R5.Name(r-301);
  if (r>=361 && r<=390) return R6.Name(r-361);
  if (r>=391 && r<=396) return R7.Name(r-391);
  return NULL;
}
int Duration(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Duration(r-0);
  if (r>=1 && r<=60) return R1.Duration(r-1);
  if (r>=61 && r<=150) return R2.Duration(r-61);
  if (r>=151 && r<=210) return R3.Duration(r-151);
  if (r>=211 && r<=300) return R4.Duration(r-211);
  if (r>=301 && r<=360) return R5.Duration(r-301);
  if (r>=361 && r<=390) return R6.Duration(r-361);
  if (r>=391 && r<=396) return R7.Duration(r-391);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
int Weight(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Weight(r-0);
  if (r>=1 && r<=60) return R1.Weight(r-1);
  if (r>=61 && r<=150) return R2.Weight(r-61);
  if (r>=151 && r<=210) return R3.Weight(r-151);
  if (r>=211 && r<=300) return R4.Weight(r-211);
  if (r>=301 && r<=360) return R5.Weight(r-301);
  if (r>=361 && r<=390) return R6.Weight(r-361);
  if (r>=391 && r<=396) return R7.Weight(r-391);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
 char * PDDLName(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLName(r-0);
  if (r>=1 && r<=60) return R1.PDDLName(r-1);
  if (r>=61 && r<=150) return R2.PDDLName(r-61);
  if (r>=151 && r<=210) return R3.PDDLName(r-151);
  if (r>=211 && r<=300) return R4.PDDLName(r-211);
  if (r>=301 && r<=360) return R5.PDDLName(r-301);
  if (r>=361 && r<=390) return R6.PDDLName(r-361);
  if (r>=391 && r<=396) return R7.PDDLName(r-391);
  return NULL;
}
RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLClass(r-0);
  if (r>=1 && r<=60) return R1.PDDLClass(r-1);
  if (r>=61 && r<=150) return R2.PDDLClass(r-61);
  if (r>=151 && r<=210) return R3.PDDLClass(r-151);
  if (r>=211 && r<=300) return R4.PDDLClass(r-211);
  if (r>=301 && r<=360) return R5.PDDLClass(r-301);
  if (r>=361 && r<=390) return R6.PDDLClass(r-361);
  if (r>=391 && r<=396) return R7.PDDLClass(r-391);
Error.Notrace("Internal: NextStateGenerator -- querying PDDL class for nonexisting rule.");
}
};
const RULE_INDEX_TYPE numrules = 397;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 397


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
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
{
for(int mu_vargender = 21; mu_vargender <= 22; mu_vargender++) {
mu_set_bedgender ( mu_varbed, mu_vargender, mu_false );
};
};
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
{
for(int mu_varage = 18; mu_varage <= 20; mu_varage++) {
mu_set_bedage ( mu_varbed, mu_varage, mu_false );
};
};
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
{
for(int mu_varbirthtype = 16; mu_varbirthtype <= 17; mu_varbirthtype++) {
mu_set_bedbirthtype ( mu_varbed, mu_varbirthtype, mu_false );
};
};
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
{
for(int mu_varcare = 12; mu_varcare <= 14; mu_varcare++) {
mu_set_bedcare ( mu_varbed, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
{
for(int mu_varspecialty = 15; mu_varspecialty <= 15; mu_varspecialty++) {
mu_set_bedspecialty ( mu_varbed, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_bedisolation ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_bedfree ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_busybed ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_in_ ( mu_p, mu_varbed, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
{
for(int mu_vargender = 21; mu_vargender <= 22; mu_vargender++) {
mu_set_patientgender ( mu_p, mu_vargender, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
{
for(int mu_varage = 18; mu_varage <= 20; mu_varage++) {
mu_set_patientage ( mu_p, mu_varage, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
{
for(int mu_varbirthtype = 16; mu_varbirthtype <= 17; mu_varbirthtype++) {
mu_set_patientbirthtype ( mu_p, mu_varbirthtype, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
{
for(int mu_varcare = 12; mu_varcare <= 14; mu_varcare++) {
mu_set_patientcare ( mu_p, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
{
for(int mu_varspecialty = 15; mu_varspecialty <= 15; mu_varspecialty++) {
mu_set_patientspecialty ( mu_p, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_patientisolation ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_allocated ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_donotallocate ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_patientuti ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_bedmedicinainterna ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_patientmedicinainterna ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_bedobstetricia ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_patientobstetricia ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_beducl ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_patientucl ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 7; mu_varbed <= 11; mu_varbed++) {
mu_set_bedavc ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
mu_set_patientavc ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 6; mu_p++) {
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
mu_bedfree[mu_camamedicinainternaminimo] = mu_true;
mu_bedfree[mu_camamedicinainternaintensivo] = mu_true;
mu_patientmedicinainterna[mu_pacientemedicinainternaminimo] = mu_true;
mu_patientmedicinainterna[mu_pacientemedicinainternaintensivo] = mu_true;
mu_patientcare[mu_pacientemedicinainternaminimo][mu_minimo] = mu_true;
mu_patientcare[mu_pacientemedicinainternaintensivo][mu_intensivo] = mu_true;
mu_bedcare[mu_camamedicinainternaminimo][mu_minimo] = mu_true;
mu_bedcare[mu_camamedicinainternaintensivo][mu_intensivo] = mu_true;
mu_bedspecialty[mu_camamedicinainternaminimo][mu_medicinainterna] = mu_true;
mu_bedspecialty[mu_camamedicinainternaintensivo][mu_medicinainterna] = mu_true;
mu_bedmedicinainterna[mu_camamedicinainternaminimo] = mu_true;
mu_bedmedicinainterna[mu_camamedicinainternaintensivo] = mu_true;
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
int mu__goal_580() // Goal "enjoy"
{
bool mu__boolexpr581;
bool mu__boolexpr582;
bool mu__boolexpr583;
bool mu__boolexpr584;
bool mu__boolexpr585;
bool mu__boolexpr586;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr583)) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
return mu__boolexpr581;
};

  std::set<mu_0_boolean*> get_bool_goal_conditions()
  {
    std::set<mu_0_boolean*> bool_goal_conds;
bool mu__boolexpr587;
bool mu__boolexpr588;
bool mu__boolexpr589;
bool mu__boolexpr590;
bool mu__boolexpr591;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr591 = FALSE ;
  else {
  mu__boolexpr591 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr591)) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr590)) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
bool mu__boolexpr592;
bool mu__boolexpr593;
bool mu__boolexpr594;
bool mu__boolexpr595;
bool mu__boolexpr596;
bool mu__boolexpr597;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr597)) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr596)) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
  if (!(mu__boolexpr595)) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr594)) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
bool mu__boolexpr598;
bool mu__boolexpr599;
bool mu__boolexpr600;
bool mu__boolexpr601;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
  if (!(mu__boolexpr599)) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
bool mu__boolexpr602;
bool mu__boolexpr603;
bool mu__boolexpr604;
bool mu__boolexpr605;
bool mu__boolexpr606;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr606)) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
  if (!(mu__boolexpr604)) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
bool mu__boolexpr607;
bool mu__boolexpr608;
bool mu__boolexpr609;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr608)) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
bool mu__boolexpr610;
bool mu__boolexpr611;
bool mu__boolexpr612;
bool mu__boolexpr613;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr613 = FALSE ;
  else {
  mu__boolexpr613 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr613)) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr612)) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
  if (!(mu__boolexpr611)) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
bool mu__boolexpr614;
bool mu__boolexpr615;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr615)) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = (mu_allocated[mu_pacienteobstetricianascimento]) ; 
}
bool mu__boolexpr619;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = (mu_allocated[mu_pacienteisolamento]) ; 
}
bool mu__boolexpr620;
bool mu__boolexpr621;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr621)) mu__boolexpr620 = FALSE ;
  else {
  mu__boolexpr620 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
bool mu__boolexpr622;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr622 = FALSE ;
  else {
  mu__boolexpr622 = (mu_allocated[mu_pacienteisolamento]) ; 
}

 if (std::string(typeid(mu_allocated[mu_pacienteisolamento]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteisolamento])); 
 if (std::string(typeid(mu_allocated[mu_pacientemedicinainternaintensivo]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientemedicinainternaintensivo])); 
 if (std::string(typeid(mu_allocated[mu_pacientemedicinainternaminimo]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientemedicinainternaminimo])); 
 if (std::string(typeid(mu_allocated[mu_pacienteobstetriciaaborto]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteobstetriciaaborto])); 
 if (std::string(typeid(mu_allocated[mu_pacienteobstetricianascimento]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteobstetricianascimento])); 
 if (std::string(typeid(mu_donotallocate[mu_pacienteuti]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_donotallocate[mu_pacienteuti])); 

    return bool_goal_conds;
  }

  std::map<mu__real*, std::pair<double, int> > get_numeric_goal_conditions()
  {
    std::map<mu__real*, std::pair<double, int> > numeric_goal_conds;

    return numeric_goal_conds;
  }

bool mu__condition_623() // Condition for Rule "enjoy"
{
  return mu__goal_580( );
}

bool mu__goal__00(){ return mu__condition_623(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/


// WP WP WP GOAL
const rulerec goals[] = {
{"enjoy", &mu__condition_623, NULL, },
};
const unsigned short numgoals = 1;

/********************
  Metric related stuff
 ********************/
const short metric = -1;

/********************
  Invariant records
 ********************/
int mu__invariant_624() // Invariant "todo bien"
{
bool mu__boolexpr625;
  if (!(mu_all_event_true)) mu__boolexpr625 = FALSE ;
  else {
  mu__boolexpr625 = (!(mu_DAs_violate_duration(  ))) ; 
}
return mu__boolexpr625;
};

bool mu__condition_626() // Condition for Rule "todo bien"
{
  return mu__invariant_624( );
}

bool mu__goal__01(){ return mu__condition_626(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/

const rulerec invariants[] = {
{"todo bien", &mu__condition_626, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
patientcare:NoScalarset
patientage:NoScalarset
in_:NoScalarset
bedcare:NoScalarset
bedage:NoScalarset
agefunc:NoScalarset
TIME:NoScalarset
g_n:NoScalarset
all_event_true:NoScalarset
h_n:NoScalarset
f_n:NoScalarset
bedgender:NoScalarset
bedbirthtype:NoScalarset
bedspecialty:NoScalarset
bedisolation:NoScalarset
bedfree:NoScalarset
busybed:NoScalarset
patientgender:NoScalarset
patientbirthtype:NoScalarset
patientspecialty:NoScalarset
patientisolation:NoScalarset
allocated:NoScalarset
donotallocate:NoScalarset
patientuti:NoScalarset
bedmedicinainterna:NoScalarset
patientmedicinainterna:NoScalarset
bedobstetricia:NoScalarset
patientobstetricia:NoScalarset
beducl:NoScalarset
patientucl:NoScalarset
bedavc:NoScalarset
patientavc:NoScalarset
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
        mu_in_.MultisetSort();
        mu_bedcare.MultisetSort();
        mu_bedage.MultisetSort();
        mu_agefunc.MultisetSort();
        mu_TIME.MultisetSort();
        mu_g_n.MultisetSort();
        mu_all_event_true.MultisetSort();
        mu_h_n.MultisetSort();
        mu_f_n.MultisetSort();
        mu_bedgender.MultisetSort();
        mu_bedbirthtype.MultisetSort();
        mu_bedspecialty.MultisetSort();
        mu_bedisolation.MultisetSort();
        mu_bedfree.MultisetSort();
        mu_busybed.MultisetSort();
        mu_patientgender.MultisetSort();
        mu_patientbirthtype.MultisetSort();
        mu_patientspecialty.MultisetSort();
        mu_patientisolation.MultisetSort();
        mu_allocated.MultisetSort();
        mu_donotallocate.MultisetSort();
        mu_patientuti.MultisetSort();
        mu_bedmedicinainterna.MultisetSort();
        mu_patientmedicinainterna.MultisetSort();
        mu_bedobstetricia.MultisetSort();
        mu_patientobstetricia.MultisetSort();
        mu_beducl.MultisetSort();
        mu_patientucl.MultisetSort();
        mu_bedavc.MultisetSort();
        mu_patientavc.MultisetSort();
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
  for (j=0; j<6; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<6; j++)
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
  for (j=0; j<5; j++)
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
  for (j=0; j<6; j++)
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
              mu_in_.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_in_.MultisetSort();
              mu_bedcare.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedcare.MultisetSort();
              mu_bedage.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedage.MultisetSort();
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
              mu_bedgender.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedgender.MultisetSort();
              mu_bedbirthtype.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedbirthtype.MultisetSort();
              mu_bedspecialty.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedspecialty.MultisetSort();
              mu_bedisolation.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedisolation.MultisetSort();
              mu_bedfree.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedfree.MultisetSort();
              mu_busybed.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_busybed.MultisetSort();
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
              mu_bedmedicinainterna.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedmedicinainterna.MultisetSort();
              mu_patientmedicinainterna.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientmedicinainterna.MultisetSort();
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
          mu_in_.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_in_.MultisetSort();
          mu_bedcare.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedcare.MultisetSort();
          mu_bedage.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedage.MultisetSort();
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
          mu_bedgender.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedgender.MultisetSort();
          mu_bedbirthtype.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedbirthtype.MultisetSort();
          mu_bedspecialty.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedspecialty.MultisetSort();
          mu_bedisolation.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedisolation.MultisetSort();
          mu_bedfree.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedfree.MultisetSort();
          mu_busybed.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_busybed.MultisetSort();
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
          mu_bedmedicinainterna.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedmedicinainterna.MultisetSort();
          mu_patientmedicinainterna.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientmedicinainterna.MultisetSort();
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
              mu_in_.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_in_.MultisetSort();
              mu_bedcare.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedcare.MultisetSort();
              mu_bedage.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedage.MultisetSort();
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
              mu_bedgender.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedgender.MultisetSort();
              mu_bedbirthtype.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedbirthtype.MultisetSort();
              mu_bedspecialty.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedspecialty.MultisetSort();
              mu_bedisolation.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedisolation.MultisetSort();
              mu_bedfree.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedfree.MultisetSort();
              mu_busybed.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_busybed.MultisetSort();
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
              mu_bedmedicinainterna.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedmedicinainterna.MultisetSort();
              mu_patientmedicinainterna.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientmedicinainterna.MultisetSort();
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
      mu_in_.MultisetSort();
      mu_bedcare.MultisetSort();
      mu_bedage.MultisetSort();
      mu_agefunc.MultisetSort();
      mu_TIME.MultisetSort();
      mu_g_n.MultisetSort();
      mu_all_event_true.MultisetSort();
      mu_h_n.MultisetSort();
      mu_f_n.MultisetSort();
      mu_bedgender.MultisetSort();
      mu_bedbirthtype.MultisetSort();
      mu_bedspecialty.MultisetSort();
      mu_bedisolation.MultisetSort();
      mu_bedfree.MultisetSort();
      mu_busybed.MultisetSort();
      mu_patientgender.MultisetSort();
      mu_patientbirthtype.MultisetSort();
      mu_patientspecialty.MultisetSort();
      mu_patientisolation.MultisetSort();
      mu_allocated.MultisetSort();
      mu_donotallocate.MultisetSort();
      mu_patientuti.MultisetSort();
      mu_bedmedicinainterna.MultisetSort();
      mu_patientmedicinainterna.MultisetSort();
      mu_bedobstetricia.MultisetSort();
      mu_patientobstetricia.MultisetSort();
      mu_beducl.MultisetSort();
      mu_patientucl.MultisetSort();
      mu_bedavc.MultisetSort();
      mu_patientavc.MultisetSort();
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
        mu_bedmedicinainterna.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bedmedicinainterna.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_patientmedicinainterna.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientmedicinainterna.MultisetSort();
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
