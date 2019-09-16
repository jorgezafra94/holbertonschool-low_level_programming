#include <stdio.h>
long int add(int a, int b)
{
	return (a + b);
}
long int sub(int a, int b)
{
        return (a - b);
}
long int mul(int a, int b)
{
        return (a * b);
}
long int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}
long int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
