#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *outcome;
	int s1len, s2len = 0;
	int i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	outcome = malloc(sizeof(char) * (s1len + s2len) + 1);

		if (outcome == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			outcome[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			outcome[s1len + i] = s2[i];
		return (outcome);
}
