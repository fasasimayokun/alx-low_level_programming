#include "lists.h"
/**
 * reverse_listint - a func that reverses a listint_t linked list.
 * @head: a pointer to the 1st node
 * Return: a ptr to the 1st node of the rev list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (*head);
}
