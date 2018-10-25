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
#define BITS_IN_WORLD 1717
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

  mu_1_patient (const char *name, int os): mu__byte(1, 12, 4, name, os) {};
  mu_1_patient (void): mu__byte(1, 12, 4) {};
  mu_1_patient (int val): mu__byte(1, 12, 4, "Parameter or function result.", 0)
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

const char *mu_1_patient::values[] = {"pacienteuti","pacienteisolamento","pacienteobstetriciaaborto","pacienteobstetricianascimento","pacienteucladulto","pacienteuclcrianca","pacienteavcfeminino","pacienteavcmasculino","pacientepsiquiatriafeminino","pacientepsiquiatriamasculino","pacientemedicinainternaminimo","pacientemedicinainternaintensivo",NULL };

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
      return ( s << mu_1_bed::values[ int(val) - 13] );
    else return ( s << "Undefined" );
  };

  mu_1_bed (const char *name, int os): mu__byte(13, 23, 4, name, os) {};
  mu_1_bed (void): mu__byte(13, 23, 4) {};
  mu_1_bed (int val): mu__byte(13, 23, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -13]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -13],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_bed::values[] = {"camaisolamento","camaobstetriciaaborto","camaobstetricianascimento","camaucladulto","camauclcrianca","camaavcfeminino","camaavcmasculino","camapsiquiatriafeminino","camapsiquiatriamasculino","camamedicinainternaminimo","camamedicinainternaintensivo",NULL };

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
      return ( s << mu_1_care::values[ int(val) - 24] );
    else return ( s << "Undefined" );
  };

  mu_1_care (const char *name, int os): mu__byte(24, 26, 2, name, os) {};
  mu_1_care (void): mu__byte(24, 26, 2) {};
  mu_1_care (int val): mu__byte(24, 26, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -24]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -24],separator); 
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
      return ( s << mu_1_specialty::values[ int(val) - 27] );
    else return ( s << "Undefined" );
  };

  mu_1_specialty (const char *name, int os): mu__byte(27, 27, 1, name, os) {};
  mu_1_specialty (void): mu__byte(27, 27, 1) {};
  mu_1_specialty (int val): mu__byte(27, 27, 1, "Parameter or function result.", 0)
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
      return ( s << mu_1_birthtype::values[ int(val) - 28] );
    else return ( s << "Undefined" );
  };

  mu_1_birthtype (const char *name, int os): mu__byte(28, 29, 2, name, os) {};
  mu_1_birthtype (void): mu__byte(28, 29, 2) {};
  mu_1_birthtype (int val): mu__byte(28, 29, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -28]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -28],separator); 
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
      return ( s << mu_1_age::values[ int(val) - 30] );
    else return ( s << "Undefined" );
  };

  mu_1_age (const char *name, int os): mu__byte(30, 32, 2, name, os) {};
  mu_1_age (void): mu__byte(30, 32, 2) {};
  mu_1_age (int val): mu__byte(30, 32, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -30]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -30],separator); 
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
      return ( s << mu_1_gender::values[ int(val) - 33] );
    else return ( s << "Undefined" );
  };

  mu_1_gender (const char *name, int os): mu__byte(33, 34, 2, name, os) {};
  mu_1_gender (void): mu__byte(33, 34, 2) {};
  mu_1_gender (int val): mu__byte(33, 34, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -33]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -33],separator); 
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
      return ( s << mu_1_origin::values[ int(val) - 35] );
    else return ( s << "Undefined" );
  };

  mu_1_origin (const char *name, int os): mu__byte(35, 36, 2, name, os) {};
  mu_1_origin (void): mu__byte(35, 36, 2) {};
  mu_1_origin (int val): mu__byte(35, 36, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_roomtype::values[ int(val) - 37] );
    else return ( s << "Undefined" );
  };

  mu_1_roomtype (const char *name, int os): mu__byte(37, 38, 2, name, os) {};
  mu_1_roomtype (void): mu__byte(37, 38, 2) {};
  mu_1_roomtype (int val): mu__byte(37, 38, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -37]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -37],separator); 
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
      return ( s << mu_1_stay::values[ int(val) - 39] );
    else return ( s << "Undefined" );
  };

  mu_1_stay (const char *name, int os): mu__byte(39, 40, 2, name, os) {};
  mu_1_stay (void): mu__byte(39, 40, 2) {};
  mu_1_stay (int val): mu__byte(39, 40, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -39]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -39],separator); 
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
  mu_1_real_type array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
    if ( ( index >= 33 ) && ( index <= 34 ) )
      return array[ index - 33 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 33 ];
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
  mu_1__type_1 array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 11; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
    if ( ( index >= 30 ) && ( index <= 32 ) )
      return array[ index - 30 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 30 ];
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
  mu_1__type_3 array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 11; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 28 ) && ( index <= 29 ) )
      return array[ index - 28 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 28 ];
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
  mu_1__type_5 array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 11; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
    if ( ( index >= 24 ) && ( index <= 26 ) )
      return array[ index - 24 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 24 ];
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
  mu_1__type_7 array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 11; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 27 ) && ( index <= 27 ) )
      return array[ index - 27 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 27 ];
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
  mu_1__type_9 array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 11; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_1__type_14 array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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

