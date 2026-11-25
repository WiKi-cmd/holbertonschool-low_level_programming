#include "lists.h"

/**
* add_node_end - adds new node at the end of a list_t list
* @head: pointer to first node of the list
* @str: string in the new node that we are adding
*
* Return: address of the new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int length = 0;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
