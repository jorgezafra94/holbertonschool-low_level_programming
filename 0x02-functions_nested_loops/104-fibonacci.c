#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 1;
	int i, c;
	long int  sum, sum1, sum2, var11, var12, var21, var22;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
		{ printf("%.0ld, ", n1); }
		else if (i < 91)
		{ sum = n1 + n2;
			n1 = n2;
			n2 = sum;
			printf("%ld, ", sum); }
		else
		{
			if (i == 91)
			{ var11 = n1 / 1000000000;
				var12 = n1 % 1000000000;
				var21 = n2 / 1000000000;
				var22 = n2 % 1000000000; }
			else
			{ var11 = var21;
				var12 = var22;
				var21 = sum1;
				var22 = sum2; }
			sum2 = (var12 + var22) % 1000000000;
			c = (var12 + var22) / 1000000000;
			sum1 = var11 + var21 + c;
			if (!(i == 97))
				printf("%ld%ld, ", sum1, sum2);
			else
				printf("%ld%ld", sum1, sum2); } }
	printf("\n");
	return (0);
}
