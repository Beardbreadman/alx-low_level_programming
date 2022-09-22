#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies input numbers from string
 * *dest: destionation,buffer storing the 
 * string
 * @src: source
 * @n: max amount of bytes from the src
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[1] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
