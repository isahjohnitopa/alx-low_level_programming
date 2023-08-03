#include "main.h"

/**
 * get_endianness - Function that checks for the endianness
 *
 * Return: If big-endian, return 0,
 *	If little-endian, return 1.
 */
int get_endianness(void)
{
	int numb = 1;
	char *endian = (char *)&numb;

	if (*endian == 1)
		return (1);

	return (0);
}
