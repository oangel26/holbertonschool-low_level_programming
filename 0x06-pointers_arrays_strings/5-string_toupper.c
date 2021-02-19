#include "holberton.h"


/**
 * string_toupper - cchanges all lowercase letters of a string to uppercase
 * @p: pointer type char
 * Description: changes all lowercase letters of a string to uppercase.
 * Return: pointer type char
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
