#include "search_algos.h"

/**
 * binary_search - Searches value in sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, return -1.
 *         Otherwise, return the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_idx, right_idx, i, mid_idx;

	if (array == NULL)
		return (-1);

	for (left_idx = 0, right_idx = size - 1; right_idx >= left_idx;)
	{
		printf("Searching in array: ");
		for (i = left_idx; i < right_idx; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right_idx]);

		mid_idx = left_idx + (right_idx - left_idx) / 2;
		if (array[mid_idx] == value)
			return ((int)mid_idx);
		if (array[mid_idx] > value)
			right_idx = mid_idx - 1;
		else
			left_idx = mid_idx + 1;
	}

	return (-1);
}
