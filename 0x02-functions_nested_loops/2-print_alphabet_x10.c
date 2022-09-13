#include "main.h"

/**
 *main - a function that prints ten
 *times the alphabet in lowercase
 *followed by a nwe line
 *
 *Return: 0
 */

void print_alphabet_x10(void)
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
