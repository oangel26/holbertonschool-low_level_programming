#include "holberton.h"


/**
* print_triangle -  function that prints a triangle,
* @size: interger
* Description: function that prints a triangle,
* Return: void
*/

void print_triangle(int size)
{
	int i;
	int j;
	int a;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				a = size - i;
				if (j > a)
				{
					_putchar('#');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
