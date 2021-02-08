#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 * Return: Pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	hash_node_t **node;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = calloc(size, sizeof(node));
	if (new->array == NULL)
		return (NULL);

	new->size = size;
	return (new);
}
