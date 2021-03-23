#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: pointer to constant data structure
 * Return: size_t of list
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			n = n + 1;
		}
	}
	return (n);
}
