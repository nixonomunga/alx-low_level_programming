/**
 * _strlen - returns length of a string
 *
 * @s: string to be returned
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
