#include "lists.h"

/**
 * dlistint_len - count the number of elements in a linked list
 * @h: the head of the dilistin_t list.
 *
 * Return: the number of the elements in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
