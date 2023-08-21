#include "main.h"

/**
 * puts_half - prints half of string
 *
 * @str: string to be printed
 *
 * Return: none
 */

void puts_half(char *str)
{
	int i = 0;

	for (; str[i] != 0; i++)
		;

	if (i % 2 != 0)
	{
		_putchar(str[(i - 1) / 2]);
	}
	else
	{
		_putchar(str[i / 2]);
	}

	_putchar('\n');
}
