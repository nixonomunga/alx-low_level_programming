/*
 * File: 1-last_digit.c
 *
 * Made by: Nixon
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: Prints last digit
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int n, last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;

	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,
		       last_d);
	}

	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}

	else if (last_d < 6 && last_d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, last_d);
	}

	return (0);

}
