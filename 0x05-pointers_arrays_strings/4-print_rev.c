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

	while (s[i] != '\0')
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
