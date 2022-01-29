#include "hash_tables.h"
/**
 * hash_table_set - Insert an element to the hash table.
 * @ht: the hash table.
 * @key: the key word.
 * @value: the storage value.
 * Return: 1 if success and 0 if fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	unsigned long int index = 0;

	if (item == NULL)
	{
		free(item);
		return (0);
	}
	if (strlen(key) == 0 || !ht || !ht->array || !ht->size)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = item;
	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			strcpy(ht->array[index]->value, strdup(value));
			free(item);
			return (1);
		}
		else
		{
			item->next = ht->array[index];
			ht->array[index] = item;
			return (1);
		}
	}
	return (1);
}
