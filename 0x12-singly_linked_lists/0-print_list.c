#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: The head of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i, tt = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str !=  NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		tt++;
		h = h->next;
	}
	return (tt);
}
