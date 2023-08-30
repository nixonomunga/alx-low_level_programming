#include "main.h"

/**
 * factorial - to find factorial of a given number
 *
 * @n: given number
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
