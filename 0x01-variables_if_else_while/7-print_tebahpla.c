#include <stdio.h>

/**
 * main - the main function printing lower case alphabet in reverse
 *
 * Return: always 0 when successful
 */
int main(void)
{
	char al;

	for (al = 'z' ; al >= 'a' ; al--)
		putchar(al);
	putchar('\n');
	return (0);
}
