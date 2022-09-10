#include <stlib.h>
#include <time.h>
#include <stdio.h>

/* Task ten*/
/* using Betty style*/
/* a program that prints all possible different combinations of two digits.*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 49;
	while ((i < 57) && (j < 58))
	{
		putchar(i);
		putchar(j);
		if ((i == 56) && (j == 57))
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (j < 57)
			{
				j++;
			}
			else
			{
				i++;
				j = 1 + i;
			}
		}
	}
	return (0);
}
