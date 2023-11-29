#include "main.h"

/**
 * _strlen - returns yhe length of a string
 * @: string length to check
 *
 * Return: integer length of string
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
 * append_text_to_file - appends text to a file
 * @filename: the file name to create
 * @text_content: text to write
 *
 * Return: 1 success 0 failure
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int fr;
	ssize_t bytes = 0, len = _strlen(text_content);
	
	if (filename)
		return (-1);
	fr = open(filename, O_WRONLY | O_APPEND);
	if (fr == -1)
		return (-1);
	f (len)
		bytes = write(fr, text_content, len);
	close(fr);
	return (bytes == len ? 1 : -1);
}
