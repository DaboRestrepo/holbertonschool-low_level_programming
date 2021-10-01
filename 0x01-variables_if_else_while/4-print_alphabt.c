#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char n;
n = 97;
for (n = 97; n <= 122; n++)
{
if (n != 113 && n != 101)
putchar(n);
}
putchar(10);
return (0);
}
