#include "lists.h"
/**
 * list_len - is a function that will get a number of elements in a ll
 * @h: structed list
 * Return: the number of the elements
*/
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
