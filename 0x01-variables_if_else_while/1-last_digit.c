#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
 *
 * Description: using the main function
 * this program will display "a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n."
 * Return: o
 */
int main(void)
{
	int n;
	int l;

	srand(time(0)0;
	n = rand() - RAND_MAX/ 2;
	l = n % 10;

	if (l > 5 )
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (1 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	
	return (0);
	}
	
	
