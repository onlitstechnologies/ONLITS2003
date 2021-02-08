#include<stdio.h>
#include<stdlib.h>

typedef struct node_spec
{
	int info;				//data part
	
	struct node_spec *next;		//link part
}node;


int main()
{
	node *start, *ptr;
	int count=0, search_value;
	
	printf("Please enter some values below (-999 to stop):\n");
	
	start = (node *)malloc(sizeof(node));	//Creating the first node
	scanf("%d", &start->info);
	start->next = (node *)malloc(sizeof(node));
	ptr = start;
	
	//-----Taking input into the linked-list-------
	do
	{
		ptr = ptr->next;
		scanf("%d", &ptr->info);
		if(ptr->info == -999)		//Stopping condition
		{
			ptr->next = NULL;
		}
		else
		{
			ptr->next = (node *)malloc(sizeof(node));
		}
	}
	while(ptr->next != NULL);
	
	//-----Search a value in the linked list-------
	
	ptr = start;
	
	printf("Please enter the value to search: ");
	scanf("%d", &search_value);
	
	while(ptr->next != NULL || search_value<=ptr->info)
	{	
		if(ptr->info==search_value)
		{
			printf("%d found at node %d.\n", search_value, count);
			break;
		}
		ptr = ptr->next;
		count++;
	}
	
	if(ptr->next==NULL || search_value<=ptr->info)
	{
		printf("The list does not contain search value.\n");
	}
	
	printf("count=%d\n", count);
	
	return 0;
}
