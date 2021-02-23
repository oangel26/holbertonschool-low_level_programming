#include "holberton.h"

/**
 * _strstr - finds first occurrence of substring needle in the string haystaack
 * @haystack: haystack string
 * @needle: substring needle
 * Return: Returns a pointer to the beginning of the located substring
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != needle[0]; i++)
	{
	}
	haystack = haystack + i;
	return (haystack);
}
