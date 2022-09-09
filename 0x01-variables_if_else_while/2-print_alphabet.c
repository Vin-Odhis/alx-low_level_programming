#include <stdio.h>


/*program that prints the alphabet in lowercase, followed by a new line*/
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
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
	putchar('\n');
	return (0);
}
