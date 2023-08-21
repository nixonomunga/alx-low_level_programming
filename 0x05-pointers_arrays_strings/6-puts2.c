#include "main.h"


/**
 * puts2 - prints every other character of string
 *
 * @str: string
 *
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
