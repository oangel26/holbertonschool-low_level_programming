#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initil. it with a specific char.
 * @c: array of chars to be initialize
 * @size: size of array
 *
  * NULL if size is = 0
 * Returns a pointer to the array of char, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
        unsigned int i;

        if (size != 0)
        {
		char *p= (char*)malloc(size);

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
        }
        else
		return (NULL);

}
