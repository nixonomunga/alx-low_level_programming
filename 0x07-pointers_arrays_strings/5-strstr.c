#include <stdlib.h>
#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: where to locate from
 * @needle: substring to locate
 *
 * Return: a pointer to the begining of substring || NULL if not there
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int n = 0;

	while (needle[n] != '\0')
	{
		n++;
	}

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != n)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}
