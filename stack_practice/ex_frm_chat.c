#include <stdio.h>

#define MAX_SIZE 5

typedef struct stack
{
	int data[MAX_SIZE];
	int top;
} Stack;

void init(Stack *stack)
{
	stack->top = -1;
}


int isEmpty(Stack *stack)
{
	return (stack->top == -1);
}


int isFull(Stack *stack)
{
	return (stack->top == MAX_SIZE - 1);
}


void push(Stack *stack, int value)
{
	if (isFull(stack))
	{
		printf("Stack overflow\n");
		return;
	}
	stack->data[++stack->top] = value;
}


int pop(Stack *stack)
{
	if (isEmpty(stack))
	{
		printf("Stack underflow\n");
		return (-1);
	}
	return (stack->data[stack->top--]);
}

int peek(Stack *stack)
{
	if (isEmpty(stack))
	{
		printf("Stack is empty\n");
		return (-1);
	}
	return (stack->data[stack->top]);
}

void display(Stack *stack)
{
	if (isEmpty(stack))
	{
		printf("Stack is empty\n");
		return;
	}
	
	while (!isEmpty(stack))
	{
		printf("%d \n", stack->data[stack->top--]);
	}
/*	printf("\n");*/
}

int main(void)
{
	Stack stack;
	int value, i = 1;
	init(&stack);
	
	while (!isFull(&stack))
	{
		printf("Enter a value to push\n");
		scanf("%d", &value);
		push(&stack, value);
	}


	printf("--------------------\n");

	printf("Peek: %d\n", peek(&stack));
	
	printf("--------------------\n");

	display(&stack);

	printf("--------------------\n");

	display(&stack);
	
	printf("--------------------\n");
	while (!isEmpty(&stack))
	{
		printf("No. %d be Popped is: %d\n", i, pop(&stack));
		i++;
	}

	return (0);
}
