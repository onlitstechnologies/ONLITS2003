#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int stack[MAX];
int size=0;

void menu();
void enqueue();
void dequeue();
void display_queue();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	printf("Select an option:\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display_queue();
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid Option!\n");
			menu();
	}
}

void enqueue()
{
	int no;
	
	if(size==MAX)
	{
		printf("Queue is already full!\n");
		menu();
	}
	printf("Enter a number: ");
	scanf("%d", &no);
	
	stack[size] = no;
	size++;
		
	menu();
}

void dequeue()
{
	if(size==0)
	{
		printf("Queue is already empty!\n");
		menu();
	}
	
	for(int i=0; i<size; i++)
	{
		stack[i] = stack[i+1];
	}
	size--;
	
	menu();
}

void display_queue()
{
	if(size==0)
	{
		printf("Queue is empty!\n");
	}
	else
	{
		printf("The elements of queue are as follows:\n");
		for(int i=0; i<size; i++)
		{
			printf("%d\n", stack[i]);	
		}
	}
	menu();
}
