#include "main.h"
/**
 * get_bit - get a bit in index position.
 * @n: decimal number.
 * @index: position.
 * Return: the bit or -1 if fails.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);

	num = (n >> index) & 1;
	return (num);
}
