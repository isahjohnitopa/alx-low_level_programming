#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: A pointer to the head of the dlistint_t list
 *
 * Return: The number of the nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
