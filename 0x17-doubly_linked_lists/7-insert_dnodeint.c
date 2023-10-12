#include "lists.h"

/**
 * insert_dnodeint_at_index - a func that inserts a new
 * node at a given position.
 * @h: a head pointer to the dlinked list
 * @idx: the index positon to insert the new_node
 * @n: the int data for the new_node
 * Return: the addrs of the new_node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new_node;

	aux = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = aux;
	new_node->next = aux->next;
	aux->next->prev = new_node;
	aux->next = new_node;

	return (new_node);
}
