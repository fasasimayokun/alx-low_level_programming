#include "lists.h"
/**
 * delete_dnodeint_at_index - a func that deletes the node at index
 * index of a dlistint_t linked list.
 * @head: the head pointer of the dlinked list
 * @index: the node at the position to delete
 * Return: 1(successful) else(-1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;

	aux = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (aux == NULL)
			return (-1);
		aux = aux->next;
	}
	if (aux == *head)
	{
		*head = aux->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		aux->prev->next = aux->next;
		if (aux->next != NULL)
			aux->next->prev = aux->prev;
	}
	free(aux);
	return (1);
}
