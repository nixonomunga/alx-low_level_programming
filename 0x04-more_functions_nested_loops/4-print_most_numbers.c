/**
 * print_most_numbers - prints 0 through 9 without 2 and 4
 *
 * Return: none
 */

void print_most_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
		{
			continue;
		}

		_putchar(a);
	}

	_putchar('\n');
}
