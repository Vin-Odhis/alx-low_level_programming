#include "main.h"

/**
 * _strcmp - Function which compare two strings and
 * @s1: first string
 * @s2:second string
 * Return:
 * return zero if s1 == s2
 * return negative number if s1 < s2
 * return positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s + i) && (s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;

	return (*(s1 + i) - *(s2 + i));
}
