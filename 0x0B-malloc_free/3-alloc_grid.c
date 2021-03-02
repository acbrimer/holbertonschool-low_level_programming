#include <stdlib.h>

/**
 * alloc_grid - cretes width x height 2D array
 * @width: size of inner array
 * @height: size of outer array
 *
 * Return: 2D array pointer to grid
*/
int **alloc_grid(int width, int height)
{
	int *r, **g;
	int i, ii, s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = (sizeof(int *) * height) + (sizeof(int) * width * height);
	g = (int **)malloc(s);
	if (g == NULL)
		return (NULL);
	/* get first row in g */
	r = (int *)(g + height);
	/* loop to set rows in g */
	for (i = 0; i < height; i++)
		g[i] = (r + width * i);
	/* loop to set value at g[i][ii] */
	for (i = 0; i < height; i++)
		for (ii = 0; ii < width; ii++)
			g[i][ii] = 0;

	return (g);
}
