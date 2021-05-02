#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements ina linked list
 * @h: pointer to constnt data sturctur dlistint_t
 * Return: number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	/*guard condition*/
	if (h == NULL)
	{
		return (0);
	}
	/*iterator to find number of elements in linked list*/
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
