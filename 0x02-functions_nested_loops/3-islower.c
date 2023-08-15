/*
 * File name: 3-islower.c
 *
 * Made by: Nixon
 */

#include "main.h"

/**
 * main - Entry point of program
 *
 * Return: 0 always
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
