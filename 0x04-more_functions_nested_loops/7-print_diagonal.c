#include "holberton.h"

/**
 * print_diagonal - print a diagonal line of variable length
 * @n: length of line
 */
void print_diagonal(int n)
{
	int c, s, i;

	c = 1;
	s = 0;
	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		for (i = 0; i < c; i++)
			_putchar(i < s ? ' ' : '\\');
		_putchar('\n');
		c++;
		s++;
		n--;
	}
}
