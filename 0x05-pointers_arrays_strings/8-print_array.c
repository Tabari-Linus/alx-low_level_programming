#include "main.h"
#include <stdio.h>

/**
 * print_array - a function thats n elements of an array of integets,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
voif print_array(int *a, int n)
{
int var = 0;

for (; var < n; var++)
{
printf("%d", a[var]);
if (var < n - 1)
printf(",");
}
putchar('\n');
}
