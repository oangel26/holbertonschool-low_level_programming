#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint -  function that reverses a linked list.
 * @head: pointer to pointer containing first element of list.
 * Return: pointer to fisrt node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentNode = NULL;
	listint_t *prevNode = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	while ((*head)->next != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
	}
	currentNode = *head;
	currentNode->next = prevNode;
	prevNode = currentNode;
	return (*head);
}
