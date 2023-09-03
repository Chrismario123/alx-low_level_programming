#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, p;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (p = 0 ; s[i] != accept[p] ; p++)
		{
			if (accept[p] == '\0')
				return (i);
		}
	}
	return (0);
}
