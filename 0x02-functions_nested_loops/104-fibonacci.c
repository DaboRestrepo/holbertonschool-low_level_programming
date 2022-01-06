#include <stdio.h>
/**
 * main - Print the 100 first Fibonacci numbers
 * Return: always 0.
 */
int main(void)
{
	float m = 1, n = 2, o = 0;
	int count = 0;

	printf("1, 2, ");
	for (; count <= 96; count++)
	{
		o = m + n;
		printf("%.0f", o);
		if (count == 96)
			break;
		printf(", ");
		m = n;
		n = o;
	}
	printf("\n");
	return (0);
}
