#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a list (safe version)
 * @h: double pointer to head of list
 * Return: size of elementes in list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free (temp);
		n++;
	}
	return (n);
}
