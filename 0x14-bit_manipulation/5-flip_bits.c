#include "main.h"

/**
 * flip_bits - Function that count the number of bits needed to be flipped
 *		to get from one number to another
 * @n: The number to be flipped
 * @m: The number to flip n to
 *
 * Return: Return the number of bits necessary to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int zot, bits = 0;

	zot = n ^ m;
	while (zot > 0)
	{
		bits += (zot & 1);
		zot >>= 1;
	}

	return (bits);
}
