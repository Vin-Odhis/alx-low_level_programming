#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* A program that prints all the numbers*/
/* of base 16 in lowercase,*/
/* followed by a new line*/

/**
 * main - Entry point
 *
 * Return: Always 0 (succss)
 */
int main(void)
{
	int i;
	char l;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);

}
/* END */
