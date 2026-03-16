#include "main.h"

/**
 */

int **alloc_grid(int width, int height)
{
  int **grid;
  int i = 0, j;

  if (width <= 0 || height <= 0)
    return (NULL);

  grid = malloc(sizeof(int *) * height);
  if (grid == NULL)
    return (NULL);
  while (i < height)
    {
      grid[i] = malloc(sizeof(int) * width);
      if (grid[i] == NULL)
	{
	  for (j = 0; j < i; j++)
	    free(grid[j]);
	  free(grid);
	  return (NULL);
	}
      i++;
    }
      i = 0, j = 0;
  while (i < height)
    {
      while (j < width)
	{
	  grid[i][j] = 0;
	  j++;
	}
      i++;
    }
  return (grid);
}
