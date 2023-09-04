#include "main.h"
/**
 * create_file - a func that creates a file
 * @filename: the address of the file to be created
 * @text_content: an address to a str to write the file to
 * Return: 1 (success) else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fpth;
	int wrt;
	int cnt = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		for (cnt = 0; text_content[cnt];)
		{
			cnt++;
		}
	}
	fpth = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fpth, text_content, cnt);

	if (fpth == -1 || wrt == -1)
	{
		return (-1);
	}
	close(fpth);
	return (1);
}
