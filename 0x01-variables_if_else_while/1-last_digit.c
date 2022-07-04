#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -> assign a random number to the variable n each time it is executed.
* print the last digit of the number stored in the variable n.
* Return: always 0
*/
int main(void)
{
	int n;
	int lstnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstnum = n % 10;
	if (lstnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 ", n, lstnum);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0 ", n, lstnum);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0 ", n, lstnum);
	}
	printf("\n");

	return (0);
}
