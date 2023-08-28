#include "lists.h"
/**
 * print_listint - a func that prints all the elems of a listint_t list.
 * @h: a pointer of type listint_t
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h != NULL)
	{
		printf("%d\n", h->elem);
		nm++;
		h = h->next;
	}

	return (nm);
}
