#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: a pointer to the head of a list_t list
 * @str: the string to be add to the list_t list
 *
 * Return: if the function fails - NULL
 * Otherwise - the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
}
