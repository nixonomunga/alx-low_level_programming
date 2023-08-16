/*
 * File: 104-fibonacci.c
 *
 * Made By: Nixon
 */

#include <stdio.h>

/**
 * main - prints first 98 fibonacci
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	unsigned long int prev = 1;
	unsigned long int current = 2;
	unsigned long int next;
	int limit = 98;

	const unsigned int MOD = 1000000000;

	printf("%lu, %lu", prev, current);

	for (i = current; i < limit; i++)
	{
		if ((unsigned long)current > (unsigned long)(-1) -
		    (unsigned long)prev)
		{
			break;
		}

		next = (current + prev) % MOD;

		printf(", %lu", next);

		prev = current;
		current = next;
	}

	printf("\n");

	return (0);
}
