#include "lists.h"

/**
 * get_dnodeint_at_index - a func that returns the nth node
 * of a dlistint_t linked list
 * @head: the head pointer of the dlinked list
 * @index: the position of the node to get
 * Return: the addrs of the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		if (num == index)
			return (head);
		head = head->next;
		num++;
	}
	return (NULL);
}
