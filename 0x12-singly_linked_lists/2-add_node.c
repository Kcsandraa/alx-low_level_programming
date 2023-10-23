#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of a list
 * @str: The string in the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[len] != '\0')
			len++;
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		new->len = len;
		new->next = *head;
		*head = new;
	}
	return (new);
}
