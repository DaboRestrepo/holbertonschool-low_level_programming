#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: always 0
 */


int main(void)
{
int n;
int m;
int o;

for (n = 48; n <= 57; n++)
{
for  (m = 49; m <= 57; m++)
{
for (o = 50; o <= 57; o++)
{
if (n < m && m < o)
{
putchar(n);
putchar(m);
putchar(o);
if (n == 55 && m == 56 && o == 57)
continue;
{
putchar (',');
putchar (' ');
}
}
}
}
}
putchar('\n');
return (0);
}
