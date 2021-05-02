#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginnign of a list
 * @head: pointer to pointer to data structure list
 * @n: constant interger
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/*guard conditions if head is NULL*/
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		/*guard condition if not enough memory*/
		if (new == NULL)
		{
			dprintf(2, "Error: Can't malloc\n");
			return (NULL);
		}
		/*new node initialization and linking*/
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		if (*head != NULL)
		{
			(*head)->prev = new;
		}
		*head = new;
		return (new);
	}
}
