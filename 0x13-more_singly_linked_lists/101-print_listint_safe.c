#include "lists.h"
size_t iterate_listint_uniq(const listint_t *head);

/**
 * iterate_listint_uniq - a func that gets the num of uniq nodes
 * @head: pointer to the 1st node
 * Return: num of uniq nodes
 */
size iterate_listint_uniq(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nd = 1;

	if (!head || !head->next)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast != NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nd++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				nd++;
				slow = slow->next;
			}
			return (nd);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - a func that prints a listint_t linked list
 * @head: pointer to the 1st node
 * Return: num of nodes in the lists
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd, pos = 0;

	nd = iterate_listint_uniq(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (pos = 0; pos < nd; pos++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nd);
}
