#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of linked
 * list
 * @head: pointer to the first element on the list
 * @n: data to insert in the new element
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	while (j->next)
		j = j->next;

	j->next = i;

	return (i);
}
