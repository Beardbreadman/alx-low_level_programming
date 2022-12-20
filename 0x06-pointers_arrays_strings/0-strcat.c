#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: for destination
 * @src: source string to append to @dest
 * Return: the pointer to resulting dest
 */

char *strcat(char *dest, char *src)

{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
