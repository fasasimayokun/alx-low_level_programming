#include "lists.h"
/**
 * find_listint_loop - a func that finds the loop in a linked list
 * @head: linked list to find
 * Return: addrs of node where iterations begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *fs = head;

	if (head == NULL)
		return (NULL);

	while (sl && fs && fs->next)
	{
		fs = fs->next->next;
		sl = sl->next;
		if (fs == sl)
		{
			sl = head;
			while (sl != fs)
			{
				sl = sl->next;
				fs = fs->next;
			}
			return (fs);
		}
	}
	return (NULL);
}
