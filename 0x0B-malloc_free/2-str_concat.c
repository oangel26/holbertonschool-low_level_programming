#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return poiner to type char containing the content of s1 and s2
 * Return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
        char *p;
        int i;
        int j;
        int k;
        int l;

        for (i = 1; s1[i] != '\0'; i++)
        {
        }
        for (j = 1; s2[j] != '\0'; j++)
        {
        }
        p = (char*)malloc(i + j + 1);
        for (k = 0; k < i; k++)
        {
                p[k] = s1[k];
        }
        for (l = 0; l <= j; l++ , i++)
        {
		p[i] = s2[l];
        }
	return (p);
}
