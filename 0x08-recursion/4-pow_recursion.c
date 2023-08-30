#include "main.h"

/**
 * _pow_recursion - calculates power of a value
 *
 * @x: number
 * @y: power
 *
 * Return: value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
