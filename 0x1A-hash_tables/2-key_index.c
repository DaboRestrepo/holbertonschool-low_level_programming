#include "hash_tables.h"
/**
 * key_index - Determine the key index.
 * @key: the key word.
 * @size: the table size.
 * Return: the key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
