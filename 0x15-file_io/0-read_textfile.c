#include "main.h"

/**
 * read_textfile - reads and prints a text from a file
 * @filename: file name to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 * */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fr = open(filename, o_RDONLY);
	if (fr == -1)
		return (0);
	bytes = read(fr, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fr);
	return (bytes);
}
