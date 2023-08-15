/*
 * File name: 0-putchar.c
 *
 * Made by; Nixon
 */

#include <stdio.h>

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
		putchar(i[n]);
	}

	putchar('\n');

	return (0);
}
