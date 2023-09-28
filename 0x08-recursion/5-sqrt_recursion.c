#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)

int _sqrt_recursion(int n)
{
	return ((n < 0) ? -1 :
		actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recursion to find the natural
 * @n: input
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
return
	((i * i > n) ? -1 : (i * i == n) ? i : actual_sqrt_recursion(n, i + 1));
}
