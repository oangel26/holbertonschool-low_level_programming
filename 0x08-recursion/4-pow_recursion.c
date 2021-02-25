#include "holberton.h"


/**
 * _pow_recursion - f that returns the value of x raised to the power of y
 * @x: interger number to be raised
 * @y: interger number that represents de psoer
 * Return: interger value of x raised to the power of y
 * If y is lower than 0, the function should return -1
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
