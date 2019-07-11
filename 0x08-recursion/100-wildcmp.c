#include "holberton.h"

/**
 * prueba - test if are equal if not return c or b
 * @a: string one
 * @b: string two
 * @c: string that save the original b
 * Return: a value or go to match
 */

int prueba(char *a, char *b, char *c)
{
	if (a[0] == '\0' && b[0] == '\0')
	{
		return (1);
	}
	else
	{
		if (a[0] == b[0])
		{
			a++;
			b++;
			return (prueba(a, b, c));
		}
		else
		{
			if (b[0] == '*')
			{
				return (match(a, b));
			}
			else
			{
				return (match(a, c));
			}
		}
	}
}
/**
 * match - compare char by char if are the same go to prueba
 * @a: string one
 * @b: string two
 * Return: value 1 or 0
 */
int  match(char *a, char *b)
{
	if (b[0] == '*')
	{
		b++;
		return (match(a, b));
	}
	else
	{
		if (a[0] != b[0])
		{
			if (a[0] == '\0')
			{
				return (0);
			}
			else
			{
				a++;
				return (match(a, b));
			}
		}
		else
		{
			return (prueba(a, b, b));
		}
	}
}
/**
 * wildcmp - prints if both strings are considered identical
 * @s1: string one
 * @s2: string two
 * Return: 1 if are considered identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '*')
	{
		if (s2[1] == '*')
		{
			s2++;
			return (wildcmp(s1, s2));
		}
		else
		{
			return (match(s1, s2));
		}
	}
	else
	{
		if (s1[0] == s2[0])
		{
			if (s1[0] != '\0' && s2[0] != '\0')
			{
				s1++;
				s2++;
				return (wildcmp(s1, s2));
			}
			else
			{
				return (1);
			}
		}
		else
		{
			return (0);
		}
	}
}
