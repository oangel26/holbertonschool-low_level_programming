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
	dlistint_t *current = *h;
	unsigned int i = 0;
	/*Guard condition if malloc cant alloc memory*/
        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
		return (NULL);
	new->n = n;
        new->next = NULL;
	new->prev = NULL;
	/*Guard condition if head node is NULL*/
	if (h == NULL)
		return (NULL);
	/*Loop to get the length of list*/
	while (i < idx)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	/*EDGE case if index of new node is 0*/
	if (idx == 0)
	{
		/*Node creation if *head is NULL*/
		if (*h == NULL)
		{
			*h = new;
			return (new);
		}
		else
		{
			new->next = (*h);
			(*h)->prev = new;
			*h = new;
			return (new);
		}
	}
	/*EDGE case if index is in last*/
	else if (i == idx)
	{
		/*EDGE case if index is in last*/
		if (current->next == NULL)
		{
			current->next = new;
			new->prev = current;
			return (new);
		}
		else
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
	}
	else
	{
		return (NULL);
	}
}
