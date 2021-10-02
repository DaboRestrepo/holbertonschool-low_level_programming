#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints all possible different combinations of tw o digits.
 * Return: Always 0
 */
int main(void)
{
int n;
int m;
for (n = 48; n <= 57; n++)
{
for (m = 49; m <= 57; m++)
{
if (n != m && n < m)
{
putchar(n);
putchar(m);
if ((n & m) != (56 & 57))
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
