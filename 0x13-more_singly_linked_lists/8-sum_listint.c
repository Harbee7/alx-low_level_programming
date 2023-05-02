#include "lists.h"

/**
 * sum_listint - cal the sum of all data in a linked list
 * @head: first node in the linked list
 *
 * Return: the sum of all in the data in the listint_t
 * list, and if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *j = head;

	while (j)
	{
		sum += j->n;
		j = j->next;
	}

	return (sum);
}
