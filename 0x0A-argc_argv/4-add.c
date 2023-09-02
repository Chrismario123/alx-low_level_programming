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
	int u, p;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (u = 1 ; u < argc ; u++)
		{
			for (p = 0 ; argv[u][p] != '\0' ; p++)
			{
				if (!(isdigit(argv[u][p])))
				{
					printf("error\n");
					return(1);
				}
			}
			sum = sum + atoi(argv[u]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
