#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

int main(int argc, char **argv)
{
int count, sum = 0;
if (argc <= 1)
{
printf("0\n");
}
for (count = 0; count < argc; count++)
{
if (argc > 1)
{
sum = sum + atoi(argv[count]);
printf("%d\n", sum);
}
else if (argv[count] < 48 && argv[count] > 57)
{
printf("ERROR\n");
return (1);
}
}
return (0);
}

