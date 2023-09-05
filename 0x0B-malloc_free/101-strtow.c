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
	int i, num_words = 0, word_index = 0, word_start = -1, word_length;
	char *word_array;

	if (str == NULL || strcmp(str, "") == 0)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (i == 0 || str[i - 1] != ' '))
			num_words++;
	}

	word_array = (char *)malloc((num_words + 1) * sizeof(char *));
	if (word_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && word_start == -1)
			word_start = i;

		else if ((str[i] == ' ' || str[i] == '\0') && word_start != -1)
		{
			word_length = i - word_start;
			word_array[word_index] = (char *)
				malloc((word_length + 1) * sizeof(char));
			if (word_array[word_index] == NULL)
				return (NULL);
			strncpy(word_array[word_index], str + word_start,
				word_length);
			word_array[word_index][word_length] = '\0';
			word_index++;
			word_start = -1;
		}
	}
	word_array[num_words] = NULL;
	return (word_array);
}
