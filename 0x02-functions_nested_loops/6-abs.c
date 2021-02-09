#include "holberton.h"

/**
 * main -  entry point
 * @x: number of entry
 * Description: program prints Holberton
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
