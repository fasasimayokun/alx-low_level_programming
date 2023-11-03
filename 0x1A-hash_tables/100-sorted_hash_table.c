#include "hash_tables.h"
#include "100-sorted_cont.c"

/**
 * shash_table_create - a func that creates a sorted hashtable
 * @size: the size of the hashtalble
 * Return: the addrs to the new hash table else (NULL)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shashtb;
	unsigned long int nm;

	shashtb = malloc(sizeof(shash_table_t));
	if (shashtb == NULL)
		return (NULL);
	shashtb->size = size;
	shashtb->shead = NULL;
	shashtb->stail = NULL;
	shashtb->array = malloc(sizeof(shash_node_t) * size);
	if (shashtb->array == NULL)
	{
		free(shashtb);
		return (NULL);
	}
	for (nm = 0; nm < size; nm++)
		shashtb->array[nm] = NULL;
	return (shashtb);
}

/**
 * new_shash_node - a func that creates a new node for a sorted ht
 * @key: the key for the value
 * @value: the data value to store
 * Return: the address to the newnode else(NULL)
 */
shash_node_t *new_shash_node(const char *key, const char *value)
{
	shash_node_t *shashnd;

	shashnd = malloc(sizeof(shash_node_t));
	if (shashnd == NULL)
	{
		return (NULL);
	}
	shashnd->key = strdup(key);
	if (shashnd->key == NULL)
	{
		free(shashnd);
		return (NULL);
	}
	shashnd->value = strdup(value);
	if (shashnd->value == NULL)
	{
		free(shashnd->key);
		free(shashnd);
		return (NULL);
	}
	shashnd->next = shashnd->snext = shashnd->sprev = NULL;
	return (shashnd);
}

/**
 * insert_into_sorted_list - a func that adds a node to the sorted list
 * @table: the sorted hashtable
 * @node: the node to insert
 * Return: void(nothing)
 */
void insert_into_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *aux;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	aux = table->shead;
	while (aux != NULL)
	{
		if (strcmp(node->key, aux->key) < 0)
		{
			node->snext = aux;
			node->sprev = aux->sprev;
			aux->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		aux = aux->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - a func that sets the key to the value in the hashtable
 * @ht: the hashtable in sorted order
 * @key: the key to the value
 * @value: the data value
 * Return: int 1 else (0)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *newVal;
	shash_node_t *shashnd, *aux;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			newVal = strdup(value);
			if (newVal == NULL)
				return (0);
			free(aux->value);
			aux->value = newVal;
			return (1);
		}
		aux = aux->next;
	}
	shashnd = new_shash_node(key, value);
	if (shashnd == NULL)
		return (0);
	shashnd->next = ht->array[idx];
	ht->array[idx] = shashnd;
	insert_into_sorted_list(ht, shashnd);
	return (1);
}
