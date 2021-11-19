#include "main.h"
/**
 * clear_bit - clear a bit in index position.
 * @n: pointer to the number.
 * @index: position.
 * Return: 1 if success or -1 if fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n ^= (-0 ^ *n) & (1 << index);
	return (1);
}
