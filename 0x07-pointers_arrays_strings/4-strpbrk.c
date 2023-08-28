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
	while (s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
