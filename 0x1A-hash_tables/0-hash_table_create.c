#include "hash_tables.h"

/**
 * hash_table_create - a func that creates a hashtable
 * @size: the size of the arr
 * Return: the addrs to the newnode created hashtable initialized to NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int nm;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (nm = 0; nm < size; nm++)
	{
		hash_table->array[nm] = NULL;
	}
	return (hash_table);
}
