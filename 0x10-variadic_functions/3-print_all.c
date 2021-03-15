#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);

	if (format == NULL)
	{
			printf("\n");
			return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			printf("%s", va_arg(ap, char *));
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
	return;
}
