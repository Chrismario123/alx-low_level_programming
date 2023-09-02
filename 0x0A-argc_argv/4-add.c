#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - function summing two numbers
 * @argc: argument count
 * @argv: argument vector
 * * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, p;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1 ; i < argc ; i++)
			{
			for (p = 0 ; argv[i][p] != '\0' ; p++)
			{
				if (!(isdigit(argv[i][p])))
				{
					printf("error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
