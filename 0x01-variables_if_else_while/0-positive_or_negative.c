#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -> assign a random number to the variable n each the it is
*executed and prits out based on a condition
*Return : always 0
*/
// this is function decleration with it return type
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
