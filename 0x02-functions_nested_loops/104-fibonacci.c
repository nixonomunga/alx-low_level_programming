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
	unsigned long prev = 1;
	unsigned long current = 2;
	unsigned long next;
	int limit = 98;

	printf("%lu, %lu", prev, current);

	for (i = current; i < limit; i++)
	{
		next = current + prev;

		printf(", %010lu", next);

		prev = current;
		current = next;
	}

	return (0);
}
