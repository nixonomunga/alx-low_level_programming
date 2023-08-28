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
	while (*haystack)
	{
		for (int i = 0; needle[i]; i++)
		{
			if (*needle == *haystack)
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}
