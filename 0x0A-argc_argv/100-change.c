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
	int n = 0, c = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			for (; n >= 25; c++)
			{
				n = n - 25;
			}
			for (; n >= 10; c++)
			{
				n = n - 10;
			}
			for (; n >= 5; c++)
			{
				n = n - 5;
			}
			for (; n >= 2; c++)
			{
				n = n - 2;
			}
			for (; n >= 1; c++)
			{
				n = n - 1;
			}
		}
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
