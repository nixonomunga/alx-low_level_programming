#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any set of byte
 *
 * @s: string to be searched
 * @accept: string to be matched
 *
 * Return: pointer to bytes that match in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
