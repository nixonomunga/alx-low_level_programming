#include "main.h"

/**
 * swap_char - swaps characters
 *
 * @a: character to be swapped(first)
 *
 * @b: character to be swapped(second)
 *
 * Return: none
 */

void swap_char(char *a, char *b)
{
	char n = *a;
	*a = *b;
	*b = n;
}

/**
 * rev_string - reverses string
 *
 * @s: string to be reversed
 *
 * Return: none
 */

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
