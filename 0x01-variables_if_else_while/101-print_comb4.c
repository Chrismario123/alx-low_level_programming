#include <stdio.h>

/**
 * main - function to print possible combination of 3 digits
 *
 * Return: always 0 when program is successful
 */

int main(void)
{
	int c, m, i;

	{
	for (c = 0 ; c <= 9 ; c++)
	for (m = 0 ; m <= 9 ; m++)
	for (i = 0 ; i <= 9 ; i++)
	{
		if (c < m && m < i)
		{
			putchar(c + '0');
			putchar(m + '0');
			putchar(i + '0');
			if (c != 7 || m != 8 || i != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
putchar('\n');
return (0);
}
