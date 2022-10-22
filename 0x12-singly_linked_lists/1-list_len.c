#include "lists.h"

/**
 * list_len - find the number of linked list_t list.
 * @h: the linked list_t list
 *
 * Return: the number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

}