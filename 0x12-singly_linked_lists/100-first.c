#include <stdio.h>

void _beforemain(void) __attribute__ ((constructor));

/**
 * _beforemain - prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n
 * before the main function is executed
 *
 * Return: no return
 */

void _beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
