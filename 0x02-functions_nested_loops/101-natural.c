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

	_multiple = x * y;

	for (i = 0; i < 1024; i++)
	{
		_multiple /= _multiple;
		printf("%d\n", _multiple);
	}
}
