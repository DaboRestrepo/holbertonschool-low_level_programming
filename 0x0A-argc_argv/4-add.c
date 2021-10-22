#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *
 *
 *
 */

int main(int argc, char **argv)
{
int count = 0, sum = 0;

while (argv[count])
{
count++;
}
if (argc > 1)
{
sum += atoi(argv[count]);
}
printf("%d\n", sum);

if (argv[count] < 48 && argv[count] > 57 )
{
printf("Error\n");
return (1);
}
else if (argc < 2)
{
printf("0\n");
}
return (0);
}

