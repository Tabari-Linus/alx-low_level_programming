#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @s: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
int length = 0,i, n;

while (str[length] != '\0')
length++;

if (length % 2 == 0)
n = length / 2

else
n = (length + 1) / 2;

for (; i <= length; i++)
_putchar(str[i]);
_putchar('\n');
}
