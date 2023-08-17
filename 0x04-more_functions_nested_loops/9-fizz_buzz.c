#include <stdio.h>

/**
 * main - prints fizz for 3 multiples and fuzz for five
 *
 * Return: 0
 */

int main(void)
{
	int a = 1;

	for (; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
