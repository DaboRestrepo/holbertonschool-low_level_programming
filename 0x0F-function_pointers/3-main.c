#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Print the result
 * @argc: Lengh of array
 * @argv: elements of the array.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int num1 = 0, num2 = 0, res;
int (*operator)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operator = get_op_func(argv[2]);
res = operator(num1, num2);

printf("%i\n", res);
return (0);
}
