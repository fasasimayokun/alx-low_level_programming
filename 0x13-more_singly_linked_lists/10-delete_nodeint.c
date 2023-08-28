#include "lists.h"
/**
 * delete_nodeint_at_index - a func that del the node at
 * index of a listint_t linked list.
 * @head : pointer to the 1st node of the list
 * @index: position to delete
 * Return: 1 success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *present = NULL;
	unsigned int nm = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	while (nm < index - 1)
	{
		if (aux == NULL || !(aux->next))
			return (-1);
		aux = aux->next;
		nm++;
	}
	present = aux->next;
	aux->next = present->next;
	free(present);
	return (1);
}
