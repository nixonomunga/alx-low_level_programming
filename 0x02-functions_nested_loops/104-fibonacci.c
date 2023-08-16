/*
 * File: 104-fibonacci.c
 *
 * Made By: Nixon
 */

#include <stdio.h>
#include <limits.h>

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

	printf("%lu, %lu", prev, current);

	for (i = current; i < limit; i++)
	{
		next = (current + prev) % INT_MAX;

		printf(", %lu", next);

		prev = current;
		current = next;
	}

	printf("\n");

	return (0);
}
