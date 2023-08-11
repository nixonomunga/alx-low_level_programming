/*
 * File name: 9-print_comb.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints combination of single numbers
 *
 * Return: 0 always
 */

int main(void)
{
  int a = 0, i = 0;
  for (; a < 10, i < 10; a++, i++)
    {
      putchar(a);
      putchar(i);

      if ((c != 9) || (c == 9 && i != 9))
	{
	  putchar(',');
	}
    }

  putchar(\n);

  return (0);
}
