#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 when successful
 */
int main(void)
{
	int i;

	for (i = 'a' : i <= 'z' : i++)
		putchar(i);
	putchar("\n");
	return (0);
}
