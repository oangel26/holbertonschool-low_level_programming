#include "holberton.h"


/**
* _isdigit - check for a digit (0 through 9)
* Description: returns 1 if it is a digit 0 something eles
* @c: interger
* Return: returns 1 or 0.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
