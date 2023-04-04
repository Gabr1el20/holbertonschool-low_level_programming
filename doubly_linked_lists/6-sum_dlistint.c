#include "lists.h"

/**
 * sum_dlistint - Sum all the data of dlistint_t
 * @head: Placeholder.
 *
 * Return: The sum of all the data of dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
