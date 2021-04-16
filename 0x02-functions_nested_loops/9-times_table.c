#include "holberton.h"

/**
 * times_table -  entry point
 * @x: interger
 * @y: character
 * Description: function that prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;
        int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z == 0)
			{
				if (y == 9)
				{
					_putchar(z + '0');
					break;
				}
				else
				_putchar(z + '0');
				_putchar(',');
				_putchar(' ');
                                _putchar(' ');
			}
			else if (z <= 9 && z > 0)
			{
				if (y == 9)
				{
					_putchar(z + '0');
					break;
				}
				else
				_putchar(z + '0');
				_putchar(',');
				_putchar(' ');
                                _putchar(' ');
			}
			else
			{
				if (y == 9)
				{
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
					break;
				}
				else
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
