#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 *
 * @argc: no. of arguments
 *
 * @argv: string of the commands passed
 *
 * Return: 0 if successful
 */

int main(int argc _attribute((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
