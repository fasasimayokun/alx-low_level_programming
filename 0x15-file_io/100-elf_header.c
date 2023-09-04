#include "main.h"
void check_elf(unsigned char *e_ident);
void echo_magic(unsigned char *elf_num);
void echo_class(unsigned char *elf_num);
void echo_data(unsigned char *elf_num);
void echo_version(unsigned char *elf_num);
void echo_abi(unsigned char *elf_num);
void echo_osabi(unsigned char *elf_num);
void echo_type(unsigned int e_type, unsigned char *elf_num);
void echo_entry(unsigned long int e_entry, unsigned char *elf_num);
void close_elf(int elf);

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
void check_elf(unsigned char *e_ident)
{
	int pos;

	for (pos = 0; pos < 4; pos++)
	{
		if (e_ident[pos] != 127 &&
		    e_ident[pos] != 'E' &&
		    e_ident[pos] != 'L' &&
		    e_ident[pos] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * echo_magic - a funct that prints the magic numbers of an ELF header.
 * @elf_num: an address to an array containing the ELF magic nums
 * Return: void (nothing)
 */
void echo_magic(unsigned char *elf_num)
{
	int pos;

	for (pos = 0; pos < EI_NIDENT; pos++)
	{
		printf("%02x", elf_num[pos]);

		if (pos == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * echo_class - a func that prints the class of an ELF header.
 * @elf_num: an address to an arr containing the ELF class
 * Return: void (nothing)
 */
void echo_class(unsigned char *elf_num)
{
	printf(" Class: ");

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
 * echo_data - a func that prints the data of an ELF header.
 * @elf_num: an address of an arr containing the ELF data
 * Return: void (nothing)
 */
void echo_data(unsigned char *elf_num)
{
	printf(" Data: ");

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
 * echo_osabi - a func that prints the OS/ABI of an ELF header.
 * @elf_num: an address to an array containing the ELF version.
 */
void echo_osabi(unsigned char *elf_num)
{
	printf(" OS/ABI: ");

	switch (elf_num[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_num[EI_OSABI]);
	}
}

/**
 * echo_abi - a fun that prints the ABI version of an ELF header.
 * @elf_num: an address to an array containing the ELF ABI version.
 * Return: void (nothing)
 */
void echo_abi(unsigned char *elf_num)
{
	printf(" ABI Version: %d\n", elf_num[EI_ABIVERSION]);
}

/**
 * echo_type - a func that prints the type of an ELF header.
 * @e_type: ELF type.
 * @elf_num: an address to an array containing the ELF class.
 * Return: void (nothing)
 */
void echo_type(unsigned int e_type, unsigned char *elf_num)
{
	if (elf_num[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * echo_entry - a func that prints the entry point of an ELF header.
 * @e_entry: The ptr of the ELF entry point.
 * @elf_num: an address to an array containing the ELF class.
 * Return: void (nothing)
 */
void echo_entry(unsigned long int e_entry, unsigned char *elf_num)
{
	printf(" Entry point address: ");

	if (elf_num[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (elf_num[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * close_elf - a func that closes an ELF file.
 * @elf: file path of the ELF file.
 * Return: void (nothing)
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
