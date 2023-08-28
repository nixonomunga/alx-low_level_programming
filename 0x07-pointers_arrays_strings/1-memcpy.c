#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: copies to
 * @src: copies from
 * @n: number of bytes to be compied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
