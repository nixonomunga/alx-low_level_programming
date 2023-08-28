#include "main.h"

/**
 * cap_string - changes string to uppercase
 *
 * @str: string to be changed
 *
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, n;
	int x;
	char _ex[] = ",;.!?(){}\n\t\" ";

	for (i = 0, x = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			x = 1;
		for (n = 0; _ex[n] != '\0'; n++)
		{
			if (_ex[n] == str[i])
				x = 1;
		}

		if (x)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				x = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				x = 0;
			else if (str[i] > 47 && str[i] < 58)
				x = 0;
		}
	}
	return (str);
}
