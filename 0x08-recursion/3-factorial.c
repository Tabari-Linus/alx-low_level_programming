#include "main.h"

/**
 * factorial - a function that returns the factorial of a number.
 * @a: An input integer
 * Return: The factorial of a
 */
int factorial(int n)
{
if (a < 0)
return (-1);
if (a <= 1)
return (1);
return ( a * factorial(n -1));
}
