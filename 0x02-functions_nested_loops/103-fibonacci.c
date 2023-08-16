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
	long prev = 1;
	long current = 2;
	long long next;
	long long limit = 4000000;

	printf("%ld\n", current);

	for (i = current; i < limit; i++)
	{
		next = current + prev;

		current = next;
		prev = current;

		if (next % 2 == 0)
		{
			printf("%lld\n", next);
		}
	}

	return (0);
}
