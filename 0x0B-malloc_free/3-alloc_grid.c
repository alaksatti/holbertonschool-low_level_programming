#include <stdio.h>

/**
 * alloc_grid - returns pointer to 2-dimensional array.
 * @width: width.
 * @height: height.
 * Return: null on failure, otherwise pointer to pointer.
 */


int **alloc_grid(int width, int height)
{
	int **arr;
	int c = 0, r = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int) * (height));

	if (arr)
	{
		for (r = 0; r < height; r++)
			arr[r] = (int *)malloc(sizeof(int) * (width));

		if (!(arr[r]))
		{
			for (; c >= 0 ; --c)
				free arr[c];
			free arr;
			return (NULL);
		}
		for (; c < width; ++c)
			arr[r + c] = 0;
	}


	return (arr);


}
