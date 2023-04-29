#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add new node at the beginning of the linked list
 * @head: pointer to the linked list
 * @str: string to add to the node
 * Return: address of the new added element, NULL otherwise
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
		
	for (len = 0; str[len] != '\0'; len++)
		;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
