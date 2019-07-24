#include "3-calc.h"
/**
 * op_add - function that return the addition of two variables
 * @a: input 1
 * @b: input 2
 * Return: the result of the adding of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that return the substraction of two variables
 * @a: input 1
 * @b: input 2
 * Return: the result of the substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that return the multiplication of two variables
 * @a: input 1
 * @b: input 2
 * Return: the result of the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that return the divition of two variables
 * @a: input 1
 * @b: input 2
 * Return: the result of the divition of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that return the module of two variables
 * @a: input 1
 * @b: input 2
 * Return: the result of the module between a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
