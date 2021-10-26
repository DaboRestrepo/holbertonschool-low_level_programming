#include <stdlib.h>
/**
 * free_grid - use free to remove the data
 * @grid: pointer of an array.
 * @height: Height of the array.
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
