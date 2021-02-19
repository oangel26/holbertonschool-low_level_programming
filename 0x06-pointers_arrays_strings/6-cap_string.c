#include "holberton.h"


/**
 * *cap_string - function that capitalizes all words of a string
 * @*p: pointer type char
 * Description:  function that capitalizes all words of a string
 * Return: pointer type char
 */

char *cap_string(char *p)
{
	int i;

	for ( i = 0; p[i] != '\0'; i++)
	{
		if (!(p[i] >= 65 && p[i] <= 90))
		{
			if(!(p[i--] >= 65 && p[i--] <= 122))
			{
				p[i--] = p[i] - 32;
			}

		}
	}
	return (p);
}
