#include <stdio.h>

/**
 * puts2 - prints two characters of a string
 * @str: input string
 * Return: void 
 */

void puts2(char *str)

{
	int count = 0;

	while (count >= 0)
	{
	if (str[count] == '\0')
	{
		putchar('\n');
		break;
	}
	if (count % 2 == 0)
		putchar(str[count]);
	count++;
	}
}
