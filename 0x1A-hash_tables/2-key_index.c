#include "hash_tables.h"

/**
 * key_index - a func that gives you the index of a key.
 * @key: the index of the key to get
 * @size: the size of the arr hash table
 * Return: the index of the given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
