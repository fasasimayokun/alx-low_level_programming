#include "main.h"
/**
 * read_textfile - a func that reads a text file and prints
 * it to the POSIX standard output
 * @filename: the file being read
 * @letters: the number of characters to read
 * Return:  the actual num of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *letts;
	ssize_t fpth;
	ssize_t wrt;
	ssize_t tt;

	fpth = open(filename, O_RDONLY);
	if (fpth == -1)
	{
		return (0);
	}
	letts = malloc(sizeof(char) * letters);
	tt = read(fpth, letts, letters);
	wrt = write(STDOUT_FILENO, letts, tt);

	free(letts);
	close(fpth);
	return (wrt);
}
