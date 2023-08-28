#include "lists.h"
/**
 * add_nodeint_end - a func that adds a node at the end of a linked lists
 * @head: pointer to the 1st elem
 * @n: arguments to put in the new node
 * Return: pointer to the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node;
	listint_t *tmp = *head;

	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
	{
		return (NULL);
	}

	nw_node->n = n;
	nw_node->next = NULL;

	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nw_node;
	return (nw_node);
}
