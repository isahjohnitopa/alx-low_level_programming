#include "main.h"

/**
 * times_table - To print the 9 times tables stating with 0.
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			_putchar(n);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
