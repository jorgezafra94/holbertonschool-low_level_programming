# C - Pointers, arrays and strings
this project is about the first steps in pointers and arrays in C

## Task0 - 98 Battery
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.<br>
* Prototype: `void reset_to_98(int *n);`

```
ubuntu:~/0x05$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
ubuntu:~/0x05$ ./0-98 
n=402
n=98
ubuntu:~/0x05$
```

## Task1 - swap values
Write a function that swaps the values of two integers.
* Prototype: `void swap_int(int *a, int *b);`

```
ubuntu:~/0x05$ cat 1-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
ubuntu:~/0x05$
```

## Task2 - length of string
Write a function that returns the length of a string.
* Prototype: `int _strlen(char *s);`
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more

```
ubuntu:~/0x05$ cat 2-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
ubuntu:~/0x05$ ./2-strlen 
10
ubuntu:~/0x05$ 
```

## Task3 - print a string
Write a function that prints a string, followed by a new line, to stdout.
* Prototype: `void _puts(char *str);`
FYI: The standard library provides a similar function: puts. Run man puts to learn more

```
ubuntu:~/0x05$ cat 3-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-puts.c -o 3-puts
ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
ubuntu:~/0x05$
```

## Task4 - print a string in reverse form
Write a function that prints a string, in reverse, followed by a new line.
* Prototype: `void print_rev(char *s);`

```
ubuntu:~/0x05$ cat 4-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
ubuntu:~/0x05$ 
```

## Task5 - reverse a string
Write a function that reverses a string.
* Prototype: `void rev_string(char *s);`


```
ubuntu:~/0x05$ cat 5-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev_string.c -o 5-rev_string
ubuntu:~/0x05$ ./5-rev_string 
Holberton
notrebloH
ubuntu:~/0x05$ 
```

## Task6 - prints some elements
Write a function that prints one char out of 2 of a string, followed by a new line.
* Prototype: `void puts2(char *str);`
* The function should print only one character out of two, starting with the first one

```
ubuntu:~/0x05$ cat 6-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-puts2.c -o 6-puts2
ubuntu:~/0x05$ ./6-puts2 
02468
ubuntu:~/0x05$ 
```

## Task7 - print the half
Write a function that prints half of a string, followed by a new line.
* Prototype: `void puts_half(char *str);`
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

```
ubuntu:~/0x05$ cat 7-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
ubuntu:~/0x05$ ./7-puts_half 
56789
ubuntu:~/0x05$ 
```

## Task8 - print array
Write a function that prints n elements of an array of integers, followed by a new line.
* Prototype: `void print_array(int *a, int n);`
* where n is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use printf.

```
ubuntu:~/0x05$ cat 8-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_array.c -o 8-print_array
ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
ubuntu:~/0x05$
```

## Task9 - strcpy
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
* Prototype: `char *_strcpy(char *dest, char *src);`
* Return value: the pointer to dest

```
ubuntu:~/0x05$ cat 9-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *p;

    p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", p);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
ubuntu:~/0x05$ 
```

## Task100 - atoi
Write a function that convert a string to an integer.
* Prototype: `int _atoi(char *s);`
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
* We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. If this flag is not available in you version of gcc, you can install the last version on your VM
* We will use gcc version 5 or above to compile

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

```
ubuntu:~/0x05$ cat 100-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _atoi("98");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    return (0);
}
ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
ubuntu:~/0x05$ 
```

## Task101 - Dont hate the hacker hate the code
Create a program that generates random valid passwords for the program 101-crackme.
* You are allowed to use the standard library
* You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
* gdb and objdump can help
