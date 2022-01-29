#include "hash_tables.h"
/**
 * hash_table_get - Get the index.
 * @ht: Hash table.
 * @key: Key word.
 * Return: the value or null.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	index = key_index((unsigned char *)key, ht->size);
	while (ht->array[index] != NULL && ht->array[index]->key != NULL &&
	strcmp(key, ht->array[index]->key) != 0)
		ht->array[index] = ht->array[index]->next;
	if (ht->array[index] == NULL)
		return (NULL);
	else
		return (ht->array[index]->value);
}
