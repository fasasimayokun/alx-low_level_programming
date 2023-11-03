#include "hash_tables.h"

/**
 * hash_table_print - a func that prints the key value associate of hashtable
 * @ht: the hash table to print the key value pair
 * Return: void (nothing)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int nm;
	hash_node_t *aux;
	char fg = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (nm = 0; nm < ht->size; nm++)
	{
		aux = ht->array[nm];
		while (aux != NULL)
		{
			if (fg == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", aux->key, aux->value);
			fg = 1;
			aux = aux->next;
		}
	}
	printf("}\n");
}
