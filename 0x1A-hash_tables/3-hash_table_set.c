#include "hash_tables.h"
/**
 * pair - make the pair key: Value.
 * @key: the key word.
 * @value: the storage value.
 * Return: a new node.
 */
hash_node_t *pair(const char *key, const char *value)
{
	hash_node_t *nodo_pair = malloc(sizeof(hash_node_t));

	if (nodo_pair == NULL)
	{
		free(nodo_pair);
		return (NULL);
	}
	nodo_pair->key = strdup(key);
	nodo_pair->value = strdup(value);
	nodo_pair->next = NULL;
	return (nodo_pair);
}

/**
 * hash_table_set - Insert an element to the hash table.
 * @ht: the hash table.
 * @key: the key word.
 * @value: the storage value.
 * Return: 1 if success and 0 if fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current_item = NULL, *item = NULL;
	int index = 0;

	if (strlen(key) == 0 || !ht || !ht->array || !ht->size)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	item = pair(key, value);

	current_item = ht->array[index];
	if (current_item == NULL)
		ht->array[index] = item;
	while (current_item)
	{
		if (strcmp(key, current_item->key) == 0)
		{
			strcpy(ht->array[index]->value, strdup(value));
			free(item);
			return (1);
		}
		else
		{
			item->next = current_item;
			current_item = item;
			return (1); 
		}
	}
	return (1);
}
