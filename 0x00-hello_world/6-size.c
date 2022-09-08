#include <stdio.h>

/**
 * main - print the size of various types on the computer it is compiled and run on
 *
 * Description using the main function
 * This program prints the size of various types on the computer it is compiled and run on.
 * Return (0)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %1d byte(s)\n", sizeof (c));
	printf("size of an int: %1d byte(s)\n", sizeof (i));
	printf("size of long int: %1d byte(s)\n", sizeof (li));
	printf("size of long long int: %1d byte(s)", sizeof (lli));
	printf("size of float: %1d byte(s)", sizeof (f));
	return (0);
}

		


