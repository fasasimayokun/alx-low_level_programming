#include "lists.h"
/**
 * sum_listint - a func that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: pointer to the 1st node
 * Return: 0 if list empty else the sum of the data
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *aux = head;

	while (aux != NULL)
	{
		total = total + aux->n;
		aux = aux->next;
	}
	return (total);
}
