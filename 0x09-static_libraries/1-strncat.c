#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string
 *
 * @src: string
 *
 * @n: bytes to use from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (i = 0; src[i] != '\0' && n > 0; i++, n--, a++)
	{
		dest[a] = src[i];
	}
	return (dest);
}
