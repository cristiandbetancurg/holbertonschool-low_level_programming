#include "holberton.h"

/**
 * _strcat - Concatenates
 * @dest: pointer first string
 * @src: second string
 * Return: Concatenation
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i])
{
i++;
}
while (src[j])
{
dest[i + j] = src[j];
j++;
}

return (dest);
}
