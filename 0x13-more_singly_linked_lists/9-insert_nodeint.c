#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given postn
 * @head: doble pointer to data structure list
 * @idx: unsigned int index
 * @n: interger value of new node
 * Return: pointer to newNode inserted
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptrNode;
	listint_t *newNode;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			newNode = malloc(sizeof(listint_t));
			if (newNode == NULL)
                        {
                                return (NULL);
                        }
			(newNode)->n = n;
			(newNode)->next = *head;
			*head = newNode;
		}
		ptrNode = *head;
		while (i < idx - 1)
		{
			ptrNode = ptrNode->next;
			i++;
			if (ptrNode == NULL)
			{
				return (NULL);
			}
		}
		newNode = malloc(sizeof(listint_t));
		{
			if (newNode == NULL)
			{
				return (NULL);
			}
			(newNode)->n = n;
			(newNode)->next = ptrNode->next;
			ptrNode->next = newNode;
		}
	}
	return (newNode);
}
