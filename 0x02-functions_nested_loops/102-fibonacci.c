/*
 * File: 102-fibonacci.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - first 50 fibonacci numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int limit = 50;
	int i;
	int start_1 = 1;
	int start_2 = 2;
	int _next;

	printf("%d, %d", start_1, start_2);

	for (i = start_2; i < limit; i++)
	{
		_next = start_1 + start_2;
		printf(", %d", _next);

		start_1 = start_2;
		start_2 = _next;
	}

	printf("\n");

	return (0);
}
