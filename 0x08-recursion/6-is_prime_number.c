#include "main.h"

/**
 * helper - detects if an input number is a prime number
 * @n: integer
 * @x: iterator
 * Return: 0 if not prime, 1 if prime
 */

int helper(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (helper(n, ++x));

	return (0);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 *
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (helper(n, 2));
}
