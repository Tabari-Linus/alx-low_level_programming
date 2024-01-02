#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: an input integer pointer
 * @c: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *c)
{
int swapV;

swapV = *a;
*a = *c;
*c = swapV;
}
