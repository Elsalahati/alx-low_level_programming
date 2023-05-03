#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the end of the linked list
 * @head: head pointer pointing to the next node
 * @n: new node first element to be added
 * Return: address of new elements, NULL otherwise
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ll_ptr;
	listint_t *end_node;

	*head = NULL;
	end_node = malloc(sizeof(listint_t));
	end_node->n = n;
        end_node->next = NULL;
	ll_ptr = *head;
	while (ll_ptr->next != NULL)
	{
		ll_ptr = ll_ptr->next;
	}
	ll_ptr->next = end_node;
	return (end_node);
	}
	
	{
		return ('\0');
	}
}
