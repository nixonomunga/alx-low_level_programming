/*
 * File: 101-natural.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - program to print multiple of 3 and 5
 *
 * Return: 0 always
 */

int main(void)
{
	int x = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			x += i;
		}

		printf("%d", x);
	}

	printf("\n");

	return (0);
}
