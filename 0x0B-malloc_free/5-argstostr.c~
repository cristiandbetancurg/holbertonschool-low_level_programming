#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: int counter
 * @av: char array
 * Return: char concatenated
*/
char *argstostr(int ac, char **av)
{
	int len = 0, i = 0, j = 0;
	int k = 0, l;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			len++, j++;
		len++, i++;
	}
	len++;
	s = (char *)malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
		{
			s[k] = av[i][l];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
