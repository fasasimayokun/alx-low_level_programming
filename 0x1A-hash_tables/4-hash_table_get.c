#include "hash_tables.h"

/**
 * hash_table_get - a func that gets a value associated with a key
 * @ht: the hash table to get the value
 * @key: the key to get the value
 * Return: the value associated with the key else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *aux;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			return (aux->value);
		}
		aux = aux->next;
	}
	return (NULL);
}
