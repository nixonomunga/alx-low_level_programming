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
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			printf("%d", i);
		}
	}

	printf("\n");

	return (0);
}
