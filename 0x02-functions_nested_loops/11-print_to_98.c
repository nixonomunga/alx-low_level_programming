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
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}

	for (i = n; i >= 98; i--)
	{
		printf("%d, ", i);
	}

	printf("\n");
}
