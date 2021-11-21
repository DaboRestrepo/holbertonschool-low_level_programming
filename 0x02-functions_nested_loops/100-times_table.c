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
				putchar(',');
				putchar(' ');
			}
			if (p > 9 && p < 100)
			{
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
			}
			else if (p >= 100)
			{
				putchar((p / 100) + '0');
				putchar((p / 10) % 10 + '0');
				putchar((p % 10) + '0');
			}
			else
			{
				putchar(' ');
				putchar(' ');
				putchar((p % 10) + '0');
			}
		}
	putchar('\n');
	}
}
