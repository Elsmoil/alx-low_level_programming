#include <stdio.h>

/**
 * main - print numbers of arugments passed.
 * @argc: number of command line arguments.
 * @argv: poiner to an array of command line.
 * Return: 0-succuss, non-zero-fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
