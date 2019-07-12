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
	unsigned int m, c1, cont;
        int n;

	n = 0;
	cont = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if(n >= 0)
		{
			m = n;

			for (c1 = 0; m >=  25 && m != 0; c1++)
			{
				m = m - 25;
				cont++;
			}
			for (c1 = 0; m >= 10 && m != 0; c1++)
                        {
				m = m - 10;
				cont++;
                        }
			for (c1 = 0; m >= 5 && m != 0; c1++)
			{
				m = m - 5;
				cont++;
			}
			for (c1 = 0; m >= 2 && m != 0; c1++)
			{
				m = m - 2;
				cont++;
			}
			for (c1 = 0; m >= 1 && m != 0; c1++)
			{
				m = m - 1;
				cont++;
			}
			printf("%d\n", cont);
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}