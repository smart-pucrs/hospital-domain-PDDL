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
#define PROBLEM_FILENAME "problem.pddl"
#define DISCRETIZATION 0.100000
#define VAL_PATHNAME "/home/debo/planejador/DiNo/src/DiNo/../VAL-master/validate"
#define BITS_IN_WORLD 207
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

  mu_1_patient (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_patient (void): mu__byte(1, 2, 2) {};
  mu_1_patient (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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

const char *mu_1_patient::values[] = {"pacientemedicinainternaminimo","pacientemedicinainternaintensivo",NULL };

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
      return ( s << mu_1_bed::values[ int(val) - 3] );
    else return ( s << "Undefined" );
  };

  mu_1_bed (const char *name, int os): mu__byte(3, 4, 2, name, os) {};
  mu_1_bed (void): mu__byte(3, 4, 2) {};
  mu_1_bed (int val): mu__byte(3, 4, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -3]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -3],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_bed::values[] = {"camamedicinainternaminimo","camamedicinainternaintensivo",NULL };

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
      return ( s << mu_1_care::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_care (const char *name, int os): mu__byte(5, 6, 2, name, os) {};
  mu_1_care (void): mu__byte(5, 6, 2) {};
  mu_1_care (int val): mu__byte(5, 6, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -5]; };
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
    fprintf(target,"%s: %s%s",name,values[ value() -5],separator); 
    else
    fprintf(target,"%s: Undefined%s",name,separator); 
  };
};

const char *mu_1_care::values[] = {"minimo","intensivo",NULL };

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
      return ( s << mu_1_specialty::values[ int(val) - 7] );
    else return ( s << "Undefined" );
  };

  mu_1_specialty (const char *name, int os): mu__byte(7, 7, 1, name, os) {};
  mu_1_specialty (void): mu__byte(7, 7, 1) {};
  mu_1_specialty (int val): mu__byte(7, 7, 1, "Parameter or function result.", 0)
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

const char *mu_1_specialty::values[] = {"medicinainterna",NULL };

/*** end of enum declaration ***/
mu_1_specialty mu_1_specialty_undefined_var;

