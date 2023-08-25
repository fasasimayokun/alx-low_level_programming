#include "lists.h"
#include <stdlib.h>
/**
 * free_list - clears a linked list
 * @head: list_t list to be cleared
 */
void free_list(list_t *head)
{
		list_t *aux;

		while (head)
		{
			aux = head->next;
			free(head->str);
			free(head);
			head = aux;
		}
}
