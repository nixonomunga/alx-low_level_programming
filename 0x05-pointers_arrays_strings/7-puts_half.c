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

	int half_len;

	for (; str[i] != 0; i++)
		;

	if (i % 2 == 0)
	{
		half_len = i / 2;
		half_len++;
	}
	else
	{
		half_len = (i - 1) / 2;
		half_len++;

	while (half_len < i)
	{
		_putchar(str[half_len]);
		half_len++;
	}

	_putchar('\n');
}
