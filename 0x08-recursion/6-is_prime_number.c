#include "main.h"

/**
 * is_prime_number - checks if an integer is prime.
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
