#include "search_algos.h"

/**
 * linear_search - Search algorithm
 * @array: array with values
 * @size: size of array with values
 * @value: value to search in array
 * Return: index of search or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
