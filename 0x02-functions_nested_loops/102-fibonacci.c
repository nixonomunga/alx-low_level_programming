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
	long int start_1 = 1;
	long int start_2 = 2;
	long int _next;

	printf("%ld, %ld", start_1, start_2);

	for (i = start_2; i < limit; i++)
	{
		_next = start_1 + start_2;

		start_1 = start_2;
		start_2 = _next;
		printf(", %ld", _next);
	}

	printf("\n");

	return (0);
}