class mu_1__type_0/*:public mu_1__type_super*/
{
 public:
  mu_1_real_type array[ 2 ]; 
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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
    if ( ( index >= 5 ) && ( index <= 6 ) )
      return array[ index - 5 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 5 ];
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

if (n) array[i].set_self_ar(n,"minimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"intensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2/*:public mu_1__type_super*/
{
 public:
  mu_1__type_1 array[ 2 ]; 
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
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
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

if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_4 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 7 ) && ( index <= 7 ) )
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
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"medicinainterna", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5/*:public mu_1__type_super*/
{
 public:
  mu_1__type_4 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_4_mu_1__type_5 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1__type_4& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
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

if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_6 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
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

if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_8 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 4 ) )
      return array[ index - 3 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"camamedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"camamedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9/*:public mu_1__type_super*/
{
 public:
  mu_1__type_8 array[ 2 ]; 
#define awesome_mu_00_mu_1__type_8_mu_1__type_9 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1__type_8& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
#define awesome_mu_00_mu_0_boolean_mu_1__type_10 1 
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
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
    if ( ( index >= 5 ) && ( index <= 6 ) )
      return array[ index - 5 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 5 ];
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

if (n) array[i].set_self_ar(n,"minimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"intensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12/*:public mu_1__type_super*/
{
 public:
  mu_1__type_11 array[ 2 ]; 
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 4 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 1 ]; 
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
    if ( ( index >= 7 ) && ( index <= 7 ) )
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
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
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
    for (int i = 0; i < 1; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 1; i++)
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

if (n) array[i].set_self_ar(n,"medicinainterna", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

class mu_1__type_14/*:public mu_1__type_super*/
{
 public:
  mu_1__type_13 array[ 2 ]; 
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
  mu_1__type_14& operator= (const mu_1__type_14& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_14& a, mu_1__type_14& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_14& a, mu_1__type_14& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_14::~mu_1__type_14()
{
}
/*** end array declaration ***/
mu_1__type_14 mu_1__type_14_undefined_var;

class mu_1__type_15/*:public mu_1__type_super*/
{
 public:
  mu_0_boolean array[ 2 ]; 
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_15& a, mu_1__type_15& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_15& a, mu_1__type_15& b)
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
    for (int i = 0; i < 2; i++)
      array[i].print(target,separator); };

  void print_diff(state *prevstate, FILE *target, const char *separator)
  {
    for (int i = 0; i < 2; i++)
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

if (n) array[i].set_self_ar(n,"pacientemedicinainternaminimo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"pacientemedicinainternaintensivo", i * 2 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
  }
mu_1__type_15::~mu_1__type_15()
{
}
/*** end array declaration ***/
mu_1__type_15 mu_1__type_15_undefined_var;

const int mu_pacientemedicinainternaminimo = 1;
const int mu_pacientemedicinainternaintensivo = 2;
const int mu_camamedicinainternaminimo = 3;
const int mu_camamedicinainternaintensivo = 4;
const int mu_minimo = 5;
const int mu_intensivo = 6;
const int mu_medicinainterna = 7;
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
mu_1__type_0 mu_age("age",75);

/*** Variable declaration ***/
mu_1__type_2 mu_bedcare("bedcare",155);

/*** Variable declaration ***/
mu_1__type_3 mu_bedmedicinainterna("bedmedicinainterna",163);

/*** Variable declaration ***/
mu_1__type_5 mu_bedspecialty("bedspecialty",167);

/*** Variable declaration ***/
mu_1__type_6 mu_bedfree("bedfree",171);

/*** Variable declaration ***/
mu_1__type_7 mu_busybed("busybed",175);

/*** Variable declaration ***/
mu_1__type_9 mu_in_("in_",179);

/*** Variable declaration ***/
mu_1__type_10 mu_allocated("allocated",187);

/*** Variable declaration ***/
mu_1__type_12 mu_patientcare("patientcare",191);

/*** Variable declaration ***/
mu_1__type_14 mu_patientspecialty("patientspecialty",199);

/*** Variable declaration ***/
mu_1__type_15 mu_patientmedicinainterna("patientmedicinainterna",203);

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

void mu_event_check()
{
/*** Variable declaration ***/
mu_0_boolean mu_event_triggered("event_triggered",0);

mu_event_triggered = mu_true;
{
  bool mu__while_expr_17;  mu__while_expr_17 = mu_event_triggered;
int mu__counter_16 = 0;
while (mu__while_expr_17) {
if ( ++mu__counter_16 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_event_triggered = mu_false;
};
mu__while_expr_17 = mu_event_triggered;
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
  bool mu__while_expr_19;  mu__while_expr_19 = !(mu_end_while);
int mu__counter_18 = 0;
while (mu__while_expr_19) {
if ( ++mu__counter_18 > args->loopmax.value )
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
mu__while_expr_19 = !(mu_end_while);
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
  mu_age.clear();
  mu_bedcare.clear();
  mu_bedmedicinainterna.clear();
  mu_bedspecialty.clear();
  mu_bedfree.clear();
  mu_busybed.clear();
  mu_in_.clear();
  mu_allocated.clear();
  mu_patientcare.clear();
  mu_patientspecialty.clear();
  mu_patientmedicinainterna.clear();
}
void world_class::undefine()
{
  mu_all_event_true.undefine();
  mu_h_n.undefine();
  mu_g_n.undefine();
  mu_f_n.undefine();
  mu_TIME.undefine();
  mu_age.undefine();
  mu_bedcare.undefine();
  mu_bedmedicinainterna.undefine();
  mu_bedspecialty.undefine();
  mu_bedfree.undefine();
  mu_busybed.undefine();
  mu_in_.undefine();
  mu_allocated.undefine();
  mu_patientcare.undefine();
  mu_patientspecialty.undefine();
  mu_patientmedicinainterna.undefine();
}
void world_class::reset()
{
  mu_all_event_true.reset();
  mu_h_n.reset();
  mu_g_n.reset();
  mu_f_n.reset();
  mu_TIME.reset();
  mu_age.reset();
  mu_bedcare.reset();
  mu_bedmedicinainterna.reset();
  mu_bedspecialty.reset();
  mu_bedfree.reset();
  mu_busybed.reset();
  mu_in_.reset();
  mu_allocated.reset();
  mu_patientcare.reset();
  mu_patientspecialty.reset();
  mu_patientmedicinainterna.reset();
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

      interm = mu_age.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedcare.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedmedicinainterna.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedspecialty.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedfree.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_busybed.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_in_.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_allocated.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientcare.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientspecialty.bool_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientmedicinainterna.bool_array();
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

      interm = mu_age.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedcare.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedmedicinainterna.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedspecialty.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_bedfree.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_busybed.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_in_.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_allocated.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientcare.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientspecialty.num_array();
		if (interm.size() > 0) var_arrays.insert(var_arrays.end(), interm.begin(), interm.end());
      interm = mu_patientmedicinainterna.num_array();
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
  mu_age.print(target, separator);
  mu_bedcare.print(target, separator);
  mu_bedmedicinainterna.print(target, separator);
  mu_bedspecialty.print(target, separator);
  mu_bedfree.print(target, separator);
  mu_busybed.print(target, separator);
  mu_in_.print(target, separator);
  mu_allocated.print(target, separator);
  mu_patientcare.print(target, separator);
  mu_patientspecialty.print(target, separator);
  mu_patientmedicinainterna.print(target, separator);
    num_calls--;
}
}
void world_class::pddlprint(FILE *target, const char *separator)
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_TIME.print(target, separator);
  mu_age.print(target, separator);
  mu_bedcare.print(target, separator);
  mu_bedmedicinainterna.print(target, separator);
  mu_bedspecialty.print(target, separator);
  mu_bedfree.print(target, separator);
  mu_busybed.print(target, separator);
  mu_in_.print(target, separator);
  mu_allocated.print(target, separator);
  mu_patientcare.print(target, separator);
  mu_patientspecialty.print(target, separator);
  mu_patientmedicinainterna.print(target, separator);
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
  mu_age.print_statistic();
  mu_bedcare.print_statistic();
  mu_bedmedicinainterna.print_statistic();
  mu_bedspecialty.print_statistic();
  mu_bedfree.print_statistic();
  mu_busybed.print_statistic();
  mu_in_.print_statistic();
  mu_allocated.print_statistic();
  mu_patientcare.print_statistic();
  mu_patientspecialty.print_statistic();
  mu_patientmedicinainterna.print_statistic();
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
    mu_age.print_diff(prevstate,target,separator);
    mu_bedcare.print_diff(prevstate,target,separator);
    mu_bedmedicinainterna.print_diff(prevstate,target,separator);
    mu_bedspecialty.print_diff(prevstate,target,separator);
    mu_bedfree.print_diff(prevstate,target,separator);
    mu_busybed.print_diff(prevstate,target,separator);
    mu_in_.print_diff(prevstate,target,separator);
    mu_allocated.print_diff(prevstate,target,separator);
    mu_patientcare.print_diff(prevstate,target,separator);
    mu_patientspecialty.print_diff(prevstate,target,separator);
    mu_patientmedicinainterna.print_diff(prevstate,target,separator);
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
  mu_age.to_state( newstate );
  mu_bedcare.to_state( newstate );
  mu_bedmedicinainterna.to_state( newstate );
  mu_bedspecialty.to_state( newstate );
  mu_bedfree.to_state( newstate );
  mu_busybed.to_state( newstate );
  mu_in_.to_state( newstate );
  mu_allocated.to_state( newstate );
  mu_patientcare.to_state( newstate );
  mu_patientspecialty.to_state( newstate );
  mu_patientmedicinainterna.to_state( newstate );
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
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
    return tsprintf(" allocatemedicinainterna , varcare:%s, varbed:%s, p:%s", mu_varcare.Name(), mu_varbed.Name(), mu_p.Name());
  }
  bool Condition(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
bool mu__boolexpr23;
bool mu__boolexpr24;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = (mu_patientmedicinainterna[mu_p]) ; 
}
    return mu__boolexpr20;
  }

  std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
bool mu__boolexpr28;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr29;
bool mu__boolexpr30;
bool mu__boolexpr31;
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr34;
bool mu__boolexpr35;
bool mu__boolexpr36;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr36)) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
bool mu__boolexpr40;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr41;
bool mu__boolexpr42;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr46;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr49;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

bool mu__boolexpr50;
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr66;
bool mu__boolexpr67;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr71;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr72;
bool mu__boolexpr73;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr74;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_bedfree[mu_varbed]) ; 
}


    return preconds;
  }



  std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> preconds;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
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
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
bool mu__boolexpr96;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr99;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (mu_bedfree[mu_varbed]) ; 
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
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_patientmedicinainterna[mu_p]) ; 
}
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
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
  mu__boolexpr114 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (mu_bedcare[mu_varbed][mu_varcare]) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (mu_patientcare[mu_p][mu_varcare]) ; 
}
bool mu__boolexpr116;
bool mu__boolexpr117;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
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
bool mu__boolexpr121;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_bedfree[mu_varbed]) ; 
}
bool mu__boolexpr122;
bool mu__boolexpr123;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_bedfree[mu_varbed]) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_bedmedicinainterna[mu_varbed]) ; 
}
bool mu__boolexpr124;
  if (!(!(mu_allocated[mu_p]))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_bedfree[mu_varbed]) ; 
}


    return temporal_cons;
  }

  std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__real*> effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;


    return effs;
  }

  std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu_0_boolean*> aeffs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
  {
    std::set<std::pair<mu_0_boolean*,int> > inter_effs;

    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

    inter_effs.insert(std::make_pair(&(mu_in_[mu_p][mu_varbed]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_allocated[mu_p]), 1)); //  mu_true 
    inter_effs.insert(std::make_pair(&(mu_busybed[mu_varbed]), 1)); //  mu_true 

    return inter_effs;
  }

  std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
  {
    std::vector<mu__any*> aeffs;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
    aeffs.push_back(&(mu_in_[mu_p][mu_varbed])); //  mu_true 
    aeffs.push_back(&(mu_allocated[mu_p])); //  mu_true 
    aeffs.push_back(&(mu_busybed[mu_varbed])); //  mu_true 

    return aeffs;
  }

  void NextRule(RULE_INDEX_TYPE & what_rule)
  {
    RULE_INDEX_TYPE r = what_rule - 1;
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 9 )
      {
	if ( ( TRUE  ) ) {
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
	      if (mu__boolexpr125) {
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
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    mu_p.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;
  };

  void Code_ff(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

mu_in_[mu_p][mu_varbed] = mu_true;
mu_allocated[mu_p] = mu_true;
mu_busybed[mu_varbed] = mu_true;


  }

  mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
  {


    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;



  }

std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
  {


 std::map<mu_0_boolean*, mu__real*> pr; 
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;

return pr; 


  }

  int Duration(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
    return 0;
  }

  int Weight(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
    return 0;
  }

   char * PDDLName(RULE_INDEX_TYPE r)
  {
    static mu_1_care mu_varcare;
    mu_varcare.value((r % 2) + 5);
    r = r / 2;
    static mu_1_bed mu_varbed;
    mu_varbed.value((r % 2) + 3);
    r = r / 2;
    static mu_1_patient mu_p;
    mu_p.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("( allocatemedicinainterna %s %s %s)", mu_p.Name(), mu_varbed.Name(), mu_varcare.Name());
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
public:
void SetNextEnabledRule(RULE_INDEX_TYPE & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<9)
    { R1.NextRule(what_rule);
      if (what_rule<9) return; }
}
bool Condition(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=8) return R1.Condition(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
std::vector<mu_0_boolean*> bool_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.bool_precond_array(r-0);
  if (r>=1 && r<=8) return R1.bool_precond_array(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::map<mu__real*, std::pair<double,int> > num_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.num_precond_array(r-0);
  if (r>=1 && r<=8) return R1.num_precond_array(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::vector<mu__any*> all_precond_array(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.all_precond_array(r-0);
  if (r>=1 && r<=8) return R1.all_precond_array(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > precond_bool_interference(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.precond_bool_interference(r-0);
  if (r>=1 && r<=8) return R1.precond_bool_interference(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::pair<double, double> temporal_constraints(RULE_INDEX_TYPE r)
{
  category = CONDITION;
  if (r<=0) return R0.temporal_constraints(r-0);
  if (r>=1 && r<=8) return R1.temporal_constraints(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking preconditions for nonexisting rule.");
}
std::set<std::pair<mu_0_boolean*, int> > effects_bool_interference(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_bool_interference(r-0);
  if (r>=1 && r<=8) return R1.effects_bool_interference(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu_0_boolean*> effects_add_bool_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_add_bool_array(r-0);
  if (r>=1 && r<=8) return R1.effects_add_bool_array(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__real*> effects_num_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_num_array(r-0);
  if (r>=1 && r<=8) return R1.effects_num_array(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
std::vector<mu__any*> effects_all_array(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.effects_all_array(r-0);
  if (r>=1 && r<=8) return R1.effects_all_array(r-1);
Error.Notrace("Internal: NextStateGenerator -- checking add effects for nonexisting rule.");
}
void Code(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=8) { R1.Code(r-1); return; } 
}
void Code_ff(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_ff(r-0); return; } 
  if (r>=1 && r<=8) { R1.Code_ff(r-1); return; } 
}
void Code_numeric_ff_plus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_plus(r-0); return; } 
  if (r>=1 && r<=8) { R1.Code_numeric_ff_plus(r-1); return; } 
}
void Code_numeric_ff_minus(RULE_INDEX_TYPE r)
{
  if (r<=0) { R0.Code_numeric_ff_minus(r-0); return; } 
  if (r>=1 && r<=8) { R1.Code_numeric_ff_minus(r-1); return; } 
}
mu_0_boolean* get_rule_clock_started(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_rule_clock_started(r-0); } 
  if (r>=1 && r<=8) { return R1.get_rule_clock_started(r-1); } 
}
std::map<mu_0_boolean*, mu__real*> get_clocks(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.get_clocks(r-0); } 
  if (r>=1 && r<=8) { return R1.get_clocks(r-1); } 
}
int Priority(RULE_INDEX_TYPE r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=8) { return R1.Priority(); } 
}
char * Name(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=8) return R1.Name(r-1);
  return NULL;
}
int Duration(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Duration(r-0);
  if (r>=1 && r<=8) return R1.Duration(r-1);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
int Weight(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.Weight(r-0);
  if (r>=1 && r<=8) return R1.Weight(r-1);
Error.Notrace("Internal: NextStateGenerator -- querying duration for nonexisting rule.");
}
 char * PDDLName(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLName(r-0);
  if (r>=1 && r<=8) return R1.PDDLName(r-1);
  return NULL;
}
RuleManager::rule_pddlclass PDDLClass(RULE_INDEX_TYPE r)
{
  if (r<=0) return R0.PDDLClass(r-0);
  if (r>=1 && r<=8) return R1.PDDLClass(r-1);
Error.Notrace("Internal: NextStateGenerator -- querying PDDL class for nonexisting rule.");
}
};
const RULE_INDEX_TYPE numrules = 9;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 9


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
for(int mu_varbed = 3; mu_varbed <= 4; mu_varbed++) {
{
for(int mu_varcare = 5; mu_varcare <= 6; mu_varcare++) {
mu_set_bedcare ( mu_varbed, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_varbed = 3; mu_varbed <= 4; mu_varbed++) {
mu_set_bedmedicinainterna ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 3; mu_varbed <= 4; mu_varbed++) {
{
for(int mu_varspecialty = 7; mu_varspecialty <= 7; mu_varspecialty++) {
mu_set_bedspecialty ( mu_varbed, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_varbed = 3; mu_varbed <= 4; mu_varbed++) {
mu_set_bedfree ( mu_varbed, mu_false );
};
};
{
for(int mu_varbed = 3; mu_varbed <= 4; mu_varbed++) {
mu_set_busybed ( mu_varbed, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
{
for(int mu_varbed = 3; mu_varbed <= 4; mu_varbed++) {
mu_set_in_ ( mu_p, mu_varbed, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
mu_set_allocated ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
{
for(int mu_varcare = 5; mu_varcare <= 6; mu_varcare++) {
mu_set_patientcare ( mu_p, mu_varcare, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
{
for(int mu_varspecialty = 7; mu_varspecialty <= 7; mu_varspecialty++) {
mu_set_patientspecialty ( mu_p, mu_varspecialty, mu_false );
};
};
};
};
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
mu_set_patientmedicinainterna ( mu_p, mu_false );
};
};
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
mu_age[mu_p] = 0.000000e+00;
};
};
mu_bedfree[mu_camamedicinainternaminimo] = mu_true;
mu_bedfree[mu_camamedicinainternaintensivo] = mu_true;
mu_patientspecialty[mu_pacientemedicinainternaminimo][mu_medicinainterna] = mu_true;
mu_patientspecialty[mu_pacientemedicinainternaintensivo][mu_medicinainterna] = mu_true;
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
int mu__goal_130() // Goal "enjoy"
{
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!(mu_allocated[mu_pacientemedicinainternaminimo])) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
return mu__boolexpr131;
};

  std::set<mu_0_boolean*> get_bool_goal_conditions()
  {
    std::set<mu_0_boolean*> bool_goal_conds;
bool mu__boolexpr133;
  if (!(mu_allocated[mu_pacientemedicinainternaminimo])) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
bool mu__boolexpr134;
bool mu__boolexpr135;
  if (!(mu_allocated[mu_pacientemedicinainternaminimo])) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (!(mu_DAs_ongoing_in_goal_state(  ))) ; 
}
bool mu__boolexpr136;
  if (!(mu_allocated[mu_pacientemedicinainternaminimo])) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_allocated[mu_pacientemedicinainternaintensivo]) ; 
}

 if (std::string(typeid(mu_allocated[mu_pacientemedicinainternaintensivo]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientemedicinainternaintensivo])); 
 if (std::string(typeid(mu_allocated[mu_pacientemedicinainternaminimo]).name()).compare("12mu_0_boolean") == 0)
		bool_goal_conds.insert(&(mu_allocated[mu_pacientemedicinainternaminimo])); 

    return bool_goal_conds;
  }

  std::map<mu__real*, std::pair<double, int> > get_numeric_goal_conditions()
  {
    std::map<mu__real*, std::pair<double, int> > numeric_goal_conds;

    return numeric_goal_conds;
  }

bool mu__condition_137() // Condition for Rule "enjoy"
{
  return mu__goal_130( );
}

bool mu__goal__00(){ return mu__condition_137(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/


// WP WP WP GOAL
const rulerec goals[] = {
{"enjoy", &mu__condition_137, NULL, },
};
const unsigned short numgoals = 1;

/********************
  Metric related stuff
 ********************/
const short metric = -1;

/********************
  Invariant records
 ********************/
int mu__invariant_138() // Invariant "todo bien"
{
bool mu__boolexpr139;
  if (!(mu_all_event_true)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (!(mu_DAs_violate_duration(  ))) ; 
}
return mu__boolexpr139;
};

bool mu__condition_140() // Condition for Rule "todo bien"
{
  return mu__invariant_138( );
}

bool mu__goal__01(){ return mu__condition_140(); } /* WP WP WP GOAL CONDITION CHECK */ /**** end rule declaration ****/

const rulerec invariants[] = {
{"todo bien", &mu__condition_140, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
patientcare:NoScalarset
busybed:NoScalarset
bedfree:NoScalarset
bedspecialty:NoScalarset
age:NoScalarset
TIME:NoScalarset
g_n:NoScalarset
all_event_true:NoScalarset
h_n:NoScalarset
f_n:NoScalarset
bedcare:NoScalarset
bedmedicinainterna:NoScalarset
in_:NoScalarset
allocated:NoScalarset
patientspecialty:NoScalarset
patientmedicinainterna:NoScalarset
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
        mu_busybed.MultisetSort();
        mu_bedfree.MultisetSort();
        mu_bedspecialty.MultisetSort();
        mu_age.MultisetSort();
        mu_TIME.MultisetSort();
        mu_g_n.MultisetSort();
        mu_all_event_true.MultisetSort();
        mu_h_n.MultisetSort();
        mu_f_n.MultisetSort();
        mu_bedcare.MultisetSort();
        mu_bedmedicinainterna.MultisetSort();
        mu_in_.MultisetSort();
        mu_allocated.MultisetSort();
        mu_patientspecialty.MultisetSort();
        mu_patientmedicinainterna.MultisetSort();
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
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
              mu_busybed.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_busybed.MultisetSort();
              mu_bedfree.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedfree.MultisetSort();
              mu_bedspecialty.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedspecialty.MultisetSort();
              mu_age.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_age.MultisetSort();
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
              mu_bedcare.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedcare.MultisetSort();
              mu_bedmedicinainterna.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bedmedicinainterna.MultisetSort();
              mu_in_.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_in_.MultisetSort();
              mu_allocated.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_allocated.MultisetSort();
              mu_patientspecialty.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientspecialty.MultisetSort();
              mu_patientmedicinainterna.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_patientmedicinainterna.MultisetSort();
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
          mu_busybed.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_busybed.MultisetSort();
          mu_bedfree.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedfree.MultisetSort();
          mu_bedspecialty.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedspecialty.MultisetSort();
          mu_age.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_age.MultisetSort();
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
          mu_bedcare.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedcare.MultisetSort();
          mu_bedmedicinainterna.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bedmedicinainterna.MultisetSort();
          mu_in_.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_in_.MultisetSort();
          mu_allocated.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_allocated.MultisetSort();
          mu_patientspecialty.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientspecialty.MultisetSort();
          mu_patientmedicinainterna.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_patientmedicinainterna.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_patientcare.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientcare.MultisetSort();
              mu_busybed.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_busybed.MultisetSort();
              mu_bedfree.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedfree.MultisetSort();
              mu_bedspecialty.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedspecialty.MultisetSort();
              mu_age.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_age.MultisetSort();
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
              mu_bedcare.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedcare.MultisetSort();
              mu_bedmedicinainterna.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bedmedicinainterna.MultisetSort();
              mu_in_.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_in_.MultisetSort();
              mu_allocated.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_allocated.MultisetSort();
              mu_patientspecialty.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientspecialty.MultisetSort();
              mu_patientmedicinainterna.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_patientmedicinainterna.MultisetSort();
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
      mu_busybed.MultisetSort();
      mu_bedfree.MultisetSort();
      mu_bedspecialty.MultisetSort();
      mu_age.MultisetSort();
      mu_TIME.MultisetSort();
      mu_g_n.MultisetSort();
      mu_all_event_true.MultisetSort();
      mu_h_n.MultisetSort();
      mu_f_n.MultisetSort();
      mu_bedcare.MultisetSort();
      mu_bedmedicinainterna.MultisetSort();
      mu_in_.MultisetSort();
      mu_allocated.MultisetSort();
      mu_patientspecialty.MultisetSort();
      mu_patientmedicinainterna.MultisetSort();
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
        mu_age.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_age.MultisetSort();
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
        mu_patientmedicinainterna.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_patientmedicinainterna.MultisetSort();
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
