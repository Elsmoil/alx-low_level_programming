#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string length to check
 *
 * Return: integer string length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * create_file - creates a file
 * @filename: file name to create
 * @text_content: text to write
 *
 * Return: 1 success 0 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fr;

	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fr == -1)
		return (-1);
	if (len)
		bytes = write(fr, text_content, len);
	close(fr);
	return (bytes == len ? 1 : -1);
}
