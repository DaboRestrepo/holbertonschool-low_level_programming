#include <stdio.h>
/**
 * main - Print the possible combinations of
 * two-two digits.
 * Return: always 0.
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = 0; m <= 99; m++)
		{
			if (n < m)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (n == 98 && m == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
