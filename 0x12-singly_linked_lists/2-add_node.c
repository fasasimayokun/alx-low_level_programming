#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the start of a linked list
 * @head: pointer to a pointer to the list_t list
 * @str: new str to put in the node
 * Return: the addrs of the new elem
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int cnt = 0;

	while (str[cnt])
	{
		cnt++;
	}

	nw = malloc(sizeof(list_t));
	if (!nw)
	{
		return (NULL);
	}
	nw->str = strdup(str);
	nw->len = cnt;
	nw->next = (*head);
	(*head) = nw;

	return (*head);
}
