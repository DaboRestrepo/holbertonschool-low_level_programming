#include "main.h"
/**
 * binary_to_uint - Convert binary to decimal.
 * @b: a pointer to the binary number.
 * Return: the decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	for (; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		num <<= 1;
		num += b[index] - '0';
	}
	return (num);
}
