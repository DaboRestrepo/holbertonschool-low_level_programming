#include <stdio.h>
/**
 * main - add the 3 and 5 multiples.
 * Return: always 0
 */
int main(void)
{
	int mul = 0, res = 0;

	for (; mul < 1024; mul++)
	{
		if (mul % 3 == 0 || mul % 5 == 0)
		{
			res += mul;
		}
	}
	printf("%d\n", res);
	return (0);
}
