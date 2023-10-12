#include "lists.h"

/**
 * sum_dlistint - a fun that  returns the sum of all
 * the data of a dlistint_t linked list.
 * @head: addresss of the curr node
 * Return: the total of the int values in the dlinked list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *curr;

	curr = head;

	while (curr != NULL)
	{
		total = total + curr->n;
		curr = curr->next;
	}
	return (total);
}
