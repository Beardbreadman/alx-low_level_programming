#include <stdio.h>
#include "main.h"

/***
 * cap_string - capitalizes all words of a string
 * @s: input stringto be capitalised
 * Return: the pointer to destination
 */

char *cap_string(char *s)

{
	int count = 0, i;
	int sep_words[] = {32, 44, 46, 33,63,59, 9, 34, 40, 123, 125, 10, 41};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == sep_words[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
			