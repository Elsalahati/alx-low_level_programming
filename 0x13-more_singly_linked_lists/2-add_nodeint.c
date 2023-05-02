#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds new node at the beginning of the linked list
 * @head: head pointer pointing to the next node
 * @n: new node first element to be added
 * Return: address of new elements, NULL otherwise
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_ptr;

	new_node_ptr = malloc(sizeof(listint_t));
	new_node_ptr->n = n;
	new_node_ptr->next = *head;
	*head = new_node_ptr;
	return (*head);
	if (*head == NULL)
	{
		return ('\0');
	}
}
