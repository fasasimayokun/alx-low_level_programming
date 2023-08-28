#include "lists.h"
/**
 * listint_len - a func that returns the num of elems in a linked lists
 * @h: pointer of type listint_t
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}
	return (nm);
}