if (n) array[i].set_self_ar(n,"pacienteuti", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteisolamento", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetriciaaborto", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteobstetricianascimento", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 22 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 33 ) && ( index <= 34 ) )
      return array[ index - 33 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 33 ];
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
  mu_1__type_16 array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_17& a, mu_1__type_17& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 30 ) && ( index <= 32 ) )
      return array[ index - 30 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 30 ];
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
  mu_1__type_18 array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_19& a, mu_1__type_19& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 28 ) && ( index <= 29 ) )
      return array[ index - 28 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 28 ];
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
  mu_1__type_20 array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_21& a, mu_1__type_21& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 24 ) && ( index <= 26 ) )
      return array[ index - 24 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 24 ];
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
  mu_1__type_22 array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_23& a, mu_1__type_23& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 6 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 27 ) && ( index <= 27 ) )
      return array[ index - 27 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 27 ];
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
  mu_1__type_24 array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_25& a, mu_1__type_25& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_26& a, mu_1__type_26& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_27& a, mu_1__type_27& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_28& a, mu_1__type_28& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_29& a, mu_1__type_29& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_30& operator= (const mu_1__type_30& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_30& a, mu_1__type_30& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_31& a, mu_1__type_31& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_32& operator= (const mu_1__type_32& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_32& a, mu_1__type_32& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_33& a, mu_1__type_33& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_34& operator= (const mu_1__type_34& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_34& a, mu_1__type_34& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_35& a, mu_1__type_35& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacienteucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteuclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacienteavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientepsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_36& operator= (const mu_1__type_36& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_36& a, mu_1__type_36& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_37& a, mu_1__type_37& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_37::~mu_1__type_37()
{
}
/*** end array declaration ***/
mu_1__type_37 mu_1__type_37_undefined_var;

class mu_1__type_38/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 11 ]; 
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
    if ( ( index >= 13 ) && ( index <= 23 ) )
      return array[ index - 13 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 13 ];
#endif
  };
  mu_1__type_38& operator= (const mu_1__type_38& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_38& a, mu_1__type_38& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_38& a, mu_1__type_38& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
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
    for (int i = 0; i < 11; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 11; i++)
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

if (n) array[i].set_self_ar(n,"camaisolamento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetriciaaborto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaobstetricianascimento", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaucladulto", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camauclcrianca", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcfeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camaavcmasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriafeminino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camapsiquiatriamasculino", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_38::~mu_1__type_38()
{
}
/*** end array declaration ***/
mu_1__type_38 mu_1__type_38_undefined_var;

class mu_1__type_39/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 12 ]; 
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
    if ( ( index >= 1 ) && ( index <= 12 ) )
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
    for (int i = 0; i < 12; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_39& a, mu_1__type_39& b)
  {
    int w;
    for (int i=0; i<12; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_39& a, mu_1__type_39& b)
  {
    int w;
    for (int i=0; i<12; i++) {
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
    for (int i=0; i<12; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<12; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 12; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 12; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 12; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 12; i++)
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
    for (int i = 0; i < 12; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 12; i++)
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
if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_39::~mu_1__type_39()
{
}
/*** end array declaration ***/
mu_1__type_39 mu_1__type_39_undefined_var;

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
const int mu_pacientemedicinainternaminimo = 11;
const int mu_pacientemedicinainternaintensivo = 12;
const int mu_camaisolamento = 13;
const int mu_camaobstetriciaaborto = 14;
const int mu_camaobstetricianascimento = 15;
const int mu_camaucladulto = 16;
const int mu_camauclcrianca = 17;
const int mu_camaavcfeminino = 18;
const int mu_camaavcmasculino = 19;
const int mu_camapsiquiatriafeminino = 20;
const int mu_camapsiquiatriamasculino = 21;
const int mu_camamedicinainternaminimo = 22;
const int mu_camamedicinainternaintensivo = 23;
const int mu_minimo = 24;
const int mu_intensivo = 25;
const int mu_semiintensivo = 26;
const int mu_medicinainterna = 27;
const int mu_aborto = 28;
const int mu_nascimento = 29;
const int mu_crianca = 30;
const int mu_adulto = 31;
const int mu_adolescente = 32;
const int mu_masculino = 33;
const int mu_feminino = 34;
const int mu_eletivo = 35;
const int mu_agudo = 36;
const int mu_clinico = 37;
const int mu_cirurgico = 38;
const int mu_longapermanencia = 39;
const int mu_girorapido = 40;
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
mu_1__type_2 mu_bedgender("bedgender",555);

/*** Variable declaration ***/
mu_1__type_4 mu_bedage("bedage",599);

/*** Variable declaration ***/
mu_1__type_6 mu_bedbirthtype("bedbirthtype",665);

/*** Variable declaration ***/
mu_1__type_8 mu_bedcare("bedcare",709);

/*** Variable declaration ***/
mu_1__type_10 mu_bedspecialty("bedspecialty",775);

/*** Variable declaration ***/
mu_1__type_11 mu_bedisolation("bedisolation",797);

/*** Variable declaration ***/
mu_1__type_12 mu_bedfree("bedfree",819);

/*** Variable declaration ***/
mu_1__type_13 mu_busybed("busybed",841);

/*** Variable declaration ***/
mu_1__type_15 mu_in_("in_",863);

/*** Variable declaration ***/
mu_1__type_17 mu_patientgender("patientgender",1127);

/*** Variable declaration ***/
mu_1__type_19 mu_patientage("patientage",1175);

/*** Variable declaration ***/
mu_1__type_21 mu_patientbirthtype("patientbirthtype",1247);

/*** Variable declaration ***/
mu_1__type_23 mu_patientcare("patientcare",1295);

/*** Variable declaration ***/
mu_1__type_25 mu_patientspecialty("patientspecialty",1367);

/*** Variable declaration ***/
mu_1__type_26 mu_patientisolation("patientisolation",1391);

/*** Variable declaration ***/
mu_1__type_27 mu_allocated("allocated",1415);

/*** Variable declaration ***/
mu_1__type_28 mu_donotallocate("donotallocate",1439);

/*** Variable declaration ***/
mu_1__type_29 mu_patientuti("patientuti",1463);

/*** Variable declaration ***/
mu_1__type_30 mu_bedmedicinainterna("bedmedicinainterna",1487);

/*** Variable declaration ***/
mu_1__type_31 mu_patientmedicinainterna("patientmedicinainterna",1509);

/*** Variable declaration ***/
mu_1__type_32 mu_bedobstetricia("bedobstetricia",1533);

/*** Variable declaration ***/
mu_1__type_33 mu_patientobstetricia("patientobstetricia",1555);

/*** Variable declaration ***/
mu_1__type_34 mu_beducl("beducl",1579);

/*** Variable declaration ***/
mu_1__type_35 mu_patientucl("patientucl",1601);

/*** Variable declaration ***/
mu_1__type_36 mu_bedavc("bedavc",1625);

/*** Variable declaration ***/
mu_1__type_37 mu_patientavc("patientavc",1647);

/*** Variable declaration ***/
mu_1__type_38 mu_bedpsiquiatria("bedpsiquiatria",1671);

/*** Variable declaration ***/
mu_1__type_39 mu_patientpsiquiatria("patientpsiquiatria",1693);

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

void mu_event_check()
{
/*** Variable declaration ***/
mu_0_boolean mu_event_triggered("event_triggered",0);

mu_event_triggered = mu_true;
{
  bool mu__while_expr_41;  mu__while_expr_41 = mu_event_triggered;
int mu__counter_40 = 0;
while (mu__while_expr_41) {
if ( ++mu__counter_40 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_event_triggered = mu_false;
};
mu__while_expr_41 = mu_event_triggered;
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
  bool mu__while_expr_43;  mu__while_expr_43 = !(mu_end_while);
int mu__counter_42 = 0;
while (mu__while_expr_43) {
if ( ++mu__counter_42 > args->loopmax.value )
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
mu__while_expr_43 = !(mu_end_while);
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
  mu_bedpsiquiatria.clear();
  mu_patientpsiquiatria.clear();
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
  mu_bedpsiquiatria.undefine();
  mu_patientpsiquiatria.undefine();
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
  mu_bedpsiquiatria.reset();
  mu_patientpsiquiatria.reset();
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
      interm = mu_bedpsiquiatria.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientpsiquiatria.bool_array();
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
      interm = mu_bedpsiquiatria.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientpsiquiatria.num_array();
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
  mu_bedpsiquiatria.print(target, separator);
  mu_patientpsiquiatria.print(target, separator);
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
  mu_bedpsiquiatria.print(target, separator);
  mu_patientpsiquiatria.print(target, separator);
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
  mu_bedpsiquiatria.print_statistic();
  mu_patientpsiquiatria.print_statistic();
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
    mu_bedpsiquiatria.print_diff(prevstate,target,separator);
    mu_patientpsiquiatria.print_diff(prevstate,target,separator);
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
  mu_bedpsiquiatria.to_state( newstate );
  mu_patientpsiquiatria.to_state( newstate );
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" actionteste , varbirthtype:%s, varbed:%s, p:%s", mu_varbirthtype.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr44;
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
    return mu__boolexpr44;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr51;
bool mu__boolexpr52;
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
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr60;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr61;
bool mu__boolexpr62;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr63;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr67;
bool mu__boolexpr68;
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
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr71;
bool mu__boolexpr72;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr76;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr79;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
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
  mu__boolexpr85 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr87;
bool mu__boolexpr88;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr92;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr93;
bool mu__boolexpr94;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr95;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr99;
bool mu__boolexpr100;
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
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
bool mu__boolexpr103;
bool mu__boolexpr104;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr108;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr109;
bool mu__boolexpr110;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr111;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 265 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (!(mu_patientmedicinainterna[mu_p])) ; 
}
	      if (mu__boolexpr112) {
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" allocatemedicinainterna , varcare:%s, varbed:%s, p:%s", mu_varcare.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_patientmedicinainterna[mu_p]) ; 
}
    return mu__boolexpr116;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
bool mu__boolexpr124;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
bool mu__boolexpr129;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr133;
bool mu__boolexpr134;
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
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr142;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr143;
bool mu__boolexpr144;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr145;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
bool mu__boolexpr149;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr158;
bool mu__boolexpr159;
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
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr162;
bool mu__boolexpr163;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr167;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr168;
bool mu__boolexpr169;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr170;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr175;
bool mu__boolexpr176;
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
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
  mu__boolexpr185 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr192;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr195;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr196;
bool mu__boolexpr197;
bool mu__boolexpr198;
bool mu__boolexpr199;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr205;
bool mu__boolexpr206;
bool mu__boolexpr207;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr208;
bool mu__boolexpr209;
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
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr212;
bool mu__boolexpr213;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr217;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr218;
bool mu__boolexpr219;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr220;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 265;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 661 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_patientmedicinainterna[mu_p]) ; 
}
	      if (mu__boolexpr221) {
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
    r = what_rule - 265;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 3) + 24);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" allocatepsiquiatria , vargender:%s, varbed:%s, p:%s", mu_vargender.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
    return mu__boolexpr226;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr231;
bool mu__boolexpr232;
bool mu__boolexpr233;
bool mu__boolexpr234;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr247;
bool mu__boolexpr248;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr252;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr253;
bool mu__boolexpr254;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr255;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (mu_bedfree[mu_varbed]) ; 
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr268;
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr272;
bool mu__boolexpr273;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr277;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr278;
bool mu__boolexpr279;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr280;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr281;
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
bool mu__boolexpr289;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr293;
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr294)) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr297;
bool mu__boolexpr298;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr299;
bool mu__boolexpr300;
bool mu__boolexpr301;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr302;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr303;
bool mu__boolexpr304;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr305;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_bedfree[mu_varbed]) ; 
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
bool mu__boolexpr314;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr315;
bool mu__boolexpr316;
bool mu__boolexpr317;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr322;
bool mu__boolexpr323;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
bool mu__boolexpr327;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr328;
bool mu__boolexpr329;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (mu_patientpsiquiatria[mu_p]) ; 
}
bool mu__boolexpr330;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 661;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 925 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr331;
bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
bool mu__boolexpr335;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = (mu_patientpsiquiatria[mu_p]) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_bedpsiquiatria[mu_varbed]) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
	      if (mu__boolexpr331) {
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
    r = what_rule - 661;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf("( allocatepsiquiatria %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_vargender.Name());
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" allocateavc , vargender:%s, varbed:%s, p:%s", mu_vargender.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
bool mu__boolexpr340;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
    return mu__boolexpr336;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr345;
bool mu__boolexpr346;
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr353;
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr362;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr363;
bool mu__boolexpr364;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr365;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_bedfree[mu_varbed]) ; 
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
bool mu__boolexpr373;
bool mu__boolexpr374;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr378;
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr382;
bool mu__boolexpr383;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr384;
bool mu__boolexpr385;
bool mu__boolexpr386;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr386)) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr387;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr388;
bool mu__boolexpr389;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr390;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr391;
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr392)) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr400;
bool mu__boolexpr401;
bool mu__boolexpr402;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr402)) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr403;
bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr407;
bool mu__boolexpr408;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr409;
bool mu__boolexpr410;
bool mu__boolexpr411;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr410)) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr412;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr413;
bool mu__boolexpr414;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr414)) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr415;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = (mu_bedfree[mu_varbed]) ; 
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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr420;
bool mu__boolexpr421;
bool mu__boolexpr422;
bool mu__boolexpr423;
bool mu__boolexpr424;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr423)) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = (mu_bedavc[mu_varbed]) ; 
}
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
  mu__boolexpr430 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
