#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int t, y;
	int *mem;

	if (min > max)
		return (NULL);
	y = max - min + 1;
/* dynamic memory space allocation */
	mem = malloc(sizeof(int) * y);
/* memory allocation fail exit */
	if (mem == NULL)
		return (NULL);
/*filling the array with numbers from min to max */
	for (t = min; t <= max; t++)
	{
		mem[t - min] = t;
	}

	return (mem);
}
