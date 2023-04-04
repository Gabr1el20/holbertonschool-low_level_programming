#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end
 * @head: Pointer-to-pointer
 * @n: int n.
 *
 * Return: The address of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo = NULL;
	dlistint_t *ultimo = *head;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	nuevo->next = NULL;

	if (*head == NULL)
	{
		nuevo->prev = NULL;
		*head = nuevo;
		return (*head);
	}

	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}
	ultimo->next = nuevo;
	nuevo->prev = ultimo;
	return (ultimo->next);
}