bool mu__boolexpr432;
bool mu__boolexpr433;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = (mu_bedavc[mu_varbed]) ; 
}
bool mu__boolexpr437;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr438;
bool mu__boolexpr439;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = (mu_patientavc[mu_p]) ; 
}
bool mu__boolexpr440;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 925;
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 1189 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = (mu_patientavc[mu_p]) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = (mu_bedavc[mu_varbed]) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = (mu_patientgender[mu_p][mu_vargender]) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (mu_bedgender[mu_varbed][mu_vargender]) ; 
}
	      if (mu__boolexpr441) {
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
    r = what_rule - 925;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_gender mu_vargender;
    mu_vargender.value((r % 2) + 33);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf("( allocateavc %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_vargender.Name());
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
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" allocateucl , varage:%s, varbed:%s, p:%s", mu_varage.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
bool mu__boolexpr450;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
    return mu__boolexpr446;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr451;
bool mu__boolexpr452;
bool mu__boolexpr453;
bool mu__boolexpr454;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr455;
bool mu__boolexpr456;
bool mu__boolexpr457;
bool mu__boolexpr458;
bool mu__boolexpr459;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr460;
bool mu__boolexpr461;
bool mu__boolexpr462;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr463;
bool mu__boolexpr464;
bool mu__boolexpr465;
bool mu__boolexpr466;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr465)) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr467;
bool mu__boolexpr468;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr469;
bool mu__boolexpr470;
bool mu__boolexpr471;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr471)) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr472;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr473;
bool mu__boolexpr474;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr475;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
  mu__boolexpr478 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr477)) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr480;
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
bool mu__boolexpr484;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr485;
bool mu__boolexpr486;
bool mu__boolexpr487;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr487)) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = (mu_beducl[mu_varbed]) ; 
}
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
  mu__boolexpr490 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr490)) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr492;
bool mu__boolexpr493;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr493)) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr494;
bool mu__boolexpr495;
bool mu__boolexpr496;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr497;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr498;
bool mu__boolexpr499;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr500;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr501;
bool mu__boolexpr502;
bool mu__boolexpr503;
bool mu__boolexpr504;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr503)) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr502)) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
bool mu__boolexpr508;
bool mu__boolexpr509;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr510;
bool mu__boolexpr511;
bool mu__boolexpr512;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr512)) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr511)) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr513;
bool mu__boolexpr514;
bool mu__boolexpr515;
bool mu__boolexpr516;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr517;
bool mu__boolexpr518;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr519;
bool mu__boolexpr520;
bool mu__boolexpr521;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr520)) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr522;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr523;
bool mu__boolexpr524;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr524)) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr525;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr526;
bool mu__boolexpr527;
bool mu__boolexpr528;
bool mu__boolexpr529;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr529)) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr530;
bool mu__boolexpr531;
bool mu__boolexpr532;
bool mu__boolexpr533;
bool mu__boolexpr534;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr534)) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr533)) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr532)) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
bool mu__boolexpr535;
bool mu__boolexpr536;
bool mu__boolexpr537;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr538;
bool mu__boolexpr539;
bool mu__boolexpr540;
bool mu__boolexpr541;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr540)) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = (mu_patientage[mu_p][mu_varage]) ; 
}
bool mu__boolexpr542;
bool mu__boolexpr543;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
  mu__boolexpr542 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = (mu_beducl[mu_varbed]) ; 
}
bool mu__boolexpr547;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr548;
bool mu__boolexpr549;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr549)) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = (mu_patientucl[mu_p]) ; 
}
bool mu__boolexpr550;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1189;
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 1585 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr551;
bool mu__boolexpr552;
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = (mu_patientucl[mu_p]) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = (mu_beducl[mu_varbed]) ; 
}
  if (!(mu__boolexpr553)) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = (mu_patientage[mu_p][mu_varage]) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = (mu_bedage[mu_varbed][mu_varage]) ; 
}
	      if (mu__boolexpr551) {
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
    r = what_rule - 1189;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_age mu_varage;
    mu_varage.value((r % 3) + 30);
    r = r / 3;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf("( allocateucl %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varage.Name());
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
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" allocateobstetricia , varbirthtype:%s, varbed:%s, p:%s", mu_varbirthtype.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr556;
bool mu__boolexpr557;
bool mu__boolexpr558;
bool mu__boolexpr559;
bool mu__boolexpr560;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr560)) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr559)) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
    return mu__boolexpr556;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
  mu__boolexpr563 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr562)) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr565;
bool mu__boolexpr566;
bool mu__boolexpr567;
bool mu__boolexpr568;
bool mu__boolexpr569;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr568)) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr570;
bool mu__boolexpr571;
bool mu__boolexpr572;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr571)) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr573;
bool mu__boolexpr574;
bool mu__boolexpr575;
bool mu__boolexpr576;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr575)) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr574)) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr577;
bool mu__boolexpr578;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr579;
bool mu__boolexpr580;
bool mu__boolexpr581;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr581)) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr582;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr583;
bool mu__boolexpr584;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr585;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr586;
bool mu__boolexpr587;
bool mu__boolexpr588;
bool mu__boolexpr589;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr588)) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr587)) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr590;
bool mu__boolexpr591;
bool mu__boolexpr592;
bool mu__boolexpr593;
bool mu__boolexpr594;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr594)) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr592)) mu__boolexpr591 = FALSE ;
  else {
  mu__boolexpr591 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr591)) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr595;
bool mu__boolexpr596;
bool mu__boolexpr597;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr597)) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr596)) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr598;
bool mu__boolexpr599;
bool mu__boolexpr600;
bool mu__boolexpr601;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr601)) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr599)) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr602;
bool mu__boolexpr603;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr603)) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr604;
bool mu__boolexpr605;
bool mu__boolexpr606;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr606)) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr605)) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr607;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr608;
bool mu__boolexpr609;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr609)) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr610;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
  mu__boolexpr613 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr613)) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr612)) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr615;
bool mu__boolexpr616;
bool mu__boolexpr617;
bool mu__boolexpr618;
bool mu__boolexpr619;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr619)) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr618)) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr617)) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr616)) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr620;
bool mu__boolexpr621;
bool mu__boolexpr622;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr622 = FALSE ;
  else {
  mu__boolexpr622 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr622)) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr621)) mu__boolexpr620 = FALSE ;
  else {
  mu__boolexpr620 = (mu_bedobstetricia[mu_varbed]) ; 
}
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
  mu__boolexpr625 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr624)) mu__boolexpr623 = FALSE ;
  else {
  mu__boolexpr623 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr627;
bool mu__boolexpr628;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = FALSE ;
  else {
  mu__boolexpr627 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr629;
bool mu__boolexpr630;
bool mu__boolexpr631;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr631 = FALSE ;
  else {
  mu__boolexpr631 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr631)) mu__boolexpr630 = FALSE ;
  else {
  mu__boolexpr630 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr630)) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr632;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr633;
