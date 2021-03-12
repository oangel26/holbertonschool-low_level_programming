#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string
 * @n: constant unsigned interger, number of parameters
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (ap == NULL)
		{
			printf("(nil)%s", separator);
		}
		else if (separator == NULL || i == n - 1)
		{
			printf("%s", va_arg(ap, char *));
		}
		else
		{
			printf("%s%s", va_arg(ap, char *), separator);
		}
	}
	printf("\n");
	va_end(ap);
}
