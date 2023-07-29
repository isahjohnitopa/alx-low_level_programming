#include "lists.h"

/**
 * get_dlistint_at_index - Return the nth node of a dlistint_t list.
 * @head: pointer to heat of the list
 * @index: index of the node to search for, starting from 0
 *
 * Return: nth nodeor null
 **/
dlistint_t *get_dlistint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
		return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
