#include "main.h"
/**
 * print_rev - print a strinng in reverse, followed by newline
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= =)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}