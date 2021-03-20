#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to structure data type
 * Return: size_t of elemnts in list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (;h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
