#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: unsigned int with number of elements of size bytes each
 * @size: size of bytes
 *
 * Return: pointer to void to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i * size] = 0;
	}
	return (p);
}
