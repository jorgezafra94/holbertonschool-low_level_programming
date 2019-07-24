#include "function_pointers.h"
/**
 * print_name - function that calls a char and a pointer to a function
 * @name: input char
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
