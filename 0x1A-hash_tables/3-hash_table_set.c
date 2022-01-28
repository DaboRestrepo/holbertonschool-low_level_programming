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
	hash_node_t *nodo_pair = NULL, *current;
	int index = 0;

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (key == NULL || ht == NULL)
		return (0);
	/* Si existe current en la hash table */
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			if (strcmp(value, current->value) == 0)
				return (1);
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		current = current->next;
	}
	/* Si no existe current en la Hash Table */
	if (!current)
	{
		nodo_pair = pair(key, value);
		nodo_pair->next = ht->array[index];
		ht->array[index] = nodo_pair;
	}
	return (1);
}
