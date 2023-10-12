#include "lists.h"
/**
 * free_dlistint - a func that frees a dlistint_t list.
 * @head: the head pointer of the dlinked list
 * Return: void(nothing)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
