#include "main.h"

/**
 * _isalpha - function checks for the parameter of c in lowere n upper case
 * @c: is the parameter to be checked
 * Return: 1 or 0 on success or failure
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
