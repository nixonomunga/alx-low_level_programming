#include "main.h"

/**
 * print_rev - prints in reverse
 *
 * @s: string to be printed in reverse
 *
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
