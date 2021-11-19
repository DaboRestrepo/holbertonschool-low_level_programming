#include "main.h"
/**
 * flip_bits - count the bits that has to flip
 * to be equals.
 * @n: first number.
 * @m: second number.
 * Return: the count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, bin_n, bin_m;

	while (n > 0 || m > 0)
	{
		bin_n = (n & 1);
		bin_m = (m & 1);
		if (bin_m != bin_n)
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
