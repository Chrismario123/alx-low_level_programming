#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int s1len, s2len = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		s1len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (output == NULL)
		return (NULL);

	if (n >= s2len)
	{
	for (j = 0; s1[j] != '\0'; j++)
		output[j] = s1[j];
	for (j = 0; s2[j] != '\0'; j++)
		output[s1len + j] = s2[j];
	output[s1len + j] = '\0';
	}
	else
	{
		for (j = 0; s1[j] != '\0'; j++)
			output[j] = s1[j];
		for (j = 0; j < n; j++)
			output[s1len + j] = s2[j];
		output[s1len + j] = '\0';
	}
	return (output);
}
