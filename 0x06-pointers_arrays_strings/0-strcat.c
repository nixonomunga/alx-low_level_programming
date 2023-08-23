/**
 * _strcat - concatenate two strongs
 *
 * @dest: to concatenate to
 *
 * @src: to concatenate from
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
