#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @s: An input string
 * Return: Nothing
 */
void put2(char *s)
{
int length = 0, i = 0;

while(s[length] != '\0')
length++;

length -= 1;

for(; i <= length; i += 2)
_putchar(s[i]);
_putchar('\n');
}
