/*
 * File: 2-print_alphabet.c
 *
 * Made by: Nixon
 */

#include <stdio.h>

/**
 * main: entry
 *
 * Description: prints alphabet in lowercase
 *
 * Return: 0 always
 */

int main(void)
{
  char u = 'a';

  for(; u<='z'; u++)
    putchar(u);

  putchar(\n);

  return (0);
  
}
