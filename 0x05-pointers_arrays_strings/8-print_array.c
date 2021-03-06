#include "holberton.h"
#include <stdio.h>

/**
* print_array - function that prints n elements of an array of integers
* @a: pointer type interger
* @n: interger
* Description: function that prints n elements of an array of integers
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < 100)
		{
			putchar((a[i] / 10) % 10 + '0');
			putchar((a[i] % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		else if (a[i] >= 100 && a[i] < 1000)
		{
			putchar((a[i] / 100) % 10 + '0');
			putchar((a[i] / 10) % 10 + '0');
			putchar((a[i] % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		else if (a[i] < -1000 && a[i] > -10000)
		{
			putchar('-');
			putchar((a[i] * -1 / 1000) % 10 + '0');
			putchar((a[i] * -1 / 100) % 10 + '0');
			putchar((a[i] * -1 / 10) % 10 + '0');
			putchar((a[i] * -1 % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		else if (a[i] < -100 && a[i] > -1000)
		{
			putchar('-');
			putchar((a[i] * -1 / 100) % 10 + '0');
			putchar((a[i] * -1 / 10) % 10 + '0');
			putchar((a[i] * -1 % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
