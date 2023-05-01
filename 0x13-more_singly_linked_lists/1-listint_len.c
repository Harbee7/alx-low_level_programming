#include "lists.h"

/**
 * listint_len - returns the num of element in linked list
 * @h: linked list
 *
 * Return: num of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
