#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singley linked list
 * @str: string
 * @len: str length
 * @next: pointing to the next node
 */
struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};
/**
 * list_t - new struct for list_s
 */
typedef struct list_s list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
