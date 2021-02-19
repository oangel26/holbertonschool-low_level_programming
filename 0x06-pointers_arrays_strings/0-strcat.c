#include "holberton.h"


/**
 * *_strcat - function that concatenates two strings
 * @*dest: pointer type char
 * @*src: pointer type char
 * Description: function that concatenates two strings
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int x;

	x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		x++;
	}
       	for (j = 0; src[j] != '\0'; j++)
	{
		dest[x++] = src[j];
	}
	return dest;
}
