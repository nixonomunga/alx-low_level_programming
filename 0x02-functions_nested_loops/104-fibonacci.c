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
	long prev = 1;
	long current = 2;
	long next;
	int limit = 98;

	printf("%ld, %ld", prev, current);

	for (i = current; i < limit; i++)
	{
		next = current + prev;

		printf(", %lu", next);

		current = prev;
		prev = next;
	}

	return (0);
}
