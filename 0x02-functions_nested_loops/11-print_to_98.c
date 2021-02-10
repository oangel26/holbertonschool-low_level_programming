#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function
 * @n: is an interger
 * Description: function that prints all natural numbers from n to 98
 * Return: Always 0.
 */

void print_to_98(int n)
{
		while (n <= 97)
		{
			printf("%d", n);
			n++;
			if (n != 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
		while (n > 97)
		{
			printf("%d", n);
			n--;
			if (n != 89)
			{
			putchar(',');
			putchar(' ');
			}
		}

	putchar('\n');
}
