void display(void)
{
	int i;
	struct node *pointer;

	pointer = temp;
	if (pointer == NULL)
		printf("Stack is underflow\n");
	else
	{
		printf("The elements of the stack are:\n");
		while (pointer != NULL)
		{
			printf("%d\n", pointer->data);
			pointer = pointer->next;
		}
	}
}
