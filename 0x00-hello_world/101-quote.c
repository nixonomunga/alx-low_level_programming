/*
 * File name: 101-quote.c
 *
 * Made by: Nixon
 */

#include <unistd.h>
/**
 * main - used to print the line in write function
 *
 * Description: Prints line to the standard error
 *
 * Return: 1 always
 */

int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
