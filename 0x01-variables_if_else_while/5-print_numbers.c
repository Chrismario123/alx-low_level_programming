#include <stdio.h>

/**
 * main - the main function to print single digits from 0 to 9
 *
 * Return: always 0 when successful
 */

int main(void)
{
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
		printf("%d", ch);
	printf("\n");
	return (0);
}
