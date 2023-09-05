#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: character to initialize
 *
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	n = malloc(size * sizeof(*n));

	if (n == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}

	return (n);
}
