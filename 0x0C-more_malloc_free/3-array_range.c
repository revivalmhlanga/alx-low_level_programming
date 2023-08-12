#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of an integers
 * @min: minimum range of value stored
 * @max: maximum range of value stored and number of elememnts
 *
 * Return: pointer to n new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);

}
