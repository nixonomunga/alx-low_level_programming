/*
 * File name: 11-print_to_98.c
 *
 * Made by: Nixon
 */

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints number from n to 98
 *
 * @n: number to be printed from
 *
 * Return: none
 */

void print_to_98(int n)
{
	int k;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			printf("%d", k);

			if (k != 98)
			{
				printf(", ");
			}
		}
	}

	else if (n >= 98)
	{
		for (k = n; k >= 98; k--)
		{
			printf("%d", k);

			if (k != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
