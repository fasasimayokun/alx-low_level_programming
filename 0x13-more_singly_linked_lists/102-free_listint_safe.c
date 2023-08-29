#include "lists.h"
/**
 * free_listint_safe - a func that frees a listint_t list.
 * @h: a pointer to the 1st node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t cnt = 0;
	int sub;
	listint_t *aux;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			aux = (*h)->next;
			free(*h);
			*h = aux;
			cnt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			cnt++;
			break;
		}
	}
	*h = NULL;
	return (cnt);
}
