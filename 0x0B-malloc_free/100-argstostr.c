#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments
 *
 * @ac: argument count
 * @av: pointer to array of strings
 *
 * Return: Pointer to new string || NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int i, total_length = 0, position = 0;
	char *result;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}

	result = (char *)malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + position, av[i]);
			position += strlen(av[i]);
			result[position] = '\n';
			position++;
		}
	}
	result[total_length] = '\0';

	return (result);
}
