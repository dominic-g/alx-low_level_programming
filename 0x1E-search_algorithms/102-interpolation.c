#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array
 *			of integers using Interpolation search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, return -1.
 *         Otherwise, return the index where the value is located.
 *
 * Description: Prints the elements being checked during the search.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double factor;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size > 0)
	{
		factor = (high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + factor);

		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
		}

	return (-1);
}

