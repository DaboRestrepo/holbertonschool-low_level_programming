#include <stdio.h>
/**
 * main - Print the 50 first Fibonacci numbers
 * Return: always 0.
 */
int main(void)
{
	long int m = 0, n = 1, o = 0, count = 0;

	for (; count < 50; count++)
	{
		o = m + n;
		printf("%ld", o);
		if (count == 49)
			break;
		printf(", ");
		m = n;
		n = o;
	}
	printf("\n");
	return (0);
}
