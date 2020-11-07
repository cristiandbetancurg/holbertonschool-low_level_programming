#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes node
 * @head: the first node
 * @index: the index of the node to delete now head
 * Return: 1 if it succeeded -1 if it fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new, *mid;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		new = *head;
		*head = new->next;
		free(new);
		return (1);
	}
	mid = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (mid->next == NULL)
			return (-1);
		mid = mid->next;
	}
	new = mid->next;
	mid->next = new->next;
	free(new);
	return (1);
}
