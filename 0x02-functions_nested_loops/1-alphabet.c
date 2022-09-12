#include "main.h"

/**
 * main - print alphabetic in lowercase
 *
 * followed by a new line
 *
 * return: 0
 */
void print_alphabetic(void)
{
	int c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
