#include "main.h"

/**
 * binary_to_uint - A function that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int base_vr = 1, res = 0, len = 0;

  if (b == NULL)
    return (0);

  while (b[len])
    len++;

  while (len)
    {
      if (b[len - 1] != '0' && b[len - 1] != '1')
	return (0);

      if (b[len - 1] == '1')
	res += base_vr;
      base_vr *= 2;
      len--;
    }
  return (res);
}
