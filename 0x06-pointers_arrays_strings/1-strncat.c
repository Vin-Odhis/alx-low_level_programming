#include "main.h"

/**
 * _strcat - concatenate two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at the end of dest
 * @n: integer parameter to be compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n))
{
	int a, b;

	a = 0;
	b = 0;


	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
