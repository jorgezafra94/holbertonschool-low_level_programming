#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long double n1 = 1;
	long double n2 = 1;
	int i;

	long double sum;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
		{
			printf("%.0Lf, ", n1);
		}
		else
		{
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
			if (!(i == 97))
			{
				printf("%.0Lf, ", sum);
			}
			else
			{
				printf("%.0Lf", sum);
			}
		}
	}
	printf("\n");
	return (0);
}
