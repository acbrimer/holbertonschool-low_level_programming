#include <stdlib.h>

/**
 * free_grid - frees 2D array
 * @grid: 2D array pointer
 * @height: height of grid
*/

void free_grid(int **grid, int height)
{
	(void)height;
	free(grid);
}
