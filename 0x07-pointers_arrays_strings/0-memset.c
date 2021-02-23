#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory of buffer
 * @b: character to fill in memory
 * @n: size of memory to fill
 *
 * Return: character rewrited
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
