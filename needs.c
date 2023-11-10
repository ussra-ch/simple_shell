#include "main.h"

/**
 * free_arr - function frees 2D arrays
 * @arr: input
 */

void free_arr(char **arr)
{
	int i = 0;

	if (arr == NULL)
		return;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
