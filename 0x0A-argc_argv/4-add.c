#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 * @argc: number of arguments in the command line
 * @argv: hold the arguments in the command line
 * Return: 0 if is success
 */
int main(int argc, char *argv[])
{
	int c, d, sum;

	sum = 0;
	for (c = 1; c < argc; c++)
	{
		d = 0;
		while (argv[c][d] != '\0')
		{
			if (isdigit(argv[c][d]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			d++;
		}
		sum = sum + atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (sum);
}
