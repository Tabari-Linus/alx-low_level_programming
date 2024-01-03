#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
int length = 0, a = 0;
char c;

while (s[length] != '\0')
length++;

while (a < length--)
{
c = s[a];
s[a++] = s[length];
s[length] = c;
}
}
