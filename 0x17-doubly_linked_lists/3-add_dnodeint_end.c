#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of the list.
* @head : the head node.
* @n : the data.
* Return: the new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (*head == NULL)
{
*head = new;
return (new);
}

tmp = *head;
while (tmp->next)
{
tmp = tmp->next;
}
new->prev = tmp;
new->next = NULL;
tmp->next = new;

return (new);
}
