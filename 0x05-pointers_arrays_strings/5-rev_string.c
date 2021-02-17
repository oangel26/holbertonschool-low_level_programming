#include "holberton.h"


/**
* rev_string -  function that reverses a string
* @s: pointer type char
* Description:  function that reverses a string
* Return: void
*/

void rev_string(char *s)
{
	int x;
	int i;
	x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x++;
	}
	char r[x];
	for (i = 0; i < x; i++)
	{
		s[i] = r[x-i-1];
	}
}
