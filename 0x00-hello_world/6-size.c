/*
 *File name: 6-size.c
11;rgb:0000/0000/0000*
 *Made by: Nixon
 */

#include <stdio.h>
/**
 * main - starts and if successful returns zero
 *
 * Description: prints size of various types
 *
 * Return: 0 always.
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
