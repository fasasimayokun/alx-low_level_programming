#include "search_algos.h"

/**
 * jump_list - a func that searches for an algorithm in a sorted singly
 * linked list of integers using jump search.
 * @list: the ptr to the  head of the linked list to search.
 * @size: The length of nodes in the list.
 * @value: The value to search for.
 * Return: a ptr to the first node where the value is located else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_len;
	listint_t *nd, *jmp;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_len = sqrt(size);
	for (nd = jmp = list; jmp->index + 1 < size && jmp->n < value;)
	{
		nd = jmp;
		for (step += step_len; jmp->index < step; jmp = jmp->next)
		{
			if (jmp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jmp->index, jmp->n);
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
