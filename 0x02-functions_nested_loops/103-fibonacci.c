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
	unsigned long int prev = 1;
	unsigned long int current = 2;
	unsigned long int next, sum_even = 0;
	long limit = 4000000;

	for (i = current; i < limit; i++)
	{
		next = current + prev;
		if (next % 2 == 0)
		{
			sum_even += next;
		}

		current = next;
		prev = current;

		printf("%lu\n", sum_even);
	}

	return (0);
}
