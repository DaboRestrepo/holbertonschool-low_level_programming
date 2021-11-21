#include <stdio.h>
/**
 * main - Print the 50 first Fibonacci numbers
 * Return: always 0.
 */
int main(void)
{
	long int m = 0, n = 1, o = 0, count = 0;

	printf("0\n1\n");
	for (; count < 48; count++)
	{
		o = m + n;
		printf("%ld\n", o);
		m = n;
		n = o;
	}
	return (0);
}
