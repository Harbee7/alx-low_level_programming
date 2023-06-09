#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node data
 * if empty, it returns 0
 */

int pop_listint(listint_t **head)
{
	listint_t *j;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	j = (*head)->next;
	free(*head);
	*head = j;

	return (i);
}
