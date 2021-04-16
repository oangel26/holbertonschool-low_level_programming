#include "holberton.h"

/**
 * jack_bauer -  entry point
 * Description: function that prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int x;
	int z;
	int w;

	for (x = 0; x <= 23; x++)
	{
		for (z = 0; z <= 5; z++)
		{
			for (w = 0; w <= 9; w++)
			{
				if (x <= 9)
				{
					_putchar('0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(z + '0');
					_putchar(w + '0');
					_putchar('\n');
				}
				else
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
					_putchar(':');
					_putchar(z + '0');
					_putchar(w + '0');
					_putchar('\n');
				}
			}
		}
	}
}
