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
	va_list ap2;
	unsigned int i;

	va_start(ap, n);
	va_start(ap2, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%s", va_arg(ap, char *));
		}
		else if (va_arg(ap2, char *) != NULL)
		{
			printf("%s%s", va_arg(ap, char *),separator );
		}
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
	va_end(ap2);
}
