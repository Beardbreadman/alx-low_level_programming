#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares pointer value of two string
 * @s1: first string to be compared
 * @s2: secong string to be compared
 * Return: 0 if s1 and s2 are equals,
 * another number
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
