/** IFJ2023 xramas01 solution
 * xramas01; Jakub Ramaseuski
 * 
*/

#include <inttypes.h>

#ifndef SYMBOL_H
#define SYMBOL_H
/**
 * As mentioned in assignment, IFJ language has given data types: Int, String, Double or nil. 
 * I added func to it as it is a symbol too after all
*/

enum sym_types {
	sym_none,	// no type assigned
	sym_int,	// Int
	sym_str,	// String
	sym_fun,	// func
	sym_flt,	// Double
	sym_nil		// nil
};

enum sym_mutability {
	sym_none,
	sym_variable,
	sym_constant
};

struct _symbol;
typedef struct _symbol symbol;

struct _symbol
{
	char *name;
	enum sym_types type;
	enum sym_mutability mutability;
	symbol *scope;
};

void sym_init(symbol *);

void sym_set_name(symbol *, char *);
void sym_set_type(symbol *, enum sym_types);
void sym_set_mutability(symbol *, enum sym_mutability);

char* 			 sym_get_name(symbol *);
enum type* 		 sym_get_type(symbol *);
enum mutability* sym_get_mutability(symbol *);

void sym_deinit(symbol *);

#endif // SYMBOL_H