#include "lists.h"

/**
 * list-len - A function thar returns the number
 * of elements.
 * @h: Pointer
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
