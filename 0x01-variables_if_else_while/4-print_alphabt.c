#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char leta;

for (leta = 'a'; leta <= 'z'; leta++)
{
if (leta == 'e' || leta == 'q')
continue
putchar(leta);
}
putchar('\n');
return (0);
}
