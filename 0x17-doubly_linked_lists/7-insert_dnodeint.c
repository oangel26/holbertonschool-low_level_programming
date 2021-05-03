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
	unsigned int i = 0;
	unsigned int j = 0;

	/*guard condition for node if NULL*/
	if (h == NULL)
	{
		return (NULL);
	}
	/*Loop to find the length of list and create a node*/
	tmp = *h;
	while (tmp != NULL)
	{
                i++;
                tmp = tmp->next;
        }
	new = malloc(sizeof(dlistint_t));
	/*guard condition if not enough memory*/
	if (new == NULL)
	{
		return (NULL);
	}
	/*Condition if node given is added at the beginning*/
	if (idx == 0)
	{
		if (*h == NULL)
		{
			new->n = n;
			new->next = NULL;
			new->prev = NULL;
			*h = new;
		}
		else
		{
			new->n = n;
			new->prev = NULL;
			new->next = *h;
			(*h)->prev = new;
			*h = new;
		}
			return (new);
	}
	/*Condition if node given is added at the end*/
	else if (i == idx)
	{
		new->n = n;
		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	/*Condition if node given is added in the middle*/
	else if (idx < i)
	{
		/*Loop to reach the index node*/
		tmp = *h;
		while (j != idx)
		{
			tmp = tmp->next;
			j++;
		}
		new->n = n;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next= new;
		tmp->prev = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
