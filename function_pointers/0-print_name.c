#include "function_pointers.h"
#include <stddef.h>

/**
* print_name - entry point
* @name: name we want to print
* @f: function pointer to the function used to print name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
