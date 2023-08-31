#include "main.h"

/**
* _checker_str - checks if strings are same
*
* @s_1: first string
* @s_2: second string
* @n: left char of string
* @m: special char
*
* Return: i for true 0 for false
*/

int _checker_str(char *s_1, char *s_2, int n, int m)
{
	if (s_1[n] == '\0' && s_2[m] == '\0')
	{
		return (1);
	}
	if (s_1[n] == s_2[m])
	{
		return (_checker_str(s_1, s_2, n + 1, m + 1));
	}
	if (s_1[n] == '\0' && s_2[m] == '*')
	{
		return (_checker_str(s_1, s_2, n, m + 1));
	}
	if (s_2[m] == '*')
	{
		return (_checker_str(s_1, s_2, n + 1, m) || _checker_str
			(s_1, s_2, n, m + 1));
	}
	return (0);
}

/**
 * wildcmp - checks for identical string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: i if successful, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return (_checker_str(s1, s2, 0, 0));
}
