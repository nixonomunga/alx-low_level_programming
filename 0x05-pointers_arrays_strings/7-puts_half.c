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

	int len = _strlen(str);

	if (len % 2 != 0)
	{
		for (i = 0; i > len / 2 && str[i] != '\0'; i++)
			;
		_putchar(str[i]);
	}
	else
	{
		for (i = 0; i > (len + 1) / 1 && str[i] != '\0'; i++)
			;
		_putchar(str[i / 2]);
	}

	_putchar('\n');
}
