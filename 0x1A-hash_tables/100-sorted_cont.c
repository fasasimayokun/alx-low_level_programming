#include "hash_tables.h"

/**
 * shash_table_get - a func that gets a value from the sorted hashtable
 * @ht: the sorted hashtable
 * @key: the key of the value
 * Return: char the value associated withe the key value pair
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *aux;

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
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}

/**
 * shash_table_print - a func that prints the sorted hashtable
 * @ht: the hashtable to print
 * Return: void(nothing)
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux;
	char fg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	aux = ht->shead;
	while (aux != NULL)
	{
		if (fg == 1)
			printf(", ");
		printf("'%s': '%s'", aux->key, aux->value);
		fg = 1;
		aux = aux->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a func that prints a shash table in reverse order
 * @ht: the shash table to print
 * Return: void(nothing)
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux;
	char fg = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	aux = ht->stail;
	while (aux != NULL)
	{
		if (fg == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", aux->key, aux->value);
		fg = 1;
		aux = aux->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - a func that deletes the shash table
 * @ht: the shash table to print
 * Return: void(nothing)
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int nm;
	shash_node_t *curr;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (nm = 0; nm < ht->size; nm++)
	{
		while (ht->array[nm] != NULL)
		{
			curr = ht->array[nm]->next;
			free(ht->array[nm]->key);
			free(ht->array[nm]->value);
			free(ht->array[nm]);
			ht->array[nm] = curr;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
