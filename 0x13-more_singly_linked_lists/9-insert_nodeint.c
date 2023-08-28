#include "lists.h"
/**
 * insert_nodeint_at_index - a func that inserts a new node at a given pos
 * @head: pointer to the 1st node of the list
 * @idx: position to where the new node is to be added
 * @n: argument int value
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int  nm;
	listint_t *nw_node;
	listint_t *aux = *head;

	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL || head == NULL)
	{
		return (NULL);
	}
	nw_node->n = n;
	nw_node->next = NULL;

	if (idx == 0)
	{
		nw_node->next = *head;
		*head = nw_node;
		return (nw_node);
	}
	for (nm = 0; aux && nm < idx; nm++)
	{
		if (nm == idx - 1)
		{
			nw_node->next = aux->next;
			aux->next = nw_node;
			return (nw_node);
		}
		else
			aux = aux->next;
	}
	return (NULL);
}
