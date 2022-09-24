#include <stdio.h>
#include "main.h"

/**
 * print_number - print numbers between 0 - 9
 * Return: void
 */
void print_numbers(void)

{
	int ac;

	for (ac = 48; ac < 58; ac++)
	{
		_putchar(ac);
	}
	_putchar('\n');
}
