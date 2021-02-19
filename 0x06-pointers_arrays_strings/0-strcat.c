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

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	i;
	for (j = 0; src[j]!= '\0';j++)
	{
		dest[i++] = src[j];
	}
	return dest;
}
