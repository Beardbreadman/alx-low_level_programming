#include <stdio.h>
#include "main.h"

/**
 * _isupper - mandate to check if a charcter is uppercas
 * @c: input integer value
 *Return: 1 if true that it is an uppercase, 0 if not
 */

 int _isupper(int c)

 {
 	if (c >= 65 && c <= 90)
 	{	
		 return (1);
 	}
 	else
 	{
		return (0);
	}
 }
