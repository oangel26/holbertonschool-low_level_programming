#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: interger minimum number to contain in array
 * @max: interger maximum numbert to contain in array
 *
 * Return: pointer to interger of the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i <= (max - min); i++)
		{
			p[i] = min + i;
		}
	return (p);
	free(p);
}
