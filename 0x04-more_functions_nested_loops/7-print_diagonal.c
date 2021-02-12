#include "holberton.h"


/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n: interger
* Description: function that draws a diagonal line on the terminal.
* Return: void
*/


void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i != j)
				{
					_putchar(' ');
				}
				else
					_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
