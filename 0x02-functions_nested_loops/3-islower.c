/*
 * File name: 3-islower.c
 *
 * Made by: Nixon
 */

#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase
 *
 * @c: integer
 *
 * Return: 1 when successive
 */

int _islower(int c)
{
	int c;

	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

/**
 * main - Entry point of program
 *
 * Return: 0 always
 */

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return (0);
}
