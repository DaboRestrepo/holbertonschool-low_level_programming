#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * positive_or_negative - Función prototipo.
 * 
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{

srand(time(0));
i = rand() - RAND_MAX / 2;
/* your code goes there */
if (i > 0)
printf("%i is positive\n", i);
else if (i == 0)
printf("%i is zero\n", i);
else if (i < 0)
printf("%i is negative\n", i);
}
