#include "lists.h"
/**
* print_dlistint - prints all the elements.
* @h : the head node.
* Return: the number of elements.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
