#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 *
 * @s: character pointer
 * @b: constant charaxter
 * @n: integer
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
