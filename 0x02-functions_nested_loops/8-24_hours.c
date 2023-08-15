/*
 * File: 8-24_hours.c
 *
 * Made By: Nixon
 */

#include "main.h"

/**
 * jack_bauer - prints every minute of a day
 *
 * Return: none
 */

void jack_bauer(void)
{
	int h, min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
