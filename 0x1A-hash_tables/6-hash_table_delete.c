#include "hash_tables.h"

/**
 * hash_table_delete -  a func that deletes a hash table.
 * @ht: the hash table to delete
 * Return: void (nothing)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int nm;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (nm = 0; nm < ht->size; nm++)
	{
		while (ht->array[nm] != NULL)
		{
			next = ht->array[nm]->next;
			free(ht->array[nm]->key);
			free(ht->array[nm]->value);
			free(ht->array[nm]);
			ht->array[nm] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
