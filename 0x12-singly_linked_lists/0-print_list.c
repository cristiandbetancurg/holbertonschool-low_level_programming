#include "lists.h"
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list
 * @h: list with type list_t
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned long i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
