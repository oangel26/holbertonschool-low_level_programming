#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	if (b == 0)
	{
		return (NULL);
	}
	p = malloc(b);
	if (p == NULL)
	{
		return (NULL);
	}
	else
		return (p);
}
