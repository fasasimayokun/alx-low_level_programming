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
	unsigned int nm;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
			return (NULL);

		return (ptr_new);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptr_new = malloc(new_size);
	if (!ptr)
	{
		return (NULL);
	}
	for (nm = 0; nm < old_size && nm < new_size; nm++)
	{
		ptr_new[nm] = ((char *) ptr)[nm];
	}
	free(ptr);
	return (ptr_new);
}
