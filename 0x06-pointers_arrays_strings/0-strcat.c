#include "main.h"

/**
 * _streat - function that concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to sourse input
 *
 * Return: pointer to resulting string @dest
 */

char *_stract(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c++)
		dest[c++] = src[c2];

	return (dest);
}
