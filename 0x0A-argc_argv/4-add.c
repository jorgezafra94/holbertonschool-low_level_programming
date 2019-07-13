#include <stdio.h>
#include <stdlib.h>
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

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			d = 0;
			while (argv[c][d])
			{
				if (argv[c][d] < '0' || argv[c][d] > '9')
				{
					printf("Error\n");
					return (1);
				}
				d++;
			}
			sum = sum + atoi(argv[c]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
