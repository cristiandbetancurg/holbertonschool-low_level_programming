#include <stdlib.h>
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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	cat = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!cat)
		return (NULL);
	for (i = 0; i < len1; i++)
		cat[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		cat[i] = s2[j];
	cat[i] = 0;
	return (cat);
}

