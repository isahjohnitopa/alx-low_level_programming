#include <stdio.h>
#include <stdlib.h>

void push(void);
void pop(void);
void display(void);


struct node
{
	int data;
	struct node *next;
};

struct node *temp;

int main(void)
{
	int choice;

	printf("\nWelcome to DataFlair tutorial!\n\n");
	printf("LINKED LIST IMPLEMENTATION USING STACK\n\n");

	do
	{
		printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Sorry, invalid choice!\n");
				break;
		}
	} while (choice != 4);

	return (0);
}

void push(void)
{
	int data;
	struct node *ptr;

	ptr = malloc(sizeof(struct node));
	if (ptr == NULL)
		printf("Stack overflow\n");
	else
	{
		printf("Enter the element to be inserted: ");
		scanf("%d", &data);
		
		if (temp == NULL)
		{
			pointer->data = data;
			pointer 
		}
	}
}
