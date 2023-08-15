/*
 * File name: 0-putchar.c
 *
 * Made by; Nixon
 */

#include <main.h>

/**
 * main - entry point of program
 *
 * Description: prints _putchar
 *
 * Return: 0 always
 */

int main(void)
{
	char i[] = "_putchar";
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(i[n]);
	}

	_putchar('\n');

	return (0);
}
