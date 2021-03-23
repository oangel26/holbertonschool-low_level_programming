#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a list
 * @head: doble pointer to a data sturcutre list
 * @n: constant integer
 * Return: pointer to head of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptrNode;

	if (*head == NULL)
	{
		ptrNode = malloc(sizeof(listint_t));
		if (ptrNode == NULL)
		{
			return (NULL);
		}
		ptrNode->n = n;
		ptrNode->next = NULL;
		*head = ptrNode;
	}
	else
	{
		ptrNode = *head;
		while (ptrNode->next != NULL)
		{
			ptrNode = ptrNode->next;
		}
		ptrNode->next = malloc(sizeof(listint_t));
		if (ptrNode->next == NULL)
		{
			return (NULL);
		}
		(ptrNode->next)->n = n;
		(ptrNode->next)->next = NULL;
	}
	return (*head);
}
