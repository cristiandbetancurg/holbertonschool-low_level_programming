#include "lists.h"
/**
 * print_listint - This function will print all the elements that are in a list
 * @h: linked list to print
 * Return: the numbers of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
