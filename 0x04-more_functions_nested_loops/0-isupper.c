/**
 * _isupper - checks uppercase
 *
 * @c: charcter to be checked
 *
 * Return: 1
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
			return (0);
	}

	return (1);
}
