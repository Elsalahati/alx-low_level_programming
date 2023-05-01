#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of the linked list
 * @h: pointer pointing to head node
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	/*listint_t *head_ptr = h; */
	int nodecount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
