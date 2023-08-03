#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at
 *		given index
 * @index: The index
 * @n: the bit
 *
 * Return: Return 1 on success and -1 of failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}
