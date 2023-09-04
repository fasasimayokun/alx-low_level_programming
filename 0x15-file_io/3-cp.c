#include "main.h"

char *make_bufr(char *file);
void close_file(int fpth);
/**
 * main - a func that copies the content of a file to another file.
 * @argc: The num of args supplied to the prog.
 * @argv: an arr of addresses to the args.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int frm;
	int tt;
	int rd;
	int wrt;
	char *bufr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bufr = make_bufr(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, bufr, 1024);
	tt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(bufr);
			exit(98);
		}
		wrt = write(tt, bufr, rd);
		if (tt == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bufr);
			exit(99);
		}
		rd = read(frm, bufr, 1024);
		tt = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(bufr);
	close_file(frm);
	close_file(tt);

	return (0);
}
/**
 * make_bufr - a func that allocates 1024 bytes for a buffer.
 * @file: the name of the file buffer.
 * Return: the addresss to the newly-allocated buffer.
 */
char *make_bufr(char *file)
{
	char *bufr;

	bufr = malloc(sizeof(char) * 1024);

	if (!bufr)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bufr);
}
/**
 * close_file - a func that closes file description
 * @fpth: the file path to close
i * Return: void (nothing)
 */
void close_file(int fpth)
{
	int cls;

	cls = close(fpth);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fpth);
		exit(100);
	}
}
