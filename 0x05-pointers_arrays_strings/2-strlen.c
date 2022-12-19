#include <stdio.h>

/**
 * _strlen -return the length of a string
 * @s: input string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\'; i++);
		
	return (i);
}
