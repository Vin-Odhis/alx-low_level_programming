#include <stdio.h>


/**
 * main - Entry point
 *program that prints the alphabet in lowercase, 
 *and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
