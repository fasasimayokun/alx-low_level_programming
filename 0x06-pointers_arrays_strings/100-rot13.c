#include "main.h"
/**
 * rot13 -  a function that encodes a string using rot13.
 * @str: pointer to str argument
 * Return: str pointer
 */
char *rot13(char *str)
{
	int x, y;
	char str_alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == str_alpha[y])
			{
				str[x] = rot[y];
				break;
			}
		}
	}
	return (str);
}
