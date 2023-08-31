#include "main.h"

/**
 * _strlen - length of string finder
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s)
	{
		return (_strlen(s + 1) + 1);
	}
	return (0);
}

/**
 * _checker - looks if string is palindrome
 *
 * @s: string to be checked
 * @n: left char of string
 * @m: right char of string
 *
 * Return: true of false
 */

int _checker(char *s, int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else if (s[0] != s[n - 1])
	{
		return (0);
	}
	else
	{
		return (_checker((s + 1), (n - 2)));
	}
}


/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if successful 0 if not
 */

int is_palindrome(char *s)
{
	int n;

	n = _strlen(s);

	if (n <= 1)
	{
		return (1);
	}
	return (_checker(s, n));
}
