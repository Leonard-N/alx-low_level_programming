#include "lists.h"

size_t free_listint_safe(listint_t **h);
size_t looped_listint_count(listint_t *head);

/**
 * free_listint_safe - Frees a listint_t list
 * @h: listint_t double pointer
 *
 * Return: size_t
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp; 
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}
