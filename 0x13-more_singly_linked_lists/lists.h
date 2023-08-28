#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: int
 * @next: pointer to the next node
 */
struct listint_s
{
	int n;
	struct listint_s *next;
};
/*
 * listint_t - new alias for struct listint_s
 */
typedef struct listint_s listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif
