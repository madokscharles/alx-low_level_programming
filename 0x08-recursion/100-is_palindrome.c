#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string
 *
 * Return: The length of the string s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * helper - helps compare each character of the string
 * @s: string
 * @n1: smallest
 * @n2: biggest
 *
 * Return: return 0 if its not palindrome return 1 if it is
 */

int helper(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + helper(s, n1 + 1, n2 - 1));
	}

	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (helper(s, 0, _strlen_recursion(s) - 1));
}
