#include "main.h"
/**
 * is_prime - prime
 * @x: number
 * @y: number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	else if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}
/**
 * is_prime_number -verifies if its a prime number
 * @n: number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
