#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - To prints all the numbers from n to 98.
 * Return: always return 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
