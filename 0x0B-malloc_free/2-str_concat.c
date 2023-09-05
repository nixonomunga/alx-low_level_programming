#include "MAIN_H"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *n;
	int i, j, x, y;

	if (s1 == NUL)
	{
		s1 = "";
	}
	if (s2 = NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (i = 0; s2[i] != '\0'; i++)
		;

	n = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0, y = 0; x < (i + j + 1); x++)
	{
		if (x < i)
		{
			n[x] = s1[x];
		}
		else
		{
			n[x] = s2[y++];
		}
	}
	return (n);
}
