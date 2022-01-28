#include "hash_tables.h"
/**
 * hash_table_create - Create a new hash table.
 * @size: hash table size.
 * Return: the new hash table address.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!table)
	{
		free(table);
		return (NULL);
	}
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}
	for (; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->size = size;
	return (table);
}
