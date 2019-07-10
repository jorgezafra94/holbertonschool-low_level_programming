#include "holberton.h"

/**
 * funp - return 1 or 0
 * @num: input
 * @s: initial num
 * Return: 1 - 0
 */
int funp(int num, int s)
{
	if (s < num)
	{
		if (num % s == 0)
		{
			return (0);
		}
		else
		{
			return (funp(num, s + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * _is_prime_number - gives if it is prime number
 * @n: number
 * Return: 1 if is prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (funp(n, 2));
}
