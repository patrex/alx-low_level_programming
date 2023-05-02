#include "lists.h"

/**
 * listint_len - counts the number of elts in a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t lennodes = 0;

	while (h != NULL)
	{
		h = h->next;
		lennodes++;
	}
	return (lennodes);
}
