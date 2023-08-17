#include "main.h"

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
			if (i > 9)
			{
				_putchar('1');
			}

			_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
