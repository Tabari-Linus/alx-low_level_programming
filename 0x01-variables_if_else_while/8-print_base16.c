#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letas;
int nums;

for (nums = '0'; nums <= '9'; nums++)
putchar(nums);
for (letas = 'a'; letas <= 'f'; letas++)
putchar(letas);
putchar('\n');
return (0);
}
