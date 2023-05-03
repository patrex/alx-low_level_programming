#include "lists.h"

/**
 * print_listint - prints the elts of a list and returns the count
 * @h: head of a list.
 *
 * Return: the count of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t lennodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		lennodes++;
	}
	return (lennodes);
}
