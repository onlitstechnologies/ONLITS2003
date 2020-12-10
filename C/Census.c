/*
	Program to accept name of a city, its population and its
	literacy level and store it in a file named Census.001
*/


#include<stdio.h>
#include<stdlib.h>

void menu();
void input();
void printlist();

struct census
{
	char city[30];
	long int pop;
	float ll;	//literacy level
}c;

int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	printf("CENSUS PROGRAM\n\n");
	printf("Select an option:\n");
	printf("1. Add a new record\n");
	printf("2. Print list\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			input();
			menu();
			break;
		case 2:
			printlist();
			menu();
			break;
		case 3:
			exit(0);
		default:
			printf("Invalid option! Please retry!\n");
	}
}

void input()
{
	FILE *fp;
	
	fp = fopen("Census.001","a");
	
	getchar();
	
	printf("Enter city: ");
	scanf("%[^\n]", c.city);
	
	printf("Enter population: ");
	scanf("%ld", &c.pop);
	
	printf("Enter Literacy Level: ");
	scanf("%f", &c.ll);
	
	fprintf(fp, "%s,%ld,%f\n", c.city, c.pop, c.ll);
	 
	fclose(fp);
}

void printlist()
{
	FILE *fp;
	
	fp = fopen("Census.001","r");
	
	while(fscanf(fp, "%[^,],%ld,%f\n", c.city, &c.pop, &c.ll) != EOF)
	{
		printf("%s,%ld,%f\n", c.city, c.pop, c.ll);
	}
	
	fclose(fp);
}
