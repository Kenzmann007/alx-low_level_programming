#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: A pointer to an int that will be changed/updated
 *
 * Return: void that means our answer is correct
 */

int _strlen(char *s)

{

	int n = 0;

	while (s[n] != '\0')

	{ 

		n++;

	}

	return (n);

}
