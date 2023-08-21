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
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		if (i == ('\n' || ' ' || '\t'))
		{
			continue;
		}
	}
}
