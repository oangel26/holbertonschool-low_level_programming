#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: pointer to function returning interger and interger innput
 *
 * Return: return index of the first elemento for wich cmp doesnt return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			break;
		}
		else
			return (-1);
	}
	return (i);
}
