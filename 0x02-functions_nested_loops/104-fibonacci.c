#include <stdio.h>
/**
 * main - Print the 100 first Fibonacci numbers
 * Return: always 0.
 */
int main(void)
{
	float m = 0, n = 1, o = 0;
	int count = 0;

	for (; count <= 98; count++)
	{
		o = m + n;
		printf("%.0f", o);
		if (count == 98)
			break;
		printf(", ");
		m = n;
		n = o;
	}
	printf("\n");
	return (0);
}
