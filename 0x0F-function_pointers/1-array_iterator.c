#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - exe. a funct. given as a para. on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to function void return with interger innput
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int  i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
