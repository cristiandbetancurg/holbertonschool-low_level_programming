#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - addsnew node at the beginning list
 * @head: linked list
 * @str: string to the add
 * Return: a new node on the head linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (new);
}
