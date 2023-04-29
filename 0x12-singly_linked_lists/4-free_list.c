#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - frees the created linked list
 * @head: pointer to the linked list
 * Return: no return
 **/

void free_list(list_t *head)
{
	list_t *node_free;

	while (head != NULL)
	{
		node_free = head->next;
		free(head->str);
		free(head);
		head = node_free;
	}
}
