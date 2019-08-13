#include "holberton.h"
/**
 * imp - print the message and realize the exit
 * @num: choose the operation 1 open from, 2 open to
 * 3 read, 4 write
 * @value: if its -1 or other
 * @s: the pointer
 */
void imp(int num, int value, char *s)
{
	if ((num == 1 || num == 3) && value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
	if ((num == 2 || num == 4) && value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(99);
	}
}
/**
 * main - function to create a copy of one file to another
 * @argc: number of arguments in the input
 * @av: store the arguments
 * Return: 0 if success
 */
int main(int argc, char *av[])
{
	char *buffer;
	int x, y, fa, rd, clo1, clo2;

	if (!(argc == 3))
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	x = open(av[1], O_RDONLY);
	imp(1, x, av[1]);

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (0);
	rd = read(x, buffer, 1024);
	imp(3, rd, av[1]);

	y = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	imp(2, y, av[2]);

	while (rd > 0)
	{
		fa = write(y, buffer, rd);
		imp(4, fa, av[2]);
		rd = read(x, buffer, 1024);
		imp(3, rd, av[1]);
	}
	clo1 = close(x);
	clo2 = close(y);
	if (clo1 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
	if (clo2 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
	if (clo1 != 0 || clo2 != 0)
		exit(100);
	free(buffer);
	return (0);
}
