#include "lists.h"

/**
* add_node - adds new node at the beginning of a list_t list
* @head: pointer to first node of the list
* @str: string in the new node that we are adding
*
* Return: address of the new element or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
