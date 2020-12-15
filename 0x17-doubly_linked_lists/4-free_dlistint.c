#include "lists.h"
/**
* free_dlistint - free a list of nodes.
* @head : the head node.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
while (head)
{
tmp = head;
head = head->next;
free(tmp);
}
}
