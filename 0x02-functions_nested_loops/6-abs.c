#include "holberton.h"

/**
 * _abs -  entry point
 * @x: number of entry
 * Description: function that computes the absolute value of an integer
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	if (x > 0)
	{
		return (x);
	}
	return (0);
}
