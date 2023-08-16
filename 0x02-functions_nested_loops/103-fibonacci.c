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
	int prev = 1;
	int current = 2, c;
	int sum_even = 0;
	int limit = 4000000;

	while (current < limit)
	{
		if (current % 2 == 0)
		{
			sum_even += prev;
		}

		c = current;
		current += i;
		prev = c;
	}

	printf("%d\n", sum_even);

	return (0);
}
