#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - executes a function given as a parameter
 * @name: parameter
 * @f: function to execute
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
