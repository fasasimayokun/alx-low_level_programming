#include "main.h"
/**
 * leet - replaces some specific letters
 * with 1||3||3||7||4||0
 * @n: argument val
 * Return: argument val
 */
char *leet(char *n)
{
	int x, y;
	char str_alpha[] = "aAeEoOtTlL";
	char str_num[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == str_alpha[y])
			{
				n[x] = str_num[y];
			}
		}
	}
	return (n);
}
