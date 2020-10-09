#include "holberton.h"

/**
 * _strlen_recursion - eturns the length a string
 * @s: string to the count
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int n;

	if (s[i] != '\0')
	{
		n = _strlen_recursion(&s[i + 1]);
	} else
		return (0);

	return (n + 1);
}

