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

struct _symbol;
typedef struct _symbol symbol;

struct _symbol
{
	char *name;
	enum sym_types type;
	symbol *scope;
};

void sym_init(symbol *);
void sym_set_name(symbol *, char *);
void sym_deinit(symbol *);

#endif // SYMBOL_H