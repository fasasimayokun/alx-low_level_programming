#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @elem: int
 * @next: pointer to the next node
 */
struct listint_s
{
	int elem;
	struct listint_s *next;
};
/*
 * listint_t - new alias for struct listint_s
 */
typedef struct listint_s listint_t;

size_t print_listint(const listint_t *h);

#endif
