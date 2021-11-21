#include <stdio.h>
/**
 * main - Print the add of the pares in Fibonacci.
 * Return: Always 0.
 */
int main(void)
{
	long int m = 0, n = 1, o = 0, sum = 0, count = 0;

	for (; count < 50; count++)
	{
		o = m + n;
		m = n;
		n = o;
		if (o % 2 == 0)
			sum += o;
	}
	printf("%ld\n", sum);
	return (0);
}
