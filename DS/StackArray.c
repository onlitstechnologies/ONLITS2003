#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int stack[MAX];
int size=0;

void menu();
void push();
void pop();
void display_stack();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	printf("Select an option:\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display_stack();
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid Option!\n");
			menu();
	}
}

void push()
{
	int no;
	printf("Enter a number: ");
	scanf("%d", &no);
	
	if(size==0)
	{
		stack[0] = no;
		size++;
	}
	else
	{
		for(int i=0; i<size; i++)
		{
			stack[size-i] = stack[size-i-1];
		}
		
		stack[0] = no;
		size++;
	}
	
	menu();
}

void pop()
{
	for(int i=0; i<size; i++)
	{
		stack[i] = stack[i+1];
	}
	size--;
	
	menu();
}

void display_stack()
{
	if(size==0)
	{
		printf("Stack is empty!\n");
	}
	else
	{
		printf("The elements of stack are as follows:\n");
		for(int i=0; i<size; i++)
		{
			printf("%d\n", stack[i]);	
		}
	}
	menu();
}
