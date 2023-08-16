#include "main.h"

/**
 * _islower - this function checks if c is lower case or not
 * @c: parameter of the function
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
