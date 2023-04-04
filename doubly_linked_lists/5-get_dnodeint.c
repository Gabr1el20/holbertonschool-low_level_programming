#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: Placeholder.
 * @index: the index
 *
 * Return: The nth node of dlistint_t list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
		return (NULL);

	while (current->next != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	if (count < index)
		return (NULL);

	return (current);
}
