#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* _strdup - function that
* returns a pointer to a newly allocated
* space in memory, which contains a copy
* of the string given as a parameter.
* @str: char
* Return: Null for fail or char for success
*/

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	p = (char *) malloc(1 + sizeof(char) * i);

	if (!p)
		return (NULL);

	j = 0;
	while (j <= i)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}

/**
* new_dog - initialize a struct variables
*@name: pointer type char
*@age: float var
*@owner: pointer type char
* Return: return pointer type dog_t
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	(*new_dog).age = age;

	(*new_dog).name = _strdup(name);
	if (!(new_dog)->name)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).owner = _strdup(owner);
	if (!(*new_dog).owner)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
