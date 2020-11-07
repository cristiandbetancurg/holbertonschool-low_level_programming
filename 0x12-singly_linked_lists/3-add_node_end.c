#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end list
 * @head: linked to list
 * @str: string to the add
 * Return: a new node linked list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *mid;
	size_t i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	if (*head != NULL)
	{
		mid = *head;
		while (mid->next != NULL)
			mid = mid->next;
		mid->next = new;
	}
	else
		*head = new;
	return (new);
}
