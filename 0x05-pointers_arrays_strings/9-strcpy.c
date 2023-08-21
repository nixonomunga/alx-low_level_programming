#include "main.h"

/**
 * _strcpy - copies string
 *
 * @dest: to be copied to
 *
 * @src: to be copied from
 *
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src;
	}

	*dest = '\0';
	return (temp);
}
