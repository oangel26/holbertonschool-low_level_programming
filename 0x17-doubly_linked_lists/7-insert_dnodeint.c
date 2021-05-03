#include "lists.h"

/**
 * insert_dnodeint_at_index - f that inserts a new node at a given position
 * @h: pointer to pointer to a node data structure
 * @idx: unsigned int index position
 * @n: interger with data
 * Return: pointer to node data stucture dlistint_t.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i, j = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	tmp = *h;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		if (*h == NULL)
		{
			new->next = NULL;
		}
		else
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	else if (i == idx)
	{
		new->n = n;
		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	else if (idx < i)
	{
		tmp = *h;
		while (j != idx)
		{
			tmp = tmp->next;
			j++;
		}
		new->n = n;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next = new;
		tmp->prev = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
