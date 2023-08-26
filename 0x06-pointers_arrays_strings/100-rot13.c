#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
			*ptr += 13;  /** Shft char 'a' to 'm'or'A' to 'M'by 13 pos*/
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
			*ptr -= 13;  /** Shft char 'n' to 'z' (or 'N' to 'Z') by 13 pos*/
		ptr++;
	}
	return (s);
}
