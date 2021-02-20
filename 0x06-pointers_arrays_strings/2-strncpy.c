#include "holberton.h"


/**
 * _strncpy - function that copies a string
 * @dest: pointer type char
 * @src: pointer type char
 * @n: interger
 * Description: function that copies a string
 * Return: pointer type char
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	int cont;

	cont = 0;
	i = 0;

	for (j = 0; src[j] != '\0'; j++)
	{
		cont++;
	}
	if (n < cont)
	{
		for (j = 0; j < n; j++)
		{
			dest[i++] = src[j];
		}
	}
	else
		for (j = 0; j <= cont; j++)
		{
			dest[i++] = src[j];
		}
	return (dest);
}
