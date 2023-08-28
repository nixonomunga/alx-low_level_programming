#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 *
 * @s: string
 * @accept: bytes of intial segment
 *
 * Return: byte os initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	int acceptChar[256] = 0;

	for (int i = 0; accept[i]; i++)
	{
		acceptChar[(unsigned char)accept[i]] = 1;
	}

	for (int i = 0; s[i]; i++)
	{
		if (acceptChar[(unsigned char)s[i]])
		{
			j++;
		}
		else
		{
			break;
		}
	}

	return (j);
}
