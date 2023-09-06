#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *abs;
	int j;
       int k = 0;

	if (str == NULL)
		return (NULL);
	for (j = 0 ; str[j] !=  '\0' ; j++)
		k++;
	abs = malloc(sizeof(char) * (k + 1));
			if (abs == NULL)
			return (NULL);
	else
	for (j = 0 ; str[j] != '\0' ; j++)

		abs[j] = str[j];

	return (abs);
}
