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
	int a = 0, i;

	for (i = 1; i <= 50; i++)
	{
		a += i;
	}

	printf("%d", a);

	return (0);
}
