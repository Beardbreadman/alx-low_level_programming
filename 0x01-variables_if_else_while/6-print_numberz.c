#include <stdio.h>

/**
 * main - print numbers between 0 to 9
 * Description: print 0-9 using putchar
 * while using int variable
 * Return: Always o
 */

int main(void)

{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');
	return (0);
}
