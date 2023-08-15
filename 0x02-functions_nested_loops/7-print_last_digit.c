/*
 * File: 7-print_last_digit.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *
 * @n: number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int x;

	if ((n > 0) || (n < 0))
	{
		x = (n % 10);
	}

	else
	{
		x = 0;
	}

	return (x);
}
