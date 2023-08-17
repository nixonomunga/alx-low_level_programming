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
		int a = 0;

		for (; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar('1');
			}

			_putchar((a % 10) + '0');
		}

		_putchar('\n');
	}
}
