#include "main.h"

/**
 * _islower -  entry point
 * @c: interger of entry to value
 * Description: function that checks for lowercase characte
 * Return: Returns 1 if c is lowercase; 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
