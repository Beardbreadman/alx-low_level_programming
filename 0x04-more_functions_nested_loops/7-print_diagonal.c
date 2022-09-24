#include <stdio.h> 
#include "main.h"

/**
 * print-diagonal - print diagonal line n times
 * @n: number of time diagonal line is printed
 * Return: no return
 */

void print_daigonal(int n)

{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');

	}
	_putchar('\n');
}
