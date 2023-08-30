#include "main.h"

/**
 * _root - finds the root to check with n
 *
 * @n: number to look for root
 * @x: number to iterate with
 *
 * Return: x
 */

int _root(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x <= n)
	{
		return (_root(n, x + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 *
 * @n: number to find sqaureroot
 *
 * Return: sqaureroot else -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_root(n, 2));
}
