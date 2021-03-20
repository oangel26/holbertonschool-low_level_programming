#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: structur data tipe
 * Return: size_t of elements
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	/* guard condition in case h is NULL*/
	if (h == NULL)
	{
		return (0);
	}
	/*code*/
	for (; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
