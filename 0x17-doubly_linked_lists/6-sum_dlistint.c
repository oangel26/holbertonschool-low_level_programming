#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to dlistint_t list
 * Return: return integer sum of all data in list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_list = 0;
	/* GUARD CONDITION if list is empty*/
	if (head == NULL)
		return (0);

	else
	{
		while (head != NULL)
		{
			sum_list = sum_list + head->n;
			head = head->next;
		}
	}
	return (sum_list);
}
