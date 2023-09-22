#include "main.h"
/**
 * echo_version - a func that prints the version of an ELF header.
 * @elf_num: an address to an arr containing the ELF version.
 */
void echo_version(unsigned char *elf_num)
{
	 printf(" Version: %d", elf_num[EI_VERSION]);

	switch (elf_num[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * close_elf - a func that closes an elf fle
 * @elff: the fd of the elf file
 * Return: void(nothing)
 */
void close_elf(int elff)
{
	if (close(elff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elff);
		exit(98);
	}
}
