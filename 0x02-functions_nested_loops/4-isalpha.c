/*
 * File name: 4-isalpha.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * _isalpha - checks letter
 *
 * @c: integer returns 1 for true
 *
 * Return: 1 if successful
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else

	{
		return (0);
	}
}
