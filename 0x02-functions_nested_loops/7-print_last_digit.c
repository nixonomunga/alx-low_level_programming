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

	x = n % 10;

	if (x < 0)
	{
		x *= -1;
	}

	return (last_digit);
}
