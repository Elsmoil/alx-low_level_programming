#include "main.h"

/**
 * _memcpy - function that copy memory area
 * @n: bytes to be copies
 * @src:  memory area to copy from
 * @dest: memory area to copy in
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		destr[r] = src[r];
		n--;
	}
	return (dest);
}
