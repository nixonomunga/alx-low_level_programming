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
	unsigned int i, k;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[i] == accept[k])
				{
					n++;
				}
			}
		}
		else
		{
			return (n);
		}
	}
	return (n);
}
