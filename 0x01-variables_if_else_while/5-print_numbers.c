#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 * Description: print all single digit numbers
 * Return: Always 0
 */

int main(void)

{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	putchar('\n');
	return (0);
}
