#include "lists.h"

/**
 * dlistint_len - A function that returns the number of
 * elements
 * @h: Placeholder
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
