#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: The list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t i, nodeCount = 0;

	for (i = 0; h != NULL; i++)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
