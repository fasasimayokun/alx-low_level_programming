#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a str
 * @word: the words to capitalize
 * Return: a char pointer
 */
char *cap_string(char *word)
{
	int num;

	num = 0;

	while (word[num])
	{
		while (!(word[num] >= 97 && word[num] <= 122))
			num++;
		if (word[num - 1] == ' ' ||
		    word[num - 1] == '\t' ||
		    word[num - 1] == '\n' ||
		    word[num - 1] == ',' ||
		    word[num - 1] == '.' ||
		    word[num - 1] == ';' ||
		    word[num - 1] == '!' ||
		    word[num - 1] == '?' ||
		    word[num - 1] == '"' ||
		    word[num - 1] == '(' ||
		    word[num - 1] == ')' ||
		    word[num - 1] == '{' ||
		    word[num - 1] == '}' ||
		    num == 0)
			word[num] = word[num] - 32;
		num++;
	}
	return (word);
}
