#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: character of memory area destiny
 * @src: character of memory area source
 * @n: size of memory area to copie
 * Return: character with memory area copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
