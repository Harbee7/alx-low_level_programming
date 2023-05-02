#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked
 * list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we are looking for
 * if the node doesnt exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j = head;

	while (j && i < index)
	{
		j = j->next;
		i++;
	}

	return (j ? j : NULL);
}
