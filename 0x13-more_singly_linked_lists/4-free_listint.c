#include "lists.h"
/**
 * free_listint - a func that frees a listint_t list
 * @head: pointer of type listint_t
 * Return: nothing (void)
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
