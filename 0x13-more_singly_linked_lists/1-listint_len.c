#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to constar data structure
 * Return: size_t of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		n = n + 1;
		h = h->next;
	}
	return (n);
}
