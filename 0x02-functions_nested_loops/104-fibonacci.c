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
	unsigned long int prev = 1, a = 0, hold_1;
	unsigned long int current = 2, b = 0, hold_2, hold_3;
	unsigned long int next, MOD = 1000000000;
	int limit = 98;

	printf("%lu, %lu", prev, current);

	for (i = current; i < limit; i++)
	{
		if (current + prev > MOD || b > 0 || a > 0)
		{
			hold_1 = (current + prev) / MOD;
			hold_2 = (current + prev) % MOD;
			a = b, b = hold_3;
			prev = current = hold_2;

			printf("%lu%010lu", b, current);
		}
		else
		{
			hold_2 = current + prev;
			prev = current;
			current = hold_2;

			printf("%lu", current);
		}

		if (i != 97)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
