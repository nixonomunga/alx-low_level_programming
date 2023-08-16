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
	const unsigned long int MOD = 1000000000;
	int limit = 98;

	printf("%lu, %lu", prev, current);

	for (i = current; i < limit; i++)
	{
		if (current + prev > MOD || b > 0 || a > 0)
		{
			hold_1 = (current + prev) / MOD;
			hold_2 = (current + prev) % MOD;
			hold_3 = a + b + hold_1;
			a = b;
			b = hold_3;
			prev = current;
			current = hold_2;

			printf(", %lu%lu", b, current);
		}
		else
		{
			hold_2 = current + prev;
			prev = current;
			current = hold_2;

			printf(", %lu", current);
		}
	}

	printf("\n");

	return (0);
}
