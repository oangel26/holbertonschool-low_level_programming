#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:  program that prints all possible combinations of two two-digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;
	int w;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				for (w = 0; w <= 9; w++)
				{
					if (((x * 10) + y) < ((z * 10) + w) && x <= z)
					{
						putchar(x + '0');
						putchar(y + '0');
						putchar(' ');
						putchar(z + '0');
						putchar(w + '0');
						if (x == 9 && y == 8 && z == 9 && w == 9)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
