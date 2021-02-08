#include "hash_tables.h"
/**
 * hash_table_set - function that add new node
 * @key: key
 * @value: value
 * @ht: hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *current;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	i = key_index((const unsigned char *) key, ht->size);
	current = (ht->array)[i];

	if (current != NULL)
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				current = current->next;
			}
			else
			{
				free(current->value);
				current->value = strdup(value);
				if (current->value == NULL)
					return (0);
				return (1);
			}
		}
	}
	new = create_node(key, value);
	if (new == NULL)
		return (0);
	new->next = (ht->array)[i];
	(ht->array)[i] = new;
	return (1);
}

/**
 * create_node - function to create node
 * @key: key
 * @value: value
 * Return: node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
