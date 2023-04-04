#include "lists.h"

/**
 * free_dlistint - frees a dlisint_t list
 * @head: Placeholder
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
