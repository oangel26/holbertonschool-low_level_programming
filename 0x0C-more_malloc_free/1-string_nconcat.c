#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to char (string 1)
 * @s2: pointer to char (stirng 2)
 * @n: number of bytes to be copied of string 2
 * Return: pointer to char with newly allocated space in memory of s1 and s2 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	p = malloc((sizeof(char) * i) + n + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
