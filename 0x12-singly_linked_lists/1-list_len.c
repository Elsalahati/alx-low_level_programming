#include <stdio.h>
#include "lists.h"

/**
 * list_len - count number of nodes
 * @h: pointer to node
 *
 * Return: number of nodes
 **/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
