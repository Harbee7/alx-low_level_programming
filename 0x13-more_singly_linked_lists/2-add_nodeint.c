#include "lists.h"

/**
 * *add_nodeint - adds a new node at a beginning of a
 * linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *j;

	j = malloc(sizeof(listint_t));
	if (!j)
		return (NULL);

	j->n = n;
	j->next = *head;
	*head = j;

	return (j);
}
