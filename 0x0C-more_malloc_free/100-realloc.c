#include <stdlib.h>
#include "main.h"
/**
 * _realloc - a function that reallocates
 * a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 * Return: nothing (void)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	char *ptr_old;
	unsigned int nm;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr_new = malloc(new_size);
	if (!ptr)
	{
		return (NULL);
	}
	ptr_old = ptr;

	if (new_size < old_size)
	{
		for (nm = 0; nm < new_size; nm++)
			ptr_new[nm] = ptr_old[nm];
	}
	if (new_size > old_size)
	{
		for (nm = 0; nm < old_size; nm++)
			ptr_new[nm] = ptr_old[nm];
	}

	free(ptr);
	return (ptr_new);
}
