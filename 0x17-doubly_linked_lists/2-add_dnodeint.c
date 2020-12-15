#include "lists.h"
/**
* add_dnodeint - adds new node at the beginning of the list.
* @head : the head node.
* @n : the data
* Return: new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (*head)
{
new->prev = NULL;
new->next = *head;
(*head)->prev = new;
*head = new;
return (new);
}

*head = new;
return (*head);
}
