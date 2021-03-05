#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: unsigned int with the size of bytes to allocate in memery
 * Return: pointer with address of memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if(b == 0)
	{
		return (NULL);
	}
	p = malloc(b);
	if (p == NULL)
	{
		free (p);
		exit (98);
	}
	else
		return (p);
}
