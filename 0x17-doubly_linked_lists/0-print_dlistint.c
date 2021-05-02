#include "lists.h"


/**
 * print_dlistint - function that prints all the elements of linked list
 * @h: pointer to constant data structure dlistint_t
 * Return: number of elements in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	/*guard condition in case h is NULL*/
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf ("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
