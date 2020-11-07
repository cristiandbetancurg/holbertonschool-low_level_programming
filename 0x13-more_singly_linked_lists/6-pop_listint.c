#include "lists.h"
/**
 * pop_listint - function that delet first node
 * @head: header to delet
 * Return: the delected value
*/
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new = *head;
	*head = new->next;
	free(new);
	return (n);
}
