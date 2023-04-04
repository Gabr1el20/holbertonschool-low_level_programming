#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position
 * @h: Pointer-to-pointer.
 * @idx: the index.
 * @n: int n
 *
 * Return: The address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nuevo = NULL;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;

	if (h == NULL)
		return (NULL);

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;

	if (idx == 0)
	{
		nuevo->next = *h;
		nuevo->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = nuevo;
		}
		*h = nuevo;
		return (*h);
	}

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	temp2 = temp->next;
	temp->next = nuevo;
	nuevo->next = temp2;
	nuevo->prev = temp;
	if (temp2 != NULL)
	{
		temp2->prev = nuevo;
	}
	return (temp->next);
}
