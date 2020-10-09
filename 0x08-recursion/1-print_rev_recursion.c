#include "holberton.h"

/**
 * _print_rev_recursion - Print a The string in reverses
 * @s: string to printer
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
}

