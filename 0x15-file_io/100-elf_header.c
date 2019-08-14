#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
/**
 *impresion - print the content
 *@s: pointer
 */
void impresion(char *s)
{
	int b;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (b = 0; b < 16; b++)
	{
		if (!(b == 15))
			printf("%02x ", s[b]);
		else
			printf("%02x\n", s[b]);
	}
	if ((s[4] + '0') == '1')
		printf("  Class:                             ELF32\n");
	else if ((s[4] + '0') == '2')
		printf("  Class:                             ELF64\n");
	else
		exit(98);
	if ((s[5] + '0') == '1')
	{
		printf("  Data:                              2's complement, ");
		printf("little endian\n");
	}
	else if ((s[5] + '0') == '2')
	{
		printf("  Data:                              2's complement, ");
		printf("big endian\n");
	}
	else
		exit(98);
}
/**
 * ELF - is elf file?
 *@s: pointer
 */
void ELF(char *s)
{
	int ad;

	ad = (int)s[0];

	if (ad == 127 && s[1] == 'E' && s[2] == 'L' && s[3] == 'F')
	{
		impresion(s);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: is not an ELF file");
		exit(98);
	}
}
/**
 * main - print the content of a ELF file
 * @ac: number of input arguments
 * @av: store the input arguments
 * Return: 0 id succees
 */
int main(int ac, char *av[])
{
	int op, p;
	char buff[16];

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename");
		exit(98);
	}
	op = open(av[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can not be open");
		exit(98);
	}
	p = read(op, buff, 16);
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can not be read");
		exit(98);
	}
	lseek(op, 0, SEEK_SET);
	read(op, buff, 16);
	ELF(buff);
	close(op);
	return (0);
}
