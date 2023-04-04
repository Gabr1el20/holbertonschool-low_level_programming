#include "lists.h"
#include "5-get_dnodeint.c"

/**
 * delfirst - deletes the first node
 * @head: pointer to the first position
 *
 * Return: head.
 */
int delfirst(dlistint_t **head)
{
	dlistint_t *checker = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;
	free(checker);
	return (1);
}



/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the first position
 * @index: the index
 *
 * Return: 1 if succeed, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	dlistint_t *previo = NULL;

	if (head == NULL)
		return (-1);

	if (index == 0)
		return (delfirst(head));

	aux = get_dnodeint_at_index(*head, index);
	if (aux == NULL)
		return (-1);
	previo = get_dnodeint_at_index(*head, index - 1);
	if (previo == NULL)
		return (-1);

	previo->next = aux->next;
	if (aux->next)
		aux->next->prev = previo;
	free(aux);
	return (1);
}