bool mu__boolexpr634;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr634 = FALSE ;
  else {
  mu__boolexpr634 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr634)) mu__boolexpr633 = FALSE ;
  else {
  mu__boolexpr633 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr635;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr636;
bool mu__boolexpr637;
bool mu__boolexpr638;
bool mu__boolexpr639;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr639)) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr638)) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr637)) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr640;
bool mu__boolexpr641;
bool mu__boolexpr642;
bool mu__boolexpr643;
bool mu__boolexpr644;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr644)) mu__boolexpr643 = FALSE ;
  else {
  mu__boolexpr643 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr643)) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = FALSE ;
  else {
  mu__boolexpr641 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr641)) mu__boolexpr640 = FALSE ;
  else {
  mu__boolexpr640 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
bool mu__boolexpr645;
bool mu__boolexpr646;
bool mu__boolexpr647;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr647)) mu__boolexpr646 = FALSE ;
  else {
  mu__boolexpr646 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr646)) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr648;
bool mu__boolexpr649;
bool mu__boolexpr650;
bool mu__boolexpr651;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr651)) mu__boolexpr650 = FALSE ;
  else {
  mu__boolexpr650 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr650)) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
bool mu__boolexpr652;
bool mu__boolexpr653;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr653 = FALSE ;
  else {
  mu__boolexpr653 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr653)) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr654;
bool mu__boolexpr655;
bool mu__boolexpr656;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr656)) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr655)) mu__boolexpr654 = FALSE ;
  else {
  mu__boolexpr654 = (mu_bedobstetricia[mu_varbed]) ; 
}
bool mu__boolexpr657;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr658;
bool mu__boolexpr659;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = (mu_patientobstetricia[mu_p]) ; 
}
bool mu__boolexpr660;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1585;
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 1849 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr661;
bool mu__boolexpr662;
bool mu__boolexpr663;
bool mu__boolexpr664;
bool mu__boolexpr665;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr665)) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = (mu_patientobstetricia[mu_p]) ; 
}
  if (!(mu__boolexpr664)) mu__boolexpr663 = FALSE ;
  else {
  mu__boolexpr663 = (mu_bedobstetricia[mu_varbed]) ; 
}
  if (!(mu__boolexpr663)) mu__boolexpr662 = FALSE ;
  else {
  mu__boolexpr662 = (mu_bedbirthtype[mu_varbed][mu_varbirthtype]) ; 
}
  if (!(mu__boolexpr662)) mu__boolexpr661 = FALSE ;
  else {
  mu__boolexpr661 = (mu_patientbirthtype[mu_p][mu_varbirthtype]) ; 
}
	      if (mu__boolexpr661) {
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
    r = what_rule - 1585;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_birthtype mu_varbirthtype;
    mu_varbirthtype.value((r % 2) + 28);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf("( allocateobstetricia %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varbirthtype.Name());
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
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" allocateisolation , varbed:%s, p:%s", mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr666;
bool mu__boolexpr667;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr667)) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = (mu_patientisolation[mu_p]) ; 
}
    return mu__boolexpr666;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr668;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr669;
bool mu__boolexpr670;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr670 = FALSE ;
  else {
  mu__boolexpr670 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr670)) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr671;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr671 = FALSE ;
  else {
  mu__boolexpr671 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr672;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr673;
bool mu__boolexpr674;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr674)) mu__boolexpr673 = FALSE ;
  else {
  mu__boolexpr673 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr675;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr676;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr677;
bool mu__boolexpr678;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr678 = FALSE ;
  else {
  mu__boolexpr678 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr678)) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr679;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr680;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr681;
