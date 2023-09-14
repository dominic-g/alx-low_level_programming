#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search for a value in a sorted array
 *		of integers using Jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, return -1.
 *         Otherwise, return the index where the value is located.
 *
 * Description: Prints the elements being checked during the search.
 */
int jump_search(int *array, size_t size, int value)
{
	int current_index, jump, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	jump = (int)sqrt((double)size);
	current_index = prev_index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", current_index, array[current_index]);

		if (array[current_index] == value)
			return (current_index);

		prev_index = current_index;
		current_index += jump;
	} while (current_index < (int)size && array[current_index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev_index, current_index);

	for (; prev_index <= current_index && prev_index < (int)size; prev_index++)
	{
		printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);
		if (array[prev_index] == value)
			return (prev_index);
	}

	return (-1);
}
