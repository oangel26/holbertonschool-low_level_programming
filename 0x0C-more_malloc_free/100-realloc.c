#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: ponter to void containing old_size memory allocation
 * @old_size: size of previously allocated memory
 * @new_size: size of new allocated memory
 * Return: ponter to void with unpdated allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
        {
                ptr = malloc(new_size);
                return (ptr);
        }
	else if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }
	else if (new_size == old_size)
        {
                return (ptr);
        }
	else if (new_size > old_size)
	{
		ptr = malloc(new_size);
	}
	else if (new_size < old_size)
	{
		free(ptr);
                p = malloc(new_size);
		return (p);
        }
	return (ptr);
}
