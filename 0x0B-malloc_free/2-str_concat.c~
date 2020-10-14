#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size;
	int a;
	char *c;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[j] != '\0')
			j++;
	}
	size = i + j + 1;
	c = malloc(size * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		c[a] = s1[a];
	for (a = 0; a < j; a++)
		c[a + i] = s2[a];
	c[i + j] = '\0';
	return (c);
}
