#include <stdio.h>
/**
 * print_name - funcion o call a function
 *
 * @name: parameter
 * @f: parameter function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
