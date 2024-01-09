#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input to search in
 * @c: an input characterto locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(cha *s, char c)
{

while (*s)
{
if (c == *s)
return (s);
}
if (c == *s)
return (s);
return (NULL);
}
