#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: none
 */

void rev_string(char *s)
{
	int i, n;
	char m;

	for (i = 0, n = s[i] - 1; i < n; i++, n--)
	{
		m = s[i];
		s[i] = s[n];
		s[n] = m;
	}
}
