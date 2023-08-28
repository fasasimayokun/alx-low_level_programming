#include "lists.h"
/**
 * free_listint2 - a func that frees a listint_t list
 * @head: a pointer to the listint_t list
 * Return: notheing (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;

	while (*head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}
