#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size - sizeof the array
 * Return: function that creates a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;

	tab = malloc(sizeof(hash_table_t));
	if (!tab || !size)
		return (NULL);

	tab->size = size;
	tab->array = calloc(size, sizeof(hash_table_t *));
	if (!tab->array)
	{
		free(tab);
		return (NULL);
	}

	return (tab);
}
