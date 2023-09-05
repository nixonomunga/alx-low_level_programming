#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space memory
 *
 * @str: charcter
 */

char *_strdup(char *str)
{
	char *n;
	int i, m;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	n = malloc(i * sizeof(*n) + 1);

	if (n == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < i; m++)
	{
		n[m] = str[m];
	}

	n[m] = '\0';

	return (n);
}
