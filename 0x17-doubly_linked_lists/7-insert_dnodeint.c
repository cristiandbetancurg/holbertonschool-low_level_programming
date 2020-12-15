#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h : the head node.
* @idx : the position of a specific node.
* @n : the data.
* Return: new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int x = 0;
dlistint_t *new, *tmp;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;

if (!h)
return (NULL);

if (idx == 0)
{
new = add_dnodeint(h, n);
return (new);
}

tmp = *h;
while (tmp)
{
if (x == idx - 1 && tmp->next == NULL)
return (add_dnodeint_end(h, n));

if (x == idx - 1)
{
new->next = tmp->next;
new->prev = tmp;
tmp->next = new;
tmp = new;
tmp->next->prev = new;
return (new);
}
tmp = tmp->next;
x++;
}

return (NULL);
}
