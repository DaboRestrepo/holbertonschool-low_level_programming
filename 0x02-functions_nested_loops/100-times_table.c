#include <stdio.h>
#include "main.h"
/**
 * print_times_table - the mul table of any number.
 * @n: multiple.
 * Return: nothing.
 */
void print_times_table(int n)
{
	int m, o, p;

	if (n < 0 || n > 15)
		return;
	for (m = 0; m <= n; m++)
	{
		for (o = 0; o <= n; o++)
		{
			p = (m * o);
			if (o != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p > 9 && p < 100)
			{
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p >= 100)
			{
				_putchar((p / 100) + '0');
				_putchar((p / 10) % 10 + '0');
				_putchar((p % 10) + '0');
			}
			else if (p < 10 && o != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((p % 10) + '0');
			}
			else
				_putchar((p % 10) + '0');
		}
	_putchar('\n');
	}
}
