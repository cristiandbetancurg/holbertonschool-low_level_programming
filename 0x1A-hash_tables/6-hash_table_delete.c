#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *temp, *node, *current;

	if (ht == NULL)
		return;
	i = 0;
	size = ht->size;

	while (i < size)
	{
		node = (ht->array)[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				current = node;
				temp = node->next;
				free(current->key);
				free(current->value);
				free(current);
				node = temp;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
