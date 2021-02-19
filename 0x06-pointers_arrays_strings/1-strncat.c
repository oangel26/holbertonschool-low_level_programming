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
	int x;

	x = 0;

	for(i = 0; dest[i] != '\0'; i++)
	{
		x++;
	}
	for(j = 0; j < n; j++)
	{
		dest[x++] = src[j];
	}
	return dest;
}
