#include "holberton.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: string s
 * @c: character c
 * Return: Returns a pointer to the first occurrence of char c in s.
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
	}
	if (s[i] == c)
	{
		s = s + i;
		return (s);
	}
	else
		return ('\0');
}
