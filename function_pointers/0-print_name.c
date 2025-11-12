#include "function_pointers.h"
#include <stddef.h> 

/**
 * print_name - prints a name using a function pointer
 * @name: the name to be printed
 * @f: pointer to a function that takes a string and prints it
 *
 * Description: This function checks if the given function pointer
 * and name are valid, then uses the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
