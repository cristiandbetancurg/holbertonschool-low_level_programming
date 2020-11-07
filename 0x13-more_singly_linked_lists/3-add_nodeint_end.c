#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: the header
 * @n: the int to add
 * Return: a new node at the end
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *mid;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		mid = *head;
		while (mid->next != NULL)
			mid = mid->next;
		mid->next = new;
	}
	return (new);
}
