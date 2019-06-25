#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n1 = 1;
	long n2 = 1;

	int i;
	long sum;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%ld, ", n1);
		}
		else
		{
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
			if (!(i == 49))
			{
				printf("%ld, ", sum);
			}
			else
			{
				printf("%ld", sum);
			}
		}
	}
	printf("\n");
	return (0);
}
