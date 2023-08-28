#include "main.h"

/**
 * _strchr - functions that locates a charcater in a string
 *
 * @s: string
 * @c: character to be located
 *
 * Return: to first occurence of character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
