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
	unsigned int prev = 1;
	unsigned int current = 2;
	unsigned int next;
	int limit = 98;

	printf("%u, %u", prev, current);

	for (i = current; i < limit; i++)
	{
		next = current + prev;

		printf(", %u", next);

		prev = current;
		current = next;
	}

	printf("\n");

	return (0);
}
