#include "holberton.h"


/**
 * cap_string - function that capitalizes all words of a string
 * @p: pointer type char
 * Description:  function that capitalizes all words of a string
 * Return: pointer type char
 */

char *cap_string(char *p)
{
	int i;
	int j;
	char string[] = {' ', ')', '(', '{', '}', ',', ';', '\n', '.', '"', };
	char *s;

	s = string;

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == p[i])
			{
				if (p[i + 1] >= 65 && p[i + 1] <= 90)
				{
					p[i + 1] = p[i + 1] - 32;
				}
			}
		}
	}
	return (p);
}
