#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @j: first integer
 * @k: second integer
 * Return: void
 */
void swap_int(int *j, int *k)
{
	int c = *j;
	*j = *k;
	*k = c;
}
