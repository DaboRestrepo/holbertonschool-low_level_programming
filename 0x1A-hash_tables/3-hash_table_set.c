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
	nodo_pair->key = malloc(sizeof(strlen(key) + 1));
	if (nodo_pair->key == NULL)
	{
		free(nodo_pair->key);
		return (NULL);
	}
	nodo_pair->value = malloc(sizeof(strlen(value) + 1));
	if (nodo_pair->value == NULL)
	{
		free(nodo_pair->value);
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
	/* Si existe current en la hash table */
	while (current_item)
	{
		if (strcmp(key, current_item->key) == 0)
		{
			if (strcmp(value, current_item->value) == 0)
				return (1);
			strcpy(ht->array[index]->value, value);
			return (1);
		}
	}
	return (1);
}
