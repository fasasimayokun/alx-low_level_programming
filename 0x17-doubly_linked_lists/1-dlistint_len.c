#include "lists.h"

/**
 * dlistint_len - a func that returns the number
 * of elems in a linked dlistint_t list
 * @h: the head pointer of the dlinked list
 * Return: the len of the dlinked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt;

	cnt = 0;

	if (!h)
		return (cnt);
	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
