#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *output;
	int i, b, k = 0;
	int count;
 
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; b++)
			count++;
		count++;
	}
		output = malloc(sizeof(char) * (count) + 1);
		if (output == NULL)
			return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; b++)
		{
			output[k] = av[i][b];
			k++;
		}
		output[k++] = '\n';
	}
	output[k] = '\0';
	return (output);
}
