#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which is a duplicate of the string str.
 * @str: string
 * Return: returns a pointer to the duplicated string.
 * Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
        int i;
        int size = 0;
        char *p;

        if (str == NULL)
        {
                return (NULL);
        }
        else
                for (i = 0; str[i] != '\0'; i++)
                {
                        size++;
                }
        p = (char*)malloc(size+1);
        for (i = 0; i <= size; i++)
        {
                p[i] = str[i];
        }
        return (p);
}
