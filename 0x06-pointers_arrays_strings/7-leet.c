#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	char *ptr = n;

	while (*ptr != '\0')
	{
		if (*ptr == 'a' || *ptr == 'A')
			*ptr = '4';
		else if (*ptr == 'e' || *ptr == 'E')
			*ptr = '3';
		else if (*ptr == 'o' || *ptr == 'O')
			*ptr = '0';
		else if (*ptr == 't' || *ptr == 'T')
			*ptr = '7';
		else if (*ptr == 'l' || *ptr == 'L')
			*ptr = '1';
		ptr++;
	}
	return (n);
}
