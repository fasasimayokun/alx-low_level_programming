#include "main.h"
/**
 * append_text_to_file - a func that apppends a text at the end of a file
 * @filename: the address to the name of the file
 * @text_content: the characters to add to the end of the file
 * Return: 1 (success) else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn;
	int wrt;
	int cnt = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (cnt = 0; text_content[cnt];)
		{
			cnt++;
		}
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, cnt);

	if (opn == -1 || wrt == -1)
	{
		return (-1);
	}
	close(opn);
	return (1);
}
