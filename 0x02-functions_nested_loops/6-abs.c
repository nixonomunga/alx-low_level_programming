/*
 * File: 6-abs.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * _abs - prints absolute value
 *
 * @a: integer
 *
 * Return: integer
 */

int _abs(int a)
{
	int a;

	if (a >= 0)
	{
		return (a);
	}

	else
	{
		return (-a);
	}
}
