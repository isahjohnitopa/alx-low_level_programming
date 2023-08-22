#define LIMIT 100

void push(void)
{
	int stack[LIMIT], top, element;
	
	if (top == LIMIT - 1)
		printf("Stack Overflow\n");
	else
	{
		printf("Enter the element to be inserted\n");
		scanf("&d", element);
		top++;
		stack[top] = element;
	}
}
