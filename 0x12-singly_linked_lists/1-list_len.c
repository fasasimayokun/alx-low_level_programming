#include "lists.h"
#include <stdlib.h>
/**
 * list_len - a func that returns the num of elems in a linked list_t list
 * @h: pointer to list_t list
 * Return: len of elems in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
