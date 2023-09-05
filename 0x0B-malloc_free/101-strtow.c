#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits string into words
 * @str: string
 * Return: NULL if it fails otherwise pointer to an array of words
 */

char **strtow(char *str)
{
	int i, j, word_counnt = 0, in_word = 0, word_index = 0, word_start = 0;
	char **words

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				str[i] = '\0';
				words[wod_index] = strdup(&str[word_start]);
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				word_index++;
				in_word = 0;
			}
		}
		else if (in_word == 0)
		{
			word_start = i;
			in_word = 1;
		}
	}

	if (in_word)
	{
		words[word_index] = strdup(&str[word_start]);
		if (words[word_index] == NULL)
		{
			for (j = 0; j <= word_index; j++)
			{
				free(word[j]);
			}
			free(words);
			return (NULL);
		}
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
