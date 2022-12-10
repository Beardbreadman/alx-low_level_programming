#include <stdio.h>

/**
 * main - print reversed alphabet
 * Description: print lowercase alphabets a-z in inverse
 * Return: Always 0
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');	
	return (0);
}
