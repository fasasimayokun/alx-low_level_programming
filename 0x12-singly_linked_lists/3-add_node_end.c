#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - a func that puts a new node at the end of a linked list
 * @head: pointer to pointer to the list_t list
 * @str: str to join to the new node
 * Return: addrs ot the new elem
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *tmp = *head;
	unsigned int count = 0;

	while (str[count])
	{
		count++;
	}

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = count;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = nw;
	return (nw);
}
