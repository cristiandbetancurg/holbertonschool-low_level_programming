#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index.
* @head : the head node.
* @index : the position which the node will be deleted.
* Return: -1 in fail else 1.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int x = 0;
dlistint_t *tmp;
tmp = *head;

if (!*head)
return (-1);

while (tmp)
{
if (x == index)
{
if (tmp->prev)
tmp->prev->next = tmp->next;

if (tmp->next)
tmp->next->prev = tmp->prev;

if (x == 0)
*head = tmp->next;

free(tmp);
return (1);
}

tmp = tmp->next;
x++;
}

return (-1);
}
