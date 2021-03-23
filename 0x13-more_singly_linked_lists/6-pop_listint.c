#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: doble pointer to head of list
 * Return: the head node int data
 */

int pop_listint(listint_t **head)
{
	int tempint;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		tempint = temp->n;
		free(*head);
		*head = temp->next;
	}
	return (tempint);
}
