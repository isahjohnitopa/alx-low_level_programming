#define LIMIT 100

void display(void)
{
	int stack[LIMIT], top, i;

	if (top == -1)
	{
		printf("Strack is underflow\n")
	}
	else if (top > 0)
	{
		printf("The elements of the stack are:\n");
		for (i = top; i >= 0; i--)
			printf("%d\n", stack[i]);
	}
}
