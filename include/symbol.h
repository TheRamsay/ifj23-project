/** IFJ2023 xramas01 solution
 * xramas01; Jakub Ramaseuski
 * xdanil00; Artem Danilov
 * 
*/

#include <inttypes.h>

#ifndef SYMBOL_H
#define SYMBOL_H
/**
 * As mentioned in assignment, IFJ language has given data types: Int, String, Double or nil. 
 * I added func to it as it is a symbol too after all
*/

typedef enum _sym_types {
	sym_t_none,	// no type assigned
	sym_t_int,	// Int
	sym_t_str,	// String
	sym_t_fun,	// func
	sym_t_flt,	// Double
	sym_t_nil	// nil
} sym_types;

typedef enum _sym_mutability {
	sym_m_none,
	sym_m_variable,
	sym_m_constant
} sym_mutability;

struct _symbol;
typedef struct _symbol 			symbol;

struct _symbol
{
	char *name;
	sym_types type;
	sym_mutability mutability;
	symbol *scope;
};

void sym_init(symbol *);

void sym_set_name(symbol *, char *);
void sym_set_type(symbol *, sym_types);
void sym_set_mutability(symbol *, sym_mutability);

char*				sym_get_name(symbol *);
sym_types			sym_get_type(symbol *);
sym_mutability 	sym_get_mutability(symbol *);

void sym_deinit(symbol *);

#endif // SYMBOL_H