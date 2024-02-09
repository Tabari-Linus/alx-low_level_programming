#include "main.h"
11;rgb:0000/0000/0000
/**
 * flip_bits - A function thatt gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int xor = n ^ m, bits = 0;

  while (xor > 0)
    {
      bits += (xor & 1);
      xor >>= 1;
    }

  return (bits);
}
