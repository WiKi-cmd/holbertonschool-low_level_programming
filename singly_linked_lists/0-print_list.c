#include "lists.h"

/**
* print_list - prints all elements of a list
* @h: pointer to the list which we want the elements printed
*
* Return: number of nodes of the list
*/
size_t print_list(const list_t *h)
{
	size_t nb_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}
