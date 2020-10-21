#include "dog.h"
#include <stdio.h>
/**
 * init_dog -  initialize a variable of type a struct dog
 * @d: struct dog type
 * @name: char the name of the a dog
 * @age: float the age of the a dog
 * @owner: char the owner of the a dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
