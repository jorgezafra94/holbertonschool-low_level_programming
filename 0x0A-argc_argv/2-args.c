#include <stdio.h>
/**
 * main - Entry Point
 * @argc: number of arguments in the command line
 * @argv: hold the arguments in the command line
 * Return: 0 if is success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}
	return (0);
}
