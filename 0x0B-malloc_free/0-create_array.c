#include "main.h"
/**
 * create_array - a function that creates an arr of chars
 * and fills it with a specific char.
 * @size: the len of arr
 * @c: the specific input char
 * Return: a pointer to the char arr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char  *char_arr;

	char_arr = malloc(sizeof(char) * size);

	if (size <= 0 || char_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		char_arr[i] = c;
	}
	return (char_arr);
}
