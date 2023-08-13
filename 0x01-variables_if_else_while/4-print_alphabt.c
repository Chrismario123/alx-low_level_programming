#include <stdio.h>

/**
 * main - the main function for lowercase alphabet except q and e
 *
 * Return: 0 when successfully run
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
