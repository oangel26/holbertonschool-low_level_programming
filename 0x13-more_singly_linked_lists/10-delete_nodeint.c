#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at indx
 * @head: doble pointer to data structur
 * @index: index
 * Return: 1 if success, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptrNode;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		ptrNode = *head;
		while (i < index - 1)
		{
			ptrNode = ptrNode->next;
			i++;
		}
		if ((ptrNode->next)->next != NULL)
		{
			ptrNode->next = (ptrNode->next)->next;
		return (1);
		}
		else
		{
			return (-1);
		}
	}
}
