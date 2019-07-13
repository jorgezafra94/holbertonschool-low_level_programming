#include <stdio.h>
/**
 * main: Entry point
 * @argc: number of arguments counting ./name
 * @argv: saves the arguments in an array
 * Return: 0 if is Success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
