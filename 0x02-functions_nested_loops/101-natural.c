/*
 * File: 101-natural.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - program to print multiple of 3 and 5
 *
 * Return: 0 always
 */

int main(void)
{
	int x, y, _multiple;
	int i;

	if (((x % 3) == 0) && ((y % 5) == 0))
	{
		x = y = 0;
		_multiple = x * y;

		for (i = x = y = 0; i < 1024; i++)
	{
		_multiple /= _multiple;
		printf("%d\n", _multiple);
	}
}
