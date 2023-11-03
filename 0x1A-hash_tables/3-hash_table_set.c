#include "hash_tables.h"

/**
 * new_hash_node -  a func that generates new hash node
 * @key: the key for the newly created node
 * @value: the value to the key
 * Return: the newnode else (NULL)
 */
hash_node_t *new_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - a func that adds an elem to the hash table
 * @ht: the hash table to add the elems
 * @key: the key for the value
 * @value: the data value
 * Return: 1 else 0 (unsuccessful)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *hash_node;
	hash_node_t *aux;
	char *newVal;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			newVal = strdup(value);
			if (newVal == NULL)
			{
				return (0);
			}
			free(aux->value);
			aux->value = newVal;
			return (1);
		}
		aux = aux->next;
	}
	hash_node = new_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[idx];
	ht->array[idx] = hash_node;
	return (1);
}
