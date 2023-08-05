#include "main.h"

/**
 * main - main function
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j;

	while (i < argc)
	{
		for (j = 0; argv[i][j]; j++)
			_putchar(argv[i][i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
