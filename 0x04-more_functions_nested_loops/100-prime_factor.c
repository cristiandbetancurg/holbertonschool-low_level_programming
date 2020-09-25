#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints out the highest prime
 * Return: 0
 */
int main(void)
{
	int i;
	long n;

	n = 612852475143;
	i = 2;

	while (i < n)
	{
		while (n % i == 0 && i != n)
			n /= i;
		i++;
	}
	printf("%lu\n", n);
	return (0);
}
