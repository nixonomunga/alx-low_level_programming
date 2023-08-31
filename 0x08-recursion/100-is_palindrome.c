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
	if (s[0] != '\0')
	{
		return (1 + _strlen(s + 1));
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

int _checker(char *s, int n, int m)
{
	if (s[n] == s[m])
	{
		if (n > m / 2)
		{
			return (1);
		}
		else
		{
			return (_checker(s, i + 1, m - 1));
		}
	}
	else
	{
		return (0);
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
	return (_checker(s, 0, _strlen(s) - 1));
}
