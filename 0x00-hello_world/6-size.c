#include <stdio.h>

/**
 * main - print the size of various types on the computer it 
 *
 * Description using the main function
 * This program prints "the size of various types on the computer it 
 * Return: (0)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %1d byte(s)\n", sizeof (c));
	printf("size of an int: %4d byte(s)\n", sizeof (i));
	printf("size of a long int: %8d byte(s)\n", sizeof (li));
	printf("size of a long long int: %8d byte(s)", sizeof (lli));
	printf("size of a float: %4d byte(s)", sizeof (f));
	return (0);
}

		


