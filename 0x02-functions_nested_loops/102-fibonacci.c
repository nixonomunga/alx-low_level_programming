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
	int a = 50;
	int i;
	int _fib_seq[a];

	_fib_seq[0] = 1;
	_fib_seq[1] = 2;

	for (i = 2; i < a; i++)
	{
		_fib_seq[i] = _fib_seq[i - 1] + _fib_seq[i - 2];
	}

	for (i = 0; i < a; i++)
	{
		printf("%d", _fib_seq[i]);

		if (i < (a - 1))
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
