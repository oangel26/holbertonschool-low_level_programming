#include "holberton.h"


/**
* print_line - function that draws a straight line in the terminal
* @n: interger 
* Description: function that draws a straight line in the terminal
* Return: void
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
