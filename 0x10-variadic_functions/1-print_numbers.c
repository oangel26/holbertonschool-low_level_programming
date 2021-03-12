#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string
 * @n: constant unsinged int  with number of parameters
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	printf("\n");
	va_end(ap);
}
