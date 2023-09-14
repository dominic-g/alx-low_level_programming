#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the first occurrence;
 * otherwise, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return ((int)j);
	}

	return (-1);
}
