#include "holberton.h"

/**
* _strlen - function that returns the length of a string.
* @s: pointer type interger
* Description: function that returns the length of a string.
* Return: Interger (x) length of the string
*/


int _strlen(char *s)
{
	int i;
	int x;
	x = 0;

	for (i = 0; s[i] !=  '\0'; i ++)
	{
		x++;
	}
	return (x);
}
