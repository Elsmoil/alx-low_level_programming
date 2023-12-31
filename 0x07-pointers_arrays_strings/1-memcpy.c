#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @n: number of bytes
 * @src:  memory where is copied
 * @dest: memory where is stored
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
