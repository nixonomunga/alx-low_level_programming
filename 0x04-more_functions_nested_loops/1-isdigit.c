/**
 * _isdigit - checks a digit 0 through 9
 *
 * @c: digit to be checked
 *
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c < '10')
		return (1);
	else
		return (0);
}
