#include "main.h"

/**
* print_alphabet_x10 - this function prints alphabet 10x in lower case
* Return: return nothing
*/

void print_alphabet_x10(void)
{
	int ma;
	char ja;

	for (ma = 1 ; ma <= 10 ; ma++)
	{
		for (ja = 'a' ; ja <= 'z' ; ja++)
			_putchar(ja);
		_putchar('\n');
	}
}
