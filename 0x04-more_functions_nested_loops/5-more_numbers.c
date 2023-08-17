#include "main.h"
11;rgb:0000/0000/0000
/**
 * more_numbers - prints 0 through 14 ten times
 *
 * Return: none
 */

void more_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		for (; i < 15; i++)
		{
			if (i > 10)
			{
				_putchar('1');
				_putchar((i % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
