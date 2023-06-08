#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory use by a list.
 * @head: the list to free.
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(tmp->str);
		free(tmp);
		tmp = tmp->next;
	}
}
