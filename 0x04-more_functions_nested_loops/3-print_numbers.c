#include "main.h"

/**
  * print_numbers - print number 0 to 9
  * Return: void
  */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
