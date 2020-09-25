#include "holberton.h"
/**
 * print_number - prints out any integer with only _putchar
 * @n: integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	/* solution largely inspired from Laura */
	unsigned int u;

	if (n < 0)
	{
		_putchar('-');
		u = -n;
	} else
		u = n;
	if (u / 10)
		print_number(u / 10);
	_putchar(u % 10 + '0');
}
