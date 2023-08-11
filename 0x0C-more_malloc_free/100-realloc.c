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
