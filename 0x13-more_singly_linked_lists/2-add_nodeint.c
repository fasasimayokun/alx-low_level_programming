#include "lists.h"
/**
 * add_nodeint - a func that adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to the 1st node of the linked list
 * @n: value to put in the new node
 * Return: pointer to the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
