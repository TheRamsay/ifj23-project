/** IFJ2023 xramas01 solution
 * xramas01; Jakub Ramaseuski
 * xdanil00; Artem Danilov
 */

#include <stddef.h>
#include <stdlib.h>
#include <symbol.h>
#include <string.h>

void sym_init(symbol *sym)
{
	sym->name = NULL;
	sym->type = sym_t_none;
	sym->mutability = sym_m_none;
	sym->scope = NULL;
}

void sym_set_name(symbol *sym, char *name)
{
	sym->name = malloc(strlen(name) + 1); // from manpage: no return value shall be reserved to indicate an error
	strcpy(sym->name, name);
}

void sym_set_type(symbol *sym, sym_types type)
{
	sym->type = type;
}

void sym_set_mutability(symbol *sym, sym_mutability mutability)
{
	sym->mutability = mutability;
}

char* sym_get_name(symbol *sym)
{
	return sym->name;
}

sym_types sym_get_type(symbol *sym)
{
	return sym->type;
}

sym_mutability sym_get_mutability(symbol *sym)
{
	return sym->mutability;
}

void sym_deinit(symbol *sym)
{
	free(sym->name);
}
