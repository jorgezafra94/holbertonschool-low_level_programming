#include "3-calc.h"
/**
 * main - realice the operation
 * @argc: amount of arguments
 * @argv: arguments
 */
void main(int argc, char *argv[])
{
	char a;
	int x = 0, y = 0, res = 0;
	int (*p)(int, int);

	a = argv[2][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (a != '+' && a != '-' && a != '*' && a != '/' && a != '%')
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	p = get_op_func(argv[2]);
	res = p(x, y);
	printf("%d\n", res);
}
