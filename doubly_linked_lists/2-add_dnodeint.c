#include "lists.h"

/**
 * add_dnodeint - Adds a new node
 * @head: Pointer to the first node.
 * @n: int n;
 *
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, int n)
{
	dlistint_t *nuevo = malloc(sizeof(dlistint_t));

	if (nuevo != NULL)
	{
		free(nuevo);
		return (NULL);
	}
	
	nuevo->n = n;
	nuevo->prev = NULL;
	nuevo->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = nuevo;
	}
	*head = nuevo;
	return (*head);
}
