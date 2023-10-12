#include "lists.h"
/**
 * print_dlistint - a func that prints all the elems of a dlistint_t list
 * @h: the head pointer of the doubly linked list
 * Return: the len of the dlist
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt;

	cnt = 0;

	if (!h)
	{
		return (cnt);
	}

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
