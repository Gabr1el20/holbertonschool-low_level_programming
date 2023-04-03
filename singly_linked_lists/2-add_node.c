#include "lists.h"

/**
 * add_node - adds a new node
 * @head: address of the list
 * @str: New node.
 *
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo = malloc(sizeof(list_t));


	if (nuevo == NULL)
		return (NULL);

	nuevo->str = strdup(str);
	nuevo->len = strlen(str);

	nuevo->next = *head;

	*head = nuevo;

	return (*head);
}
