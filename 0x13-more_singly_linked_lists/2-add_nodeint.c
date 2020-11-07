#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning list
 * @head: the header
 * @n: the int to add
 * Return: a new node on the head of linked list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
