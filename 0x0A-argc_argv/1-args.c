#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments counting ./name
 * @argv: saves the arguments in an array
 * Return: 0 if is Success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argv;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
