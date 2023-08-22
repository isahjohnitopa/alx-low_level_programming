#include <stdio.h>

#define MAX_SIZE 10

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

int main(void)
{
	Stack stack;
	init(&stack);

	push(&stack, 10);
	push(&stack, 20);
	push(&stack, 30);

	printf("Peek: %d\n", peek(&stack));
	
	printf("--------------------\n");

	while (!isEmpty(&stack))
		printf("After I Popped: %d\n", pop(&stack));

	return (0);
}
