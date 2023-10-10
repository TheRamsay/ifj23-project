/** IFJ2023 xramas01 solution
 * xramas01; Jakub Ramaseuski
 * 
*/

#include <stddef.h>
#include <stdlib.h>
#include <symbol.h>
#include <string.h>



void sym_init(symbol *sym)
{
	sym->name = NULL;
	sym->type = sym_none;
	sym->scope = NULL;
}

void sym_set_name(symbol *sym, char *name)
{
	sym->name = malloc(strlen(name) + 1); // from manpage: no return value shall be reserved to indicate an error
	strcpy(sym->name, name);

}

void sym_deinit(symbol *sym)
{
	free(sym->name);
}
