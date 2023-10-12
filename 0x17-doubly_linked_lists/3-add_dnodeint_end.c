#include "lists.h"

/**
 * add_dnodeint_end - a func that adds a new node at the end
 * of a dlistint_t list
 * @head: the head pointer of the dlinked list
 * @n: the data to insert
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;

		aux->next = new_node;
		new_node->prev = aux;
	}
	return (new_node);
}
