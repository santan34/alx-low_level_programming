/*
 * File: 100-elf_header.c
 * Auth: Brennan D Baraban
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf_file(unsigned char *e_ident);
void print_elf_magic(unsigned char *e_ident);
void print_elf_class(unsigned char *e_ident);
void print_elf_data(unsigned char *e_ident);
void print_elf_version(unsigned char *e_ident);
void print_elf_osabi(unsigned char *e_ident);
void print_elf_abi(unsigned char *e_ident);
void print_elf_type(unsigned int e_type, unsigned char *e_ident);
void print_elf_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_file(int elf);

int main(int argc, char *argv[]) {
    Elf64_Ehdr *header;
    int fd, read_bytes;

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL) {
        close_elf_file(fd);
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    read_bytes = read(fd, header, sizeof(Elf64_Ehdr));
    if (read_bytes == -1) {
        free(header);
        close_elf_file(fd);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
        exit(98);
    }

    check_elf_file(header->e_ident);
    printf("ELF Header:\n");
    print_elf_magic(header->e_ident);
    print_elf_class(header->e_ident);
    print_elf_data(header->e_ident);
    print_elf_version(header->e_ident);
    print_elf_osabi(header->e_ident);
    print_elf_abi(header->e_ident);
    print_elf_type(header->e_type, header->e_ident);
    print_elf_entry(header->e_entry, header->e_ident);

    free(header);
    close_elf_file(fd);
    return 0;
}
