#include "lists.h"
/**
 * add_node - add new node at the begininning of list
 * @head: pointer to the list
 * @str: the string to add
 * Return: the address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (str[len] != '\0')
		len++;
	node->len = len;
	if (*head != NULL)
		node->next = *head;
	if (*head == NULL)
		node->next = NULL;
	*head = node;
	return (*head);
}
