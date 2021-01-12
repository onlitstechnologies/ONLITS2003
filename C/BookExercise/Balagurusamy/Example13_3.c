#include<stdio.h>
#include<stdlib.h>

struct linked_list		//self-referential structure
{
	int number;
	struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
	node *head;		//Used to point to the first node
	void create(node *p);
	void print(node *p);
	int count(node *p);
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	printf("\nThe list contains following items:\n");
	print(head);
	printf("\n");
	printf("\nNumber of items = %d\n", count(head));
	
	return 0;
}


void create(node *list)
{
	printf("Input a number\n");
	printf("(type -999 at end)");
	scanf("%d", &list->number);
	
	if(list -> number == -999)
	{
		list->next =NULL;
	}
	else //create next node
	{
		list->next = (node *)malloc(sizeof(node));
		create(list->next);			//Recursion
	}
}

void print(node *list)
{
	if(list->next != NULL)
	{
		printf("%d\n", list->number); //print current item
		
		if(list->next != NULL)
		{
			//printf("%d", list->next->number);
			print(list->next);	//move to next item		(recursion)
		}
	}
}

int count(node *list)
{
	if(list->next == NULL)
		return(0);
	else
		return (1 + count(list->next));		//recursion
}
