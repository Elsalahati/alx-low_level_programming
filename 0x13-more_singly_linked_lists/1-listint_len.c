#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gets the number of elements in a linked list
 * @h: head pointer pointing to the next node
 * Return: number of elements in the list
 **/

size_t listint_len(const listint_t *h)
{
	int elem_count = 0;

	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}
	return (elem_count);
}
