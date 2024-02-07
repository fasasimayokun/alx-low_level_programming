#include "search_algos.h"

/**
 * linear_skip - a func that searches for an algorithm in a sorted singly
 * linked list of integers using linear skip.
 * @list: the ptr to the  head of the linked list to search.
 * @value: The value to search for.
 * Return: the pointer to the first node where the value is located else NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *nd, *jmp;

	if (list == NULL)
	{
		return (NULL);
	}

	for (nd = jmp = list; jmp->next != NULL && jmp->n < value;)
	{
		nd = jmp;
		if (jmp->express != NULL)
		{
			jmp = jmp->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jmp->index, jmp->n);
		}
		else
		{
			while (jmp->next != NULL)
			{
				jmp = jmp->next;
			}
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, jmp->index);

	for (; nd->index < jmp->index && nd->n < value; nd = nd->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	}
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
