#include "holberton.h"


/**
 * *_strncat - unction that concatenates two strings
 * @*dest: pointer type char
 * @*src: pointer type char
 * @n: interger n
 * Description: unction that concatenates two strings
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for(i = 0; dest[i] != '\0'; i++)
	{
	}
	i;
	for(j = 0; j < n; j++)
	{
		dest[i++] = src[j];
	}
	return dest;
}
