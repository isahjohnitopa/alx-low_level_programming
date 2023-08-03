#include "main.h"


/**
 * binary_to_uint - function that convert binary to unsigned int
 * @b: The pointer to the binary string
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		num += b[i] - '0';
	}
	return (num);
}
