#include "main.h"
/**
 * print_binary - Convert decimal to binary.
 * @n: decimal number.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		if ((n & 1) == 0)
			_putchar('0');
		else
			_putchar('1');
		n >>= 1;
	}
}
