#include "main.h"
/**
 * _isupper - check if c is upper
 * @c: iput for alphabet
 * Return: 1 if its uppercasee, 0if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
