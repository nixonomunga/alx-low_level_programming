#include "main.h"

/**
 * _multiple - finds multiples of n
 *
 * @n: number to look for multiples
 * @x: number to iterate with
 *
 * Return: 1 if prime else 0
 */

int _multiple (int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (_multiple(n, x + 1));
	}
}

/**
 * is_prime_number - finds prime number
 *
 * @n: number to be checked
 *
 * Return: 1 if prime & 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_multiple(n, 2));
	}
}
