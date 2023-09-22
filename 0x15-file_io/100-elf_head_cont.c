#include "main.h"

/**
 * echo_abi - a func that prints the ABI version of an ELF prototype.
 * @elf_num: an address to an array containing the ELF ABI version.
 * Return: void (nothing)
 */
void echo_abi(unsigned char *elf_num)
{
	printf(" ABI Version: %d\n", elf_num[EI_ABIVERSION]);
}

/**
 * echo_type - a func that prints the type of an ELF prototype.
 * @elf_type: ELF type.
 * @elf_num: an address to an array containing the ELF class.
 * Return: void (nothing)
 */
void echo_type(unsigned int elf_type, unsigned char *elf_num)
{
	if (elf_num[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type: ");

	switch (elf_type)
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
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * echo_entry - a func that prints the entry point of an ELF prototype.
 * @elf_entry: The ptr of the ELF entry point.
 * @elf_num: an address to an array containing the ELF class.
 * Return: void (nothing)
 */
void echo_entry(unsigned long int elf_entry, unsigned char *elf_num)
{
	printf(" Entry point address:");

	if (elf_num[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF) | ((elf_entry >> 8)
				& 0xFF00FF00);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}
	if (elf_num[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)elf_entry);
	}
	else
	{
		printf("%#lx\n", elf_entry);
	}
}

/**
 * echo_osabi - a func that prints the OS/ABI of an ELF prototype.
 * @elf_num: an address to an array containing the ELF version.
 * Return: void(nothing)
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
