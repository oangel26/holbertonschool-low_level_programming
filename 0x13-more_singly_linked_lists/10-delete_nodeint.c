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
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	else
	{
		ptrNode = *head;
		if (index == 0)
		{
			*head = (*head)->next;
			free(ptrNode);
			return (1);
		}
		while (i < index - 1)
		{
			ptrNode = ptrNode->next;
			if (ptrNode == NULL)
			{
				return (-1);
			}
			i++;
		}
		temp = ptrNode->next;
		ptrNode->next = (ptrNode->next)->next;
		free(temp);
		return (1);
	}
}
