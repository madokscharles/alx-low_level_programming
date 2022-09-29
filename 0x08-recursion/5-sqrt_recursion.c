#include "main.h"

/**
 * helper - helps return the natural square root of a number
 * @n: integer
 * @x: square root of n
 *
 * Return: square root or -1.
 */

int helper(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (helper(n, ++x));

	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 0));
}
