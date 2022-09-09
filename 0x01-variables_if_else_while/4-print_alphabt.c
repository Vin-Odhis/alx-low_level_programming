#include <stdio.h>
/* program that prints the alphabet in lowercase, followed by a new line.*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		if ((l != 'e') && (l != 'q'))
		{
			purchar(l);
			l++;
		}
		else
		{
			l++;
		}
	}
	purchar('\n');
	return (0);
}
