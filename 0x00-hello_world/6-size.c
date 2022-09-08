#include <stdio.h>

/**
 * main - print the size various types on the computer
 *
 * Description: using the main function
 * This program prints "The size of various types of computer"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof (c));
	printf("size of an int: %ld byte(s)\n", sizeof (i));
	printf("size of a long int: %ld byte(s)\n", sizeof (li));
	printf("size of a long long int: %ld byte(s)", sizeof (lli));
	printf("size of a float: %ld byte(s)", sizeof (f));
	return (0);
}

		


