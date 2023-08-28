#include "lists.h"
/**
 * pop_listint - a func that del the head node of a listint_t linked list
 * @head: argument pointer to the 1st elem in the list
 * Return: 0 if list empty else the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int nm;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	nm = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;

	return (nm);
}
