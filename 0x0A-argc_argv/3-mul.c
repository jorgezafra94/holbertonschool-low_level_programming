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
	int cont, mul = 1;

	if (argc == 3)
	{
		for (cont = 1; cont < 3; cont++)
		{
			mul = mul * atoi(argv[cont]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
