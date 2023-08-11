/*
 * File: 1-last_digit.c
 *
 * Made by: Nixon
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints last digit with description
 *
 * Return: 0 always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,
		       lastd);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, lastd);
	}

	return (0);
}
