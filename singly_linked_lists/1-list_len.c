#include "lists.h"

/**
* list_len - prints number of elements of a list
* @h: pointer to the list which we want the elements printed
*
* Return: number of nodes of the list
*/
size_t list_len(const list_t *h)
{
	size_t nb_nodes = 0;

	while (h)
	{
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}
