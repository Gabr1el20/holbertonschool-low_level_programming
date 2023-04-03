#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: pointer-to-pointer to head
 * @str: string.
 *
 * Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo = malloc(sizeof(list_t));
	list_t *checker = *head;

	if (nuevo == NULL)
		return (NULL);

	nuevo->str = strdup(str);
	nuevo->len = strlen(str);

	if (*head == NULL)
	{
		*head = nuevo;
		return (*head);
	}

	while (checker->next != NULL)
	{
		checker = checker->next;
	}

	checker->next = nuevo;

	return (checker->next);
}
