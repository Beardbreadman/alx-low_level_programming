#include <stdio.h>
#include "main.h"

/**
 * stirng_toupper - changes all lowercase 
 * letters of a string
 * @s: input string
 * Return: the pointer to dest
 */

char *string_toupper(char *s)
{
	int a = 0;
	
	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
