#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node.
* @head : the head node.
* @index : the position of a specific node.
* Return: the nth node of the list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x = 0;

while (head)
{
if (x == index)
return (head);

head = head->next;
x++;
}
return (NULL);
}
