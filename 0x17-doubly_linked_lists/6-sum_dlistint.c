#include "lists.h"

/**
 * sum_dlistint - function that return the sum of all the data (n) of a list
 * @head: pointer to node data structer
 * Return: interger with the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/*Guard conditions for NULL pointer*/
	if (head == NULL)
	{
		return (0);
	}
	/*Loop which sums all the data of list*/
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
