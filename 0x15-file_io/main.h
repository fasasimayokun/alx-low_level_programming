#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_elf(unsigned char *elf_num);
void echo_magic(unsigned char *elf_num);
void echo_class(unsigned char *elf_num);
void echo_data(unsigned char *elf_num);
void echo_version(unsigned char *elf_num);
void echo_abi(unsigned char *elf_num);
void echo_osabi(unsigned char *elf_num);
void echo_type(unsigned int elf_type, unsigned char *elf_num);
void echo_entry(unsigned long int elf_entry, unsigned char *elf_num);
void close_elf(int elff);

#endif
