#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: dobule pointer to a data strucre list
 * @n: constant interger
 * Return: pointer to head of list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
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
		ptrNode = malloc(sizeof(listint_t));
		if (ptrNode == NULL)
		{
			return (NULL);
		}
		ptrNode->n = n;
		ptrNode->next = *head;
		*head = ptrNode;
	}
	return (*head);
}
