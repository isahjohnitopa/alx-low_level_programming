#include "lists.h"

/**
 * dlistint_len -count and return number of elements of a dlistint list.
 * @h: pointer to head of the list
 * Return: number of nodesin ithe list
 *
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
		return (size);

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
