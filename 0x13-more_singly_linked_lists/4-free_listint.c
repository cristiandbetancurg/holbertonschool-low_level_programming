#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: the first node
*/
void free_listint(listint_t *head)
{
	int i;
	listint_t *mid;

	for (i = 0; head; i++)
	{
		mid = head;
		head = head->next;
		free(mid);
	}
}
