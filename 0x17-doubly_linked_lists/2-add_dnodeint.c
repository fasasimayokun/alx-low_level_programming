#include "lists.h"

/**
 * add_dnodeint - a func that adds a new node at the
 * beginning of a dlistint_t list
 * @head: the head pointer of the dlinked list
 * @n: the int data to add
 * Return: the address of the modified dlinked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
