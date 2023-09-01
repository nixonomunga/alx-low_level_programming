/*
 * File name: 3-islower.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * _islower - checks lowercase
 *
 * @c: integer
 *
 * Return: 1 if successful
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
