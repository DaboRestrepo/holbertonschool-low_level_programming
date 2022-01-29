#include "hash_tables.h"
/**
 * hash_table_print - Print the hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, count = 0;

	if (!ht || !ht->array || !ht->size)
		return;
	printf("{");
	for (index = 1; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", ht->array[index]->key, ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
			count++;
		}
	}
	printf("}\n");
}
