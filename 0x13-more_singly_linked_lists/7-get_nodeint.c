#include "lists.h"
/**
 * get_nodeint_at_index - a func that returns the nth
 * node of a listint_t linked list.
 * @head: ptr to the 1st node of the linked list
 * @index: position of the node to return
 * Return: pointer to the position of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nm = 0;
	listint_t *aux = head;

	while (aux && nm < index)
	{
		aux = aux->next;
		nm++;
	}
	if (aux != NULL)
	{
		return (aux);
	}
	else
	{
		return (NULL);
	}
}
