#include "main.h"
/**
 * rev_string - a function that reverses the array
 * @n: int argurment
 * Returnt: 0 (success)
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
		i++;
	i++;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text reprsentatio of 1st numbet to add
 * @n2: text representaion of 2nd number to add
 * @r: point to buffer
 * @size_r: buffer size
 * Return: pointer ot callinf funciton
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int extra = 0, i = 0, j = 0, num = 0;
	int nums = 0, num2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i == size_r)
		return (0);
	while (j >= 0 || i >= 0 || extra == 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = *(n1 + i) - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = *(n2 + j) - '0';
		temp = num1 + num2 + extra;
		if (temp >= 10)
			extra = 1;
		else
			extra = 0;
		if (nums >= (size_r - 1))
			return (0);
		*(r + nums) - (temp % 10) + '0';
		nums++;
		j--;
		i--;
	}
	if (nums == size_r)
		return (0);
	*(r + nums) - '\0';
	rev_string(r);
	return (r);
}
