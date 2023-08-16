/*
 * File: 103-fibonacci.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - prints even fibonacci numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	long prev = 0;
	long current = 1;
	long next, sum_even = 0;
	long limit = 4000000;

	for (i = current; i < limit; i++)
	{
		next = current + prev;
		if (next % 2 == 0)
		{
			sum_even += next;
		}

		printf("%ld\n", sum_even);

		current = next;
		prev = current;
	}

	return (0);
}
