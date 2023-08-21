#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: none
 */

void swap_char(char *a, char *b)
{
	char n = *a;
	*a = *b;
	*b = n;
}


void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		swap_char(start, end);
		start++;
		end--;
	}
}
