#include "lists.h"
#include <stdio.h>

/**
 * print_list - a func that outputs all the elements of a list_t list.
 * @h: pointer to the list_t list to output
 * Return: num of nodes outputted
 */
size_t print_list(const list_t *h)
{
	size_t nm = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nm++;
	}
	return (nm);
}
