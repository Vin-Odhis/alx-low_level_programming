#include "main.h"

/**
 *
 * main - a function that prints 10
 * times the alphabet in lowercase
 * followed by a nwe line
 */

void print_alphabetic_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
