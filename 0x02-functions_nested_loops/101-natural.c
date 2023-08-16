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
	int x, i;

	for (i = x = 0; i < 1024; i++)
	{
		if ((x % 15) == 0)
		{
			printf("%d", x);
		}
	}

	printf("\n");

	return (0);
}
