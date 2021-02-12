#include "holberton.h"


/**
* _isupper - check uppercase letter.
* @c: interger
* Description: returns 1 if uppercas 0 else
* Return: 1 if it is uppercase 0 eles.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);

}
