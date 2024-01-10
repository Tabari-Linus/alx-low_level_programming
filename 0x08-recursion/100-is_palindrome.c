#include "main.h"
#include <stdio.h>

int _strlen_recurssion(char *s);
int helper_palindrome(char *s, int len);

/**
 * _strlen_recursion - A function to obtain the length of the string s
 * @S: A string to calculate length
 * Return: the length of string s
 */
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}

/**
 * helper_palindrome - A function with a reversed string
 * @s: An input string
 * @len: the length of the string s
 * Return: A reverse string
 */
int helper_palindrome(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
{
return (helper_palindrome(s + 1, len - 2));
}
else
return (0);
}