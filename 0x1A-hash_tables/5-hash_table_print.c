#include "hash_tables.h"
/**
 * hash_table_print - function that print hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t **current, *node;

	if (ht == NULL)
		return;
	i = 0;
	size = ht->size;
	current = ht->array;

	printf("{");
	while (i < size)
	{
		node = current[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				if (node->key != NULL && node->value != NULL)
				{
					printf("\'%s\': ", node->key);
					printf("\'%s\'", node->value);
					node = node->next;
					if (node != NULL)
						printf(", ");
				}
			}
			i++;
		}
	}
	printf("}\n");
}
