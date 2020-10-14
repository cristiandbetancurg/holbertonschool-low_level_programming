#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: copied string
 */
char *_strdup(char *str)
{
	int i, len;
	char *copy;

	if (!str)
		return (NULL);
	len = _strlen(str);
	copy = malloc(sizeof(char) * len + 1);
	if (!copy)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = 0;
	return (copy);
}
