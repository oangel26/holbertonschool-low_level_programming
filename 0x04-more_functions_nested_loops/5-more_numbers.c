#include "holberton.h"


/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Description: prints 10 times the numbers, from 0 to 14
* Return: void
*/


void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (x < 10)
			{
				_putchar(x + '0');
			}
			else
			{
				x = x % 10;
				_putchar('1');
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
