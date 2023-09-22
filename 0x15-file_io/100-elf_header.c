#include "main.h"
#include "100-elf_head_cont.c"
#include "100-elf_head_another.c"

/**
 * main - a prog that displays the info contained in the ELF header
 * at the start of an ELF file.
 * @argc: the totoal num of args supplied to the prog.
 * @argv: an array of addresses to the arguments.
 * Return: 0 (success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *hdr;
	int opn;
	int rd;

	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	hdr = malloc(sizeof(Elf64_Ehdr));
	if (hdr == NULL)
	{
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(opn, hdr, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(hdr);
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(hdr->e_ident);
	printf("ELF Header:\n");
	echo_magic(hdr->e_ident);
	echo_class(hdr->e_ident);
	echo_data(hdr->e_ident);
	echo_version(hdr->e_ident);
	echo_osabi(hdr->e_ident);
	echo_abi(hdr->e_ident);
	echo_type(hdr->e_type, hdr->e_ident);
	echo_entry(hdr->e_entry, hdr->e_ident);

	free(hdr);
	close_elf(opn);
	return (0);
}
/**
 * check_elf - a func that Checks if a file is an ELF file.
 * @elf_num: an address to an arr containing the ELF magic nums
 * Return: void (nothing)
 */
void check_elf(unsigned char *elf_num)
{
	int pos;

	for (pos = 0; pos < 4; pos++)
	{
		if (elf_num[pos] != 127 &&
		    elf_num[pos] != 'E' &&
		    elf_num[pos] != 'L' &&
		    elf_num[pos] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * echo_magic - a funct that prints the magic numbers of an ELF prototype.
 * @elf_num: an address to an array containing the ELF magic nums
 * Return: void (nothing)
 */
void echo_magic(unsigned char *elf_num)
{
	int pos;

	printf("  Magic:   ");

	for (pos = 0; pos < EI_NIDENT; pos++)
	{
		printf("%02x", elf_num[pos]);

		if (pos == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}
/**
 * echo_class - a func that prints the class of an ELF prototype.
 * @elf_num: an address to an arr containing the ELF class
 * Return: void (nothing)
 */
void echo_class(unsigned char *elf_num)
{
	printf("  Class:                             ");

	switch (elf_num[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_num[EI_CLASS]);
	}
}
/**
 * echo_data - a func that prints the data of an ELF prototype.
 * @elf_num: an address of an arr containing the ELF data
 * Return: void (nothing)
 */
void echo_data(unsigned char *elf_num)
{
	printf("  Data:                              ");

	switch (elf_num[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_num[EI_CLASS]);
	}
}
