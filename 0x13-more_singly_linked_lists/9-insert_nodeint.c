#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node given position
 * @head: head of ll
 * @idx: index of the new node
 * @n: int data to add
 * Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *mid, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		mid = *head;
		if (mid != NULL)
		{
			for (i = 0; i < (idx - 1); i++)
				mid = mid->next;
		}
		else
			return (NULL);
	}
	else
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = mid->next;
	mid->next = new;
	return (new);
}
