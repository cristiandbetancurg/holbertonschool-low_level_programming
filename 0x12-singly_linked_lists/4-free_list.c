#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list now
 * @head: the first node str next node
*/
void free_list(list_t *head)
{
	int i;
	list_t *mid;

	for (i = 0; head; i++)
	{
		mid = head;
		head = head->next;
		free(mid->str);
		free(mid);
	}
}
