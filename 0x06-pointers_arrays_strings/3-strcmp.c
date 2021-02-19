#include "holberton.h"


/**
 * _strcmp - function that compares two strings
 * @*s1: pointer type char
 * @*s2: pointer type char
 * Description: function that compares two strings
 * Return: interger
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int dif;

	dif = 0;

	if (s1[0] == s2[0])
	{
		return (0);
	}
	else
		for (i = 0; s1[i] == s2[i] ; i++)
		{
		}
	dif = s1[i] - s2[i];
	return dif;
}
