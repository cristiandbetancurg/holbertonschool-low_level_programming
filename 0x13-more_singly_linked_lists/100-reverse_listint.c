#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: header
 * Return: first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *mid;
	int i;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	new = NULL;
	for (i = 0; *head; i++)
	{
		mid = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = mid;
	}
	*head = new;
	return (*head);
}
