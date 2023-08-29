#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int u;
	int i;

	for (u = 0 ; u < 8 ; u++)
	{
		for (i = 0 ; i < 8 ; i++)
			_putchar(a[u][i]);
		_putchar('\n');
	}
}
