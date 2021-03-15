#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function that prints arg. passed according to format types arg.
 * @format: contant pointer to constant string of characters
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *tmp;

	va_start(ap, format);
	while (format == NULL)
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
			tmp = va_arg(ap, char *);
		if (tmp == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", tmp);
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
}
