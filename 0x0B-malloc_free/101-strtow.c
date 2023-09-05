#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - splits string into words
 * @str: string
 * Return: NULL if it fails otherwise pointer to an array of words
 */

char **strtow(char *str)
{
	char *words = NULL;
	int i = 0, j = 0, n;

	if (strncmp(str, "", 1) || str == NULL)
	{
		return (NULL);
	}

	words = malloc((i + j + 1) * sizeof(char));

	if (words == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < i; n++)
	{
		words[n] = str[n];
	}

	i = n;
	for (n = 0; n < j; n++)
	{
		words[i] = str[n];
		i++;
	}

	words[i] = '\0';
	return (NULL);
}
