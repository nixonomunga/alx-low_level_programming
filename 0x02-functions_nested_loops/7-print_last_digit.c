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
	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
