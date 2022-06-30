#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - function that allocates memory
 *
 * @b: parameter
 *
 * Return: return the pointer
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(sizeof(char) * b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
