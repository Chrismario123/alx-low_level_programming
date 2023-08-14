#include <stdio.h>

/**
 * main - this is the main function that prints hexadecimal in lowercase
 *
 * Return: always 0 when program is successful
 */

int main(void)
{
	int ch;
	char ma;

	for (ch = 0 ; ch < 10 ; ch++)
		putchar(ch + '0');
	for (ma = 'a' ; ma <= 'f' ; ma++)
		putchar(ma);
	putchar('\n');
	return (0);
}
