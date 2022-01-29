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
	unsigned long int index = 0;
	hash_node_t *item = malloc(sizeof(hash_node_t)), *current_item = NULL;

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
	current_item = ht->array[index];
	if (current_item == NULL)
		current_item = item;
	while (current_item != NULL)
	{
		if (strcmp(key, current_item->key) == 0)
		{
			current_item->value = strdup(value);
			free(item);
			return (1);
		}
		else
		{
			item->next = current_item;
			ht->array[index] = item;
			return (1);
		}
	}
	return (1);
}
