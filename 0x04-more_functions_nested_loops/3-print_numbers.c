/**
 * print_numbers - prints numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
