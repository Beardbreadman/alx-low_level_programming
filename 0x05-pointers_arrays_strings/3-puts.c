#include "main.h"

/**
 * _puts - print a string, following by a new line
 * @str: input string
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n\)
			break;
			
		}
		_putchar(str[count]);
		count++;
		}
		
}
