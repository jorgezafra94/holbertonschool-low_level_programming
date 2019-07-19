#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add - addition of parcial products
 * @p: parcial product
 * @mg: big malloc
 * @i: size of big malloc - 1
 * @tp: size of parcial product - 1
 *
 */
void add(char *p, char *mg, int i, int tp)
{
        int pos = tp;
        int a = 0;
        int b = 0;
        int car = 0;
        int res = 0;
        int cont = tp;
        int aux = 0;
        for (; cont >=  0; cont--, i--, pos--)
        {
                a = *(p + pos) - '0';
                b = *(mg + i) - '0';
                res = (a + b) + car;
                car = res / 10;
                res = (res % 10) + '0';
                *(mg + i) = res;
        }
        res = 0;
        for (aux = i - 1; aux >= 0; aux--)
        {
                a = *(mg + aux) - '0';
                a += a + car;
                car = a / 10;
                a = (a % 10) + '0';
                *(mg + aux) = a;
        }
}
/**
 * setiar - fill the pointer with 0
 * @s: pointer
 * Return: parcial malloc
 */
void setiar(char *s, int a)
{
	int i;
	for(i = 0; i < a; i++)
		s[i] = '0';
}
/**
 * parcial - give the parcial malloc
 * @a: size one
 * @b: size two
 * Return: parcial malloc
 */
char *parcial(int a)
{
	int i;
	char *p;
	p = malloc(a);
	if (!p)
		return (NULL);
	for(i = 0; i < a; i++)
		p[i] = '0';
	return (p);
}
/**
 * grande - give big malloc
 * @a: size one
 * @b: size two
 * Return: malloc
 */
char *grande(int a ,int b)
{
	int i;
	char *p;
	p = malloc(a + b);
	if (!p)
		return (NULL);
	for(i = 0; i < a + b; i++)
		p[i] = '0';
	return (p);
}
/**
 * tama - give the size
 * @s: string of numbers
 * Return: size
 */
int tama(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * Perror - print Error with putchar.
 * Return: Always 0.
 */
void Perror(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int numero(char *s)
{
	int i = 0, aux = 0;
	while (s[i] != '\0')
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			aux = 1;
			break;
		}
		i++;
	}
	return (aux);
}
/**
 *
 *
 *
 */
void impresion(char *s, int a)
{
	int i;
	for (i = 0; i < a; i++)
	{
		if (!(s[0] == '0' && i == 0))
			printf("%c", s[i]);
	}
	printf("\n");
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int p1, p2, t1, t2, t3, a = 0, b = 0, j = 0, aux = 0, car, g, ind;
	char *mg, *p, *size1, *size2;

	if (argc != 3)
		Perror();
	else
	{
		p1 = numero(argv[1]);
		p2 = numero(argv[2]);
		if (p1 == 1 || p2 == 1)
			Perror();
		if (*argv[1] == '0' || *argv[2] == '0')
		{
			printf("0\n");
			return(0);
		}
		t1 = tama(argv[1]);
		t2 = tama(argv[2]);
		ind = t1 + t2;
		mg = grande(t1,t2);
		if(t1 >= t2)
		{
			size1 = argv[1];
			size2 = argv[2];
			b = t1 - 1;
			g = b;
			a = t2 - 1;
			t3 = t1 + 1;
		}
		else
		{
			size1 = argv[2];
			size2 = argv[1];
			b = t2 - 1;
			g = b;
			a = t1 - 1;
			t3 = t2 + 1;
		}
		p = parcial(t3);
		j = b + 1;
		for (;a >= 0; a--, ind--)
		{
			car = 0;
			b = g;
			j = g + 1;
			setiar(p, t3);
			for(; b >= 0; b--, j--)
			{
				aux = ((size2[a] - '0') * (size1[b] - '0'));
				aux = aux + car;
				p[j] = ((aux % 10) + '0');
				car = aux / 10;
			}
			p[j] = (car + '0');
			add(p, mg, (ind - 1), (t3 - 1));
		}
		impresion(mg, (t1 + t2));
	}
	return (0);
}
