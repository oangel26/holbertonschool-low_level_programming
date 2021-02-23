#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in s for any of a set of bytes
 * @s: the string
 * @accept: string accept
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = j = 0; s[i] != accept[j]; i++, j++)
	{
	}
	if (s[i] == accept[j])
	{
	s = s + i - 1;
	return (s);
	}
	else
		return ('\0');
}
