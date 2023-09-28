#include "main.h"
/**
 * prime_helper - checks if a number is a prime number
 * @x: The number
 * @d: The divisor
 * Return: 1 if number is prime and 0 if not
 */
int prime_helper(int x, int d)
{
	if (x < 2)
		return (0);
	if (x == 2)
		return (1);
	if (x % d == 0)
		return (0);
	if (d * d > x)
		return (1);

	return (prime_helper(x, d + 1));
}

/**
 * is_prime_number - checks for primes
 * @n: The number being checked
 * Return: 1 if successful
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_helper(n, 2));
}
