#include "holberton.h"


/**
* print_number - function that prints an integer
* @n: interger
* Description: function that prints an integer
* Return: void
*/

void print_number(int n)
{

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n < 100 && n >=10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000 && n >= 100)
	{
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 10000 && n >= 1000)
	{
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (-100 < n && n < 0)
	{
		_putchar('-');
		_putchar((n / 10)*-1 + '0');
		_putchar((n % 10)*-1 + '0');
	}

}
