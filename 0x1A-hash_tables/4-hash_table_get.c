#include "hash_tables.h"
/**
 * hash_table_get - function that return a value of a key
 * @key: key
 * @ht: hash table
 * Return: value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *value;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	i = key_index((const unsigned char *) key, ht->size);
	current = (ht->array)[i];

	if (current != NULL)
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				value = strdup(current->value);
				return (value);
			}
			current = current->next;
		}
	}
	return (NULL);
}