bool mu__boolexpr682;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr682)) mu__boolexpr681 = FALSE ;
  else {
  mu__boolexpr681 = (mu_patientisolation[mu_p]) ; 
}
bool mu__boolexpr683;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

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
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_bedisolation[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1849;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 1981 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr684;
bool mu__boolexpr685;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr685)) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = (mu_patientisolation[mu_p]) ; 
}
	      if (mu__boolexpr684) {
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
    r = what_rule - 1849;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;
mu_bedfree[mu_varbed] = mu_false;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
mu_bedisolation[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 11) + 13);
    r = r / 11;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf("( allocateisolation %s %s)", mu_p.Name(), mu_varbed.Name());
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
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return tsprintf(" allocateuti , p:%s", mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
bool mu__boolexpr686;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = (mu_patientuti[mu_p]) ; 
}
    return mu__boolexpr686;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr687;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = (mu_patientuti[mu_p]) ; 
}

 		if (std::string(typeid(mu_patientuti[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientuti[mu_p])); 

    return preconds;
  }

  std::map<mu__real*, std::pair<double, int> > num_precond_array(RULE_INDEX_TYPE r)
  {
    std::map<mu__real*, std::pair<double, int> > preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr688;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = (mu_patientuti[mu_p]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
 		if (std::string(typeid(mu_patientuti[mu_p]).name()).compare("12mu_0_boolean") == 0)
			preconds.push_back(&(mu_patientuti[mu_p])); 

    return preconds;
  }

  std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*, int> > interference_preconds;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr689;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = (mu_patientuti[mu_p]) ; 
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
    mu_p.value((r % 12) + 1);
    r = r / 12;

bool mu__boolexpr690;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr690 = FALSE ;
  else {
  mu__boolexpr690 = (mu_patientuti[mu_p]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    aeffs.push_back(&(mu_donotallocate[mu_p])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

    inter_effs.insert(std::make_pair(&(mu_donotallocate[mu_p]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    aeffs.push_back(&(mu_donotallocate[mu_p])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1981;
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    while (what_rule < 1993 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr691;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = (mu_patientuti[mu_p]) ; 
}
	      if (mu__boolexpr691) {
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
    r = what_rule - 1981;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
mu_donotallocate[mu_p] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_donotallocate[mu_p] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_donotallocate[mu_p] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

mu_donotallocate[mu_p] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_patient mu_p;
    mu_p.value((r % 12) + 1);
    r = r / 12;
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
public:
void SetNextEnabledRule(RULE_INDEX_TYPE & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<265)
    { R1.NextRule(what_rule);
      if (what_rule<265) return; }
  if (what_rule>=265 && what_rule<661)
    { R2.NextRule(what_rule);
      if (what_rule<661) return; }
  if (what_rule>=661 && what_rule<925)
    { R3.NextRule(what_rule);
      if (what_rule<925) return; }
  if (what_rule>=925 && what_rule<1189)
    { R4.NextRule(what_rule);
      if (what_rule<1189) return; }
  if (what_rule>=1189 && what_rule<1585)
    { R5.NextRule(what_rule);
      if (what_rule<1585) return; }
  if (what_rule>=1585 && what_rule<1849)
    { R6.NextRule(what_rule);
      if (what_rule<1849) return; }
  if (what_rule>=1849 && what_rule<1981)
    { R7.NextRule(what_rule);
      if (what_rule<1981) return; }
  if (what_rule>=1981 && what_rule<1993)
    { R8.NextRule(what_rule);
      if (what_rule<1993) return; }
}
bool Condition(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=264) return R1.Condition(r-1);
  if (r>=265 && r<=660) return R2.Condition(r-265);
  if (r>=661 && r<=924) return R3.Condition(r-661);
  if (r>=925 && r<=1188) return R4.Condition(r-925);
  if (r>=1189 && r<=1584) return R5.Condition(r-1189);
  if (r>=1585 && r<=1848) return R6.Condition(r-1585);
  if (r>=1849 && r<=1980) return R7.Condition(r-1849);
  if (r>=1981 && r<=1992) return R8.Condition(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.bool_precond_array(r-0);
  if (r>=1 && r<=264) return R1.bool_precond_array(r-1);
  if (r>=265 && r<=660) return R2.bool_precond_array(r-265);
  if (r>=661 && r<=924) return R3.bool_precond_array(r-661);
  if (r>=925 && r<=1188) return R4.bool_precond_array(r-925);
  if (r>=1189 && r<=1584) return R5.bool_precond_array(r-1189);
  if (r>=1585 && r<=1848) return R6.bool_precond_array(r-1585);
  if (r>=1849 && r<=1980) return R7.bool_precond_array(r-1849);
  if (r>=1981 && r<=1992) return R8.bool_precond_array(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::map<mu__real*, std::pair<double,int> > num_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.num_precond_array(r-0);
  if (r>=1 && r<=264) return R1.num_precond_array(r-1);
  if (r>=265 && r<=660) return R2.num_precond_array(r-265);
  if (r>=661 && r<=924) return R3.num_precond_array(r-661);
  if (r>=925 && r<=1188) return R4.num_precond_array(r-925);
  if (r>=1189 && r<=1584) return R5.num_precond_array(r-1189);
  if (r>=1585 && r<=1848) return R6.num_precond_array(r-1585);
  if (r>=1849 && r<=1980) return R7.num_precond_array(r-1849);
  if (r>=1981 && r<=1992) return R8.num_precond_array(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.all_precond_array(r-0);
  if (r>=1 && r<=264) return R1.all_precond_array(r-1);
  if (r>=265 && r<=660) return R2.all_precond_array(r-265);
  if (r>=661 && r<=924) return R3.all_precond_array(r-661);
  if (r>=925 && r<=1188) return R4.all_precond_array(r-925);
  if (r>=1189 && r<=1584) return R5.all_precond_array(r-1189);
  if (r>=1585 && r<=1848) return R6.all_precond_array(r-1585);
  if (r>=1849 && r<=1980) return R7.all_precond_array(r-1849);
  if (r>=1981 && r<=1992) return R8.all_precond_array(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.precond_bool_interference(r-0);
  if (r>=1 && r<=264) return R1.precond_bool_interference(r-1);
  if (r>=265 && r<=660) return R2.precond_bool_interference(r-265);
  if (r>=661 && r<=924) return R3.precond_bool_interference(r-661);
  if (r>=925 && r<=1188) return R4.precond_bool_interference(r-925);
  if (r>=1189 && r<=1584) return R5.precond_bool_interference(r-1189);
  if (r>=1585 && r<=1848) return R6.precond_bool_interference(r-1585);
  if (r>=1849 && r<=1980) return R7.precond_bool_interference(r-1849);
  if (r>=1981 && r<=1992) return R8.precond_bool_interference(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.temporal_constraints(r-0);
  if (r>=1 && r<=264) return R1.temporal_constraints(r-1);
  if (r>=265 && r<=660) return R2.temporal_constraints(r-265);
  if (r>=661 && r<=924) return R3.temporal_constraints(r-661);
  if (r>=925 && r<=1188) return R4.temporal_constraints(r-925);
  if (r>=1189 && r<=1584) return R5.temporal_constraints(r-1189);
  if (r>=1585 && r<=1848) return R6.temporal_constraints(r-1585);
  if (r>=1849 && r<=1980) return R7.temporal_constraints(r-1849);
  if (r>=1981 && r<=1992) return R8.temporal_constraints(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_bool_interference(r-0);
  if (r>=1 && r<=264) return R1.effects_bool_interference(r-1);
  if (r>=265 && r<=660) return R2.effects_bool_interference(r-265);
  if (r>=661 && r<=924) return R3.effects_bool_interference(r-661);
  if (r>=925 && r<=1188) return R4.effects_bool_interference(r-925);
  if (r>=1189 && r<=1584) return R5.effects_bool_interference(r-1189);
  if (r>=1585 && r<=1848) return R6.effects_bool_interference(r-1585);
  if (r>=1849 && r<=1980) return R7.effects_bool_interference(r-1849);
  if (r>=1981 && r<=1992) return R8.effects_bool_interference(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_add_bool_array(r-0);
  if (r>=1 && r<=264) return R1.effects_add_bool_array(r-1);
  if (r>=265 && r<=660) return R2.effects_add_bool_array(r-265);
  if (r>=661 && r<=924) return R3.effects_add_bool_array(r-661);
  if (r>=925 && r<=1188) return R4.effects_add_bool_array(r-925);
  if (r>=1189 && r<=1584) return R5.effects_add_bool_array(r-1189);
  if (r>=1585 && r<=1848) return R6.effects_add_bool_array(r-1585);
  if (r>=1849 && r<=1980) return R7.effects_add_bool_array(r-1849);
  if (r>=1981 && r<=1992) return R8.effects_add_bool_array(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_num_array(r-0);
  if (r>=1 && r<=264) return R1.effects_num_array(r-1);
  if (r>=265 && r<=660) return R2.effects_num_array(r-265);
  if (r>=661 && r<=924) return R3.effects_num_array(r-661);
  if (r>=925 && r<=1188) return R4.effects_num_array(r-925);
  if (r>=1189 && r<=1584) return R5.effects_num_array(r-1189);
  if (r>=1585 && r<=1848) return R6.effects_num_array(r-1585);
  if (r>=1849 && r<=1980) return R7.effects_num_array(r-1849);
  if (r>=1981 && r<=1992) return R8.effects_num_array(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_all_array(r-0);
  if (r>=1 && r<=264) return R1.effects_all_array(r-1);
  if (r>=265 && r<=660) return R2.effects_all_array(r-265);
  if (r>=661 && r<=924) return R3.effects_all_array(r-661);
  if (r>=925 && r<=1188) return R4.effects_all_array(r-925);
  if (r>=1189 && r<=1584) return R5.effects_all_array(r-1189);
  if (r>=1585 && r<=1848) return R6.effects_all_array(r-1585);
  if (r>=1849 && r<=1980) return R7.effects_all_array(r-1849);
  if (r>=1981 && r<=1992) return R8.effects_all_array(r-1981);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
void Code(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=264) { R1.Code(r-1); return; } 
  if (r>=265 && r<=660) { R2.Code(r-265); return; } 
  if (r>=661 && r<=924) { R3.Code(r-661); return; } 
  if (r>=925 && r<=1188) { R4.Code(r-925); return; } 
  if (r>=1189 && r<=1584) { R5.Code(r-1189); return; } 
  if (r>=1585 && r<=1848) { R6.Code(r-1585); return; } 
  if (r>=1849 && r<=1980) { R7.Code(r-1849); return; } 
  if (r>=1981 && r<=1992) { R8.Code(r-1981); return; } 
}
void Code_ff(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_ff(r-0); return; } 
  if (r>=1 && r<=264) { R1.Code_ff(r-1); return; } 
  if (r>=265 && r<=660) { R2.Code_ff(r-265); return; } 
  if (r>=661 && r<=924) { R3.Code_ff(r-661); return; } 
  if (r>=925 && r<=1188) { R4.Code_ff(r-925); return; } 
  if (r>=1189 && r<=1584) { R5.Code_ff(r-1189); return; } 
  if (r>=1585 && r<=1848) { R6.Code_ff(r-1585); return; } 
  if (r>=1849 && r<=1980) { R7.Code_ff(r-1849); return; } 
  if (r>=1981 && r<=1992) { R8.Code_ff(r-1981); return; } 
}
void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_plus(r-0); return; } 
  if (r>=1 && r<=264) { R1.Code_numeric_ff_plus(r-1); return; } 
  if (r>=265 && r<=660) { R2.Code_numeric_ff_plus(r-265); return; } 
  if (r>=661 && r<=924) { R3.Code_numeric_ff_plus(r-661); return; } 
  if (r>=925 && r<=1188) { R4.Code_numeric_ff_plus(r-925); return; } 
  if (r>=1189 && r<=1584) { R5.Code_numeric_ff_plus(r-1189); return; } 
  if (r>=1585 && r<=1848) { R6.Code_numeric_ff_plus(r-1585); return; } 
  if (r>=1849 && r<=1980) { R7.Code_numeric_ff_plus(r-1849); return; } 
  if (r>=1981 && r<=1992) { R8.Code_numeric_ff_plus(r-1981); return; } 
}
void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_minus(r-0); return; } 
  if (r>=1 && r<=264) { R1.Code_numeric_ff_minus(r-1); return; } 
  if (r>=265 && r<=660) { R2.Code_numeric_ff_minus(r-265); return; } 
  if (r>=661 && r<=924) { R3.Code_numeric_ff_minus(r-661); return; } 
  if (r>=925 && r<=1188) { R4.Code_numeric_ff_minus(r-925); return; } 
  if (r>=1189 && r<=1584) { R5.Code_numeric_ff_minus(r-1189); return; } 
  if (r>=1585 && r<=1848) { R6.Code_numeric_ff_minus(r-1585); return; } 
  if (r>=1849 && r<=1980) { R7.Code_numeric_ff_minus(r-1849); return; } 
  if (r>=1981 && r<=1992) { R8.Code_numeric_ff_minus(r-1981); return; } 
}
mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_rule_clock_started(r-0); } 
  if (r>=1 && r<=264) { return R1.get_rule_clock_started(r-1); } 
  if (r>=265 && r<=660) { return R2.get_rule_clock_started(r-265); } 
  if (r>=661 && r<=924) { return R3.get_rule_clock_started(r-661); } 
  if (r>=925 && r<=1188) { return R4.get_rule_clock_started(r-925); } 
  if (r>=1189 && r<=1584) { return R5.get_rule_clock_started(r-1189); } 
  if (r>=1585 && r<=1848) { return R6.get_rule_clock_started(r-1585); } 
  if (r>=1849 && r<=1980) { return R7.get_rule_clock_started(r-1849); } 
  if (r>=1981 && r<=1992) { return R8.get_rule_clock_started(r-1981); } 
}
std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_clocks(r-0); } 
  if (r>=1 && r<=264) { return R1.get_clocks(r-1); } 
  if (r>=265 && r<=660) { return R2.get_clocks(r-265); } 
  if (r>=661 && r<=924) { return R3.get_clocks(r-661); } 
  if (r>=925 && r<=1188) { return R4.get_clocks(r-925); } 
  if (r>=1189 && r<=1584) { return R5.get_clocks(r-1189); } 
  if (r>=1585 && r<=1848) { return R6.get_clocks(r-1585); } 
  if (r>=1849 && r<=1980) { return R7.get_clocks(r-1849); } 
  if (r>=1981 && r<=1992) { return R8.get_clocks(r-1981); } 
}
int Priority(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=264) { return R1.Priority(); } 
  if (r>=265 && r<=660) { return R2.Priority(); } 
  if (r>=661 && r<=924) { return R3.Priority(); } 
  if (r>=925 && r<=1188) { return R4.Priority(); } 
  if (r>=1189 && r<=1584) { return R5.Priority(); } 
  if (r>=1585 && r<=1848) { return R6.Priority(); } 
  if (r>=1849 && r<=1980) { return R7.Priority(); } 
  if (r>=1981 && r<=1992) { return R8.Priority(); } 
}
char * Name(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=264) return R1.Name(r-1);
  if (r>=265 && r<=660) return R2.Name(r-265);
  if (r>=661 && r<=924) return R3.Name(r-661);
  if (r>=925 && r<=1188) return R4.Name(r-925);
  if (r>=1189 && r<=1584) return R5.Name(r-1189);
  if (r>=1585 && r<=1848) return R6.Name(r-1585);
  if (r>=1849 && r<=1980) return R7.Name(r-1849);
  if (r>=1981 && r<=1992) return R8.Name(r-1981);
  return NULL;
}
int Duration(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Duration(r-0);
  if (r>=1 && r<=264) return R1.Duration(r-1);
  if (r>=265 && r<=660) return R2.Duration(r-265);
  if (r>=661 && r<=924) return R3.Duration(r-661);
  if (r>=925 && r<=1188) return R4.Duration(r-925);
  if (r>=1189 && r<=1584) return R5.Duration(r-1189);
  if (r>=1585 && r<=1848) return R6.Duration(r-1585);
  if (r>=1849 && r<=1980) return R7.Duration(r-1849);
  if (r>=1981 && r<=1992) return R8.Duration(r-1981);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
int Weight(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Weight(r-0);
  if (r>=1 && r<=264) return R1.Weight(r-1);
  if (r>=265 && r<=660) return R2.Weight(r-265);
  if (r>=661 && r<=924) return R3.Weight(r-661);
  if (r>=925 && r<=1188) return R4.Weight(r-925);
  if (r>=1189 && r<=1584) return R5.Weight(r-1189);
  if (r>=1585 && r<=1848) return R6.Weight(r-1585);
  if (r>=1849 && r<=1980) return R7.Weight(r-1849);
  if (r>=1981 && r<=1992) return R8.Weight(r-1981);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
 char * PDDLName(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLName(r-0);
  if (r>=1 && r<=264) return R1.PDDLName(r-1);
  if (r>=265 && r<=660) return R2.PDDLName(r-265);
  if (r>=661 && r<=924) return R3.PDDLName(r-661);
  if (r>=925 && r<=1188) return R4.PDDLName(r-925);
  if (r>=1189 && r<=1584) return R5.PDDLName(r-1189);
  if (r>=1585 && r<=1848) return R6.PDDLName(r-1585);
  if (r>=1849 && r<=1980) return R7.PDDLName(r-1849);
  if (r>=1981 && r<=1992) return R8.PDDLName(r-1981);
  return NULL;
}
RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLClass(r-0);
  if (r>=1 && r<=264) return R1.PDDLClass(r-1);
  if (r>=265 && r<=660) return R2.PDDLClass(r-265);
  if (r>=661 && r<=924) return R3.PDDLClass(r-661);
  if (r>=925 && r<=1188) return R4.PDDLClass(r-925);
  if (r>=1189 && r<=1584) return R5.PDDLClass(r-1189);
  if (r>=1585 && r<=1848) return R6.PDDLClass(r-1585);
  if (r>=1849 && r<=1980) return R7.PDDLClass(r-1849);
  if (r>=1981 && r<=1992) return R8.PDDLClass(r-1981);
Error.Notrace("Internal: NextStateGenerator -- querying PDDL class for nonexisting rule.");
}
};
const RULE_INDEX_TYPE numrules = 1993;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 1993


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
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
{
for(int mu_vargender = 33; mu_vargender <= 34; mu_vargender++) {
mu_set_bedgender ( mu_varbed, mu_vargender, mu_false );
};
};
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
{
for(int mu_varage = 30; mu_varage <= 32; mu_varage++) {
mu_set_bedage ( mu_varbed, mu_varage, mu_false );
};
};
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
{
for(int mu_varbirthtype = 28; mu_varbirthtype <= 29; mu_varbirthtype++) {
mu_set_bedbirthtype ( mu_varbed, mu_varbirthtype, mu_false );
};
};
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
{
for(int mu_varcare = 24; mu_varcare <= 26; mu_varcare++) {
mu_set_bedcare ( mu_varbed, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
{
for(int mu_varspecialty = 27; mu_varspecialty <= 27; mu_varspecialty++) {
mu_set_bedspecialty ( mu_varbed, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_bedisolation ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_bedfree ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_busybed ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_in_ ( mu_p, mu_varbed, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
{
for(int mu_vargender = 33; mu_vargender <= 34; mu_vargender++) {
mu_set_patientgender ( mu_p, mu_vargender, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
{
for(int mu_varage = 30; mu_varage <= 32; mu_varage++) {
mu_set_patientage ( mu_p, mu_varage, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
{
for(int mu_varbirthtype = 28; mu_varbirthtype <= 29; mu_varbirthtype++) {
mu_set_patientbirthtype ( mu_p, mu_varbirthtype, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
{
for(int mu_varcare = 24; mu_varcare <= 26; mu_varcare++) {
mu_set_patientcare ( mu_p, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
{
for(int mu_varspecialty = 27; mu_varspecialty <= 27; mu_varspecialty++) {
mu_set_patientspecialty ( mu_p, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_patientisolation ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_allocated ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_donotallocate ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_patientuti ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_bedmedicinainterna ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_patientmedicinainterna ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_bedobstetricia ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_patientobstetricia ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_beducl ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_patientucl ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_bedavc ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_patientavc ( mu_p, mu_false );
};
};
{
for(int mu_varbed = 13; mu_varbed <= 23; mu_varbed++) {
mu_set_bedpsiquiatria ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
mu_set_patientpsiquiatria ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 12; mu_p++) {
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
int mu__goal_692() // Goal "enjoy"
{
bool mu__boolexpr693;
bool mu__boolexpr694;
bool mu__boolexpr695;
bool mu__boolexpr696;
bool mu__boolexpr697;
bool mu__boolexpr698;
bool mu__boolexpr699;
bool mu__boolexpr700;
bool mu__boolexpr701;
bool mu__boolexpr702;
bool mu__boolexpr703;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr703 = FALSE ;
  else {
  mu__boolexpr703 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr703)) mu__boolexpr702 = FALSE ;
  else {
  mu__boolexpr702 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr702)) mu__boolexpr701 = FALSE ;
  else {
  mu__boolexpr701 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr701)) mu__boolexpr700 = FALSE ;
  else {
  mu__boolexpr700 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr700)) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr699)) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr697)) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
  if (!(mu__boolexpr696)) mu__boolexpr695 = FALSE ;
  else {
  mu__boolexpr695 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr695)) mu__boolexpr694 = FALSE ;
  else {
  mu__boolexpr694 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
  if (!(mu__boolexpr694)) mu__boolexpr693 = FALSE ;
  else {
  mu__boolexpr693 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
return mu__boolexpr693;
};

  std::set<mu_0_boolean*> get_bool_goal_conditions()
  {
    std::set<mu_0_boolean*> bool_goal_conds;
bool mu__boolexpr704;
bool mu__boolexpr705;
bool mu__boolexpr706;
bool mu__boolexpr707;
bool mu__boolexpr708;
bool mu__boolexpr709;
bool mu__boolexpr710;
bool mu__boolexpr711;
bool mu__boolexpr712;
bool mu__boolexpr713;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr713 = FALSE ;
  else {
  mu__boolexpr713 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr713)) mu__boolexpr712 = FALSE ;
  else {
  mu__boolexpr712 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr712)) mu__boolexpr711 = FALSE ;
  else {
  mu__boolexpr711 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr711)) mu__boolexpr710 = FALSE ;
  else {
  mu__boolexpr710 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr710)) mu__boolexpr709 = FALSE ;
  else {
  mu__boolexpr709 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr709)) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr707)) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
bool mu__boolexpr714;
bool mu__boolexpr715;
bool mu__boolexpr716;
bool mu__boolexpr717;
bool mu__boolexpr718;
bool mu__boolexpr719;
bool mu__boolexpr720;
bool mu__boolexpr721;
bool mu__boolexpr722;
bool mu__boolexpr723;
bool mu__boolexpr724;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr724)) mu__boolexpr723 = FALSE ;
  else {
  mu__boolexpr723 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr723)) mu__boolexpr722 = FALSE ;
  else {
  mu__boolexpr722 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr722)) mu__boolexpr721 = FALSE ;
  else {
  mu__boolexpr721 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr721)) mu__boolexpr720 = FALSE ;
  else {
  mu__boolexpr720 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr720)) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr719)) mu__boolexpr718 = FALSE ;
  else {
  mu__boolexpr718 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr718)) mu__boolexpr717 = FALSE ;
  else {
  mu__boolexpr717 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
  if (!(mu__boolexpr717)) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr716)) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
bool mu__boolexpr725;
bool mu__boolexpr726;
bool mu__boolexpr727;
bool mu__boolexpr728;
bool mu__boolexpr729;
bool mu__boolexpr730;
bool mu__boolexpr731;
bool mu__boolexpr732;
bool mu__boolexpr733;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr733 = FALSE ;
  else {
  mu__boolexpr733 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr733)) mu__boolexpr732 = FALSE ;
  else {
  mu__boolexpr732 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr732)) mu__boolexpr731 = FALSE ;
  else {
  mu__boolexpr731 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr731)) mu__boolexpr730 = FALSE ;
  else {
  mu__boolexpr730 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr730)) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr729)) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = FALSE ;
  else {
  mu__boolexpr727 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr727)) mu__boolexpr726 = FALSE ;
  else {
  mu__boolexpr726 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
  if (!(mu__boolexpr726)) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
bool mu__boolexpr734;
bool mu__boolexpr735;
bool mu__boolexpr736;
bool mu__boolexpr737;
bool mu__boolexpr738;
bool mu__boolexpr739;
bool mu__boolexpr740;
bool mu__boolexpr741;
bool mu__boolexpr742;
bool mu__boolexpr743;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr743 = FALSE ;
  else {
  mu__boolexpr743 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr743)) mu__boolexpr742 = FALSE ;
  else {
  mu__boolexpr742 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr742)) mu__boolexpr741 = FALSE ;
  else {
  mu__boolexpr741 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr741)) mu__boolexpr740 = FALSE ;
  else {
  mu__boolexpr740 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr740)) mu__boolexpr739 = FALSE ;
  else {
  mu__boolexpr739 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr739)) mu__boolexpr738 = FALSE ;
  else {
  mu__boolexpr738 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr738)) mu__boolexpr737 = FALSE ;
  else {
  mu__boolexpr737 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr737)) mu__boolexpr736 = FALSE ;
  else {
  mu__boolexpr736 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
  if (!(mu__boolexpr736)) mu__boolexpr735 = FALSE ;
  else {
  mu__boolexpr735 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
  if (!(mu__boolexpr735)) mu__boolexpr734 = FALSE ;
  else {
  mu__boolexpr734 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
bool mu__boolexpr744;
bool mu__boolexpr745;
bool mu__boolexpr746;
bool mu__boolexpr747;
bool mu__boolexpr748;
bool mu__boolexpr749;
bool mu__boolexpr750;
bool mu__boolexpr751;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr751 = FALSE ;
  else {
  mu__boolexpr751 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr751)) mu__boolexpr750 = FALSE ;
  else {
  mu__boolexpr750 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr750)) mu__boolexpr749 = FALSE ;
  else {
  mu__boolexpr749 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr749)) mu__boolexpr748 = FALSE ;
  else {
  mu__boolexpr748 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr748)) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr747)) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
  mu__boolexpr745 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr745)) mu__boolexpr744 = FALSE ;
  else {
  mu__boolexpr744 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
bool mu__boolexpr752;
bool mu__boolexpr753;
bool mu__boolexpr754;
bool mu__boolexpr755;
bool mu__boolexpr756;
bool mu__boolexpr757;
bool mu__boolexpr758;
bool mu__boolexpr759;
bool mu__boolexpr760;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr760 = FALSE ;
  else {
  mu__boolexpr760 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr760)) mu__boolexpr759 = FALSE ;
  else {
  mu__boolexpr759 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr759)) mu__boolexpr758 = FALSE ;
  else {
  mu__boolexpr758 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr758)) mu__boolexpr757 = FALSE ;
  else {
  mu__boolexpr757 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr757)) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr756)) mu__boolexpr755 = FALSE ;
  else {
  mu__boolexpr755 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr755)) mu__boolexpr754 = FALSE ;
  else {
  mu__boolexpr754 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr754)) mu__boolexpr753 = FALSE ;
  else {
  mu__boolexpr753 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
  if (!(mu__boolexpr753)) mu__boolexpr752 = FALSE ;
  else {
  mu__boolexpr752 = (mu_allocated[mu_pacientemedicinainternaminimo]) ; 
}
bool mu__boolexpr761;
bool mu__boolexpr762;
bool mu__boolexpr763;
bool mu__boolexpr764;
bool mu__boolexpr765;
bool mu__boolexpr766;
bool mu__boolexpr767;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr767 = FALSE ;
  else {
  mu__boolexpr767 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr767)) mu__boolexpr766 = FALSE ;
  else {
  mu__boolexpr766 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr766)) mu__boolexpr765 = FALSE ;
  else {
  mu__boolexpr765 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
  mu__boolexpr764 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr764)) mu__boolexpr763 = FALSE ;
  else {
  mu__boolexpr763 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr763)) mu__boolexpr762 = FALSE ;
  else {
  mu__boolexpr762 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr762)) mu__boolexpr761 = FALSE ;
  else {
  mu__boolexpr761 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
bool mu__boolexpr768;
bool mu__boolexpr769;
bool mu__boolexpr770;
bool mu__boolexpr771;
bool mu__boolexpr772;
bool mu__boolexpr773;
bool mu__boolexpr774;
bool mu__boolexpr775;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr775 = FALSE ;
  else {
  mu__boolexpr775 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr775)) mu__boolexpr774 = FALSE ;
  else {
  mu__boolexpr774 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr774)) mu__boolexpr773 = FALSE ;
  else {
  mu__boolexpr773 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr773)) mu__boolexpr772 = FALSE ;
  else {
  mu__boolexpr772 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr772)) mu__boolexpr771 = FALSE ;
  else {
  mu__boolexpr771 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr771)) mu__boolexpr770 = FALSE ;
  else {
  mu__boolexpr770 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr770)) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = (mu_allocated[mu_pacientepsiquiatriamasculino]) ; 
}
bool mu__boolexpr776;
bool mu__boolexpr777;
bool mu__boolexpr778;
bool mu__boolexpr779;
bool mu__boolexpr780;
bool mu__boolexpr781;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr781 = FALSE ;
  else {
  mu__boolexpr781 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr781)) mu__boolexpr780 = FALSE ;
  else {
  mu__boolexpr780 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr780)) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = FALSE ;
  else {
  mu__boolexpr778 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr778)) mu__boolexpr777 = FALSE ;
  else {
  mu__boolexpr777 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr777)) mu__boolexpr776 = FALSE ;
  else {
  mu__boolexpr776 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
bool mu__boolexpr782;
bool mu__boolexpr783;
bool mu__boolexpr784;
bool mu__boolexpr785;
bool mu__boolexpr786;
bool mu__boolexpr787;
bool mu__boolexpr788;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr788 = FALSE ;
  else {
  mu__boolexpr788 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr788)) mu__boolexpr787 = FALSE ;
  else {
  mu__boolexpr787 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr787)) mu__boolexpr786 = FALSE ;
  else {
  mu__boolexpr786 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr786)) mu__boolexpr785 = FALSE ;
  else {
  mu__boolexpr785 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr785)) mu__boolexpr784 = FALSE ;
  else {
  mu__boolexpr784 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr784)) mu__boolexpr783 = FALSE ;
  else {
  mu__boolexpr783 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
  if (!(mu__boolexpr783)) mu__boolexpr782 = FALSE ;
  else {
  mu__boolexpr782 = (mu_allocated[mu_pacientepsiquiatriafeminino]) ; 
}
bool mu__boolexpr789;
bool mu__boolexpr790;
bool mu__boolexpr791;
bool mu__boolexpr792;
bool mu__boolexpr793;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr793 = FALSE ;
  else {
  mu__boolexpr793 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr793)) mu__boolexpr792 = FALSE ;
  else {
  mu__boolexpr792 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr792)) mu__boolexpr791 = FALSE ;
  else {
  mu__boolexpr791 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr791)) mu__boolexpr790 = FALSE ;
  else {
  mu__boolexpr790 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr790)) mu__boolexpr789 = FALSE ;
  else {
  mu__boolexpr789 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
bool mu__boolexpr794;
bool mu__boolexpr795;
bool mu__boolexpr796;
bool mu__boolexpr797;
bool mu__boolexpr798;
bool mu__boolexpr799;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr799 = FALSE ;
  else {
  mu__boolexpr799 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr799)) mu__boolexpr798 = FALSE ;
  else {
  mu__boolexpr798 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr798)) mu__boolexpr797 = FALSE ;
  else {
  mu__boolexpr797 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr797)) mu__boolexpr796 = FALSE ;
  else {
  mu__boolexpr796 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr796)) mu__boolexpr795 = FALSE ;
  else {
  mu__boolexpr795 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
  if (!(mu__boolexpr795)) mu__boolexpr794 = FALSE ;
  else {
  mu__boolexpr794 = (mu_allocated[mu_pacienteavcmasculino]) ; 
}
bool mu__boolexpr800;
bool mu__boolexpr801;
bool mu__boolexpr802;
bool mu__boolexpr803;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr803 = FALSE ;
  else {
  mu__boolexpr803 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr803)) mu__boolexpr802 = FALSE ;
  else {
  mu__boolexpr802 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr802)) mu__boolexpr801 = FALSE ;
  else {
  mu__boolexpr801 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr801)) mu__boolexpr800 = FALSE ;
  else {
  mu__boolexpr800 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
bool mu__boolexpr804;
bool mu__boolexpr805;
bool mu__boolexpr806;
bool mu__boolexpr807;
bool mu__boolexpr808;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr808 = FALSE ;
  else {
  mu__boolexpr808 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr808)) mu__boolexpr807 = FALSE ;
  else {
  mu__boolexpr807 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr807)) mu__boolexpr806 = FALSE ;
  else {
  mu__boolexpr806 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr806)) mu__boolexpr805 = FALSE ;
  else {
  mu__boolexpr805 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
  if (!(mu__boolexpr805)) mu__boolexpr804 = FALSE ;
  else {
  mu__boolexpr804 = (mu_allocated[mu_pacienteavcfeminino]) ; 
}
bool mu__boolexpr809;
bool mu__boolexpr810;
bool mu__boolexpr811;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr811 = FALSE ;
  else {
  mu__boolexpr811 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr811)) mu__boolexpr810 = FALSE ;
  else {
  mu__boolexpr810 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr810)) mu__boolexpr809 = FALSE ;
  else {
  mu__boolexpr809 = (mu_allocated[mu_pacienteucladulto]) ; 
}
bool mu__boolexpr812;
bool mu__boolexpr813;
bool mu__boolexpr814;
bool mu__boolexpr815;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr815 = FALSE ;
  else {
  mu__boolexpr815 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr815)) mu__boolexpr814 = FALSE ;
  else {
  mu__boolexpr814 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr814)) mu__boolexpr813 = FALSE ;
  else {
  mu__boolexpr813 = (mu_allocated[mu_pacienteucladulto]) ; 
}
  if (!(mu__boolexpr813)) mu__boolexpr812 = FALSE ;
  else {
  mu__boolexpr812 = (mu_allocated[mu_pacienteuclcrianca]) ; 
}
bool mu__boolexpr816;
bool mu__boolexpr817;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr817 = FALSE ;
  else {
  mu__boolexpr817 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr817)) mu__boolexpr816 = FALSE ;
  else {
  mu__boolexpr816 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
bool mu__boolexpr818;
bool mu__boolexpr819;
bool mu__boolexpr820;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr820 = FALSE ;
  else {
  mu__boolexpr820 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr820)) mu__boolexpr819 = FALSE ;
  else {
  mu__boolexpr819 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
  if (!(mu__boolexpr819)) mu__boolexpr818 = FALSE ;
  else {
  mu__boolexpr818 = (mu_allocated[mu_pacienteucladulto]) ; 
}
bool mu__boolexpr821;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr821 = FALSE ;
  else {
  mu__boolexpr821 = (mu_allocated[mu_pacienteisolamento]) ; 
}
bool mu__boolexpr822;
bool mu__boolexpr823;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr823 = FALSE ;
  else {
  mu__boolexpr823 = (mu_allocated[mu_pacienteisolamento]) ; 
}
  if (!(mu__boolexpr823)) mu__boolexpr822 = FALSE ;
  else {
  mu__boolexpr822 = (mu_allocated[mu_pacienteobstetriciaaborto]) ; 
}
bool mu__boolexpr824;
  if (!(mu_donotallocate[mu_pacienteuti])) mu__boolexpr824 = FALSE ;
  else {
  mu__boolexpr824 = (mu_allocated[mu_pacienteisolamento]) ; 
}

 if (std::string(typeid(mu_allocated[mu_pacienteavcfeminino]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteavcfeminino])); 
 if (std::string(typeid(mu_allocated[mu_pacienteavcmasculino]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteavcmasculino])); 
 if (std::string(typeid(mu_allocated[mu_pacienteisolamento]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteisolamento])); 
 if (std::string(typeid(mu_allocated[mu_pacientemedicinainternaintensivo]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientemedicinainternaintensivo])); 
 if (std::string(typeid(mu_allocated[mu_pacientemedicinainternaminimo]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientemedicinainternaminimo])); 
 if (std::string(typeid(mu_allocated[mu_pacienteobstetriciaaborto]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteobstetriciaaborto])); 
 if (std::string(typeid(mu_allocated[mu_pacientepsiquiatriafeminino]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientepsiquiatriafeminino])); 
 if (std::string(typeid(mu_allocated[mu_pacientepsiquiatriamasculino]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientepsiquiatriamasculino])); 
 if (std::string(typeid(mu_allocated[mu_pacienteucladulto]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteucladulto])); 
 if (std::string(typeid(mu_allocated[mu_pacienteuclcrianca]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacienteuclcrianca])); 
 if (std::string(typeid(mu_donotallocate[mu_pacienteuti]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_donotallocate[mu_pacienteuti])); 

    return bool_goal_conds;
  }

  std::map<mu__real*, std::pair<double, int> > get_numeric_goal_conditions()
  {
    std::map<mu__real*, std::pair<double, int> > numeric_goal_conds;

    return numeric_goal_conds;
  }

bool mu__condition_825() // Condition for Rule "enjoy"
{
  return mu__goal_692( );
}

bool mu__goal__00(){ return mu__condition_825(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/


// WP WP WP GOAL
const rulerec goals[] = {
{"enjoy", &mu__condition_825, NULL, },
};
const unsigned short numgoals = 1;

/********************
  Metric related stuff
 ********************/
const short metric = -1;

/********************
  Invariant records
 ********************/
int mu__invariant_826() // Invariant "todo bien"
{
bool mu__boolexpr827;
  if (!(mu_all_event_true)) mu__boolexpr827 = FALSE ;
  else {
  mu__boolexpr827 = (!(mu_DAs_violate_duration(  ))) ; 
}
return mu__boolexpr827;
};

bool mu__condition_828() // Condition for Rule "todo bien"
{
  return mu__invariant_826( );
}

bool mu__goal__01(){ return mu__condition_828(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/

const rulerec invariants[] = {
{"todo bien", &mu__condition_828, NULL, },
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
bedpsiquiatria:NoScalarset
patientpsiquiatria:NoScalarset
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
        mu_bedpsiquiatria.MultisetSort();
        mu_patientpsiquiatria.MultisetSort();
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
  for (j=0; j<12; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<12; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<12; j++)
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
              mu_bedpsiquiatria.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedpsiquiatria.MultisetSort();
              mu_patientpsiquiatria.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientpsiquiatria.MultisetSort();
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
          mu_bedpsiquiatria.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedpsiquiatria.MultisetSort();
          mu_patientpsiquiatria.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientpsiquiatria.MultisetSort();
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
              mu_bedpsiquiatria.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedpsiquiatria.MultisetSort();
              mu_patientpsiquiatria.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientpsiquiatria.MultisetSort();
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
      mu_bedpsiquiatria.MultisetSort();
      mu_patientpsiquiatria.MultisetSort();
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
