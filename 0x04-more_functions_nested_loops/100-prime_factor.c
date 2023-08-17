/*
 * File: 100-prime_factor.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - prints largest prime number
 *
 * Description: number to find largest prime no.
 *
 * Return: none
 */

int main(void)
{
	long long int a;
	long long int c = 612852475143;

	for (a = 3; a < c; a = a + 2)
	{
		while ((c % a == 0) && (c != a))
		{
			c = c / a;
		}
	}

	printf("%lld\n", c);

	return (0);
}
