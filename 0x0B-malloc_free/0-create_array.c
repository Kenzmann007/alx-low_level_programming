#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that creates an array
 *
 * @size: parameter with the size of an array
 * @c: element of the array
 *
 * Return: return the value
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (0);
	}
	else if (a == NULL)
	{
		return (0);
	}
	else
	{
		while (i < size)
		{
			a[i] = c;
			i++;
		}
		return (a);
	}

	return (0);
}
