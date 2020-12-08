/*
	Balagurusamy - Exercise - 10.12
*/

#include<stdio.h>
#include<string.h>

void read_cities();
void display_list();
void sort_cities();
void sort_ll();
void sort_population();

struct census
{
	char city[20];			//20 bytes
	long population;		//8 bytes
	float literacy_level;	//4 bytes
}c[5];

//struct census c[5];	//Alternate way of declaring global structure variable


int main()
{
	read_cities();
	printf("Cities list before sorting:\n");
	display_list();
	printf("Cities list sorted by cities:\n");
	sort_cities();
	display_list();
	printf("Cities list sorted by literacy level:\n");
	sort_ll();
	display_list();
	printf("Cities list sorted by population:\n");
	sort_population();
	display_list();
	return 0;
}

void read_cities()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter city name: ");
		scanf("%[^\n]", c[i].city);
		printf("Enter population: ");
		scanf("%ld", &c[i].population);
		printf("Enter literacy level: ");
		scanf("%f", &c[i].literacy_level);
		getchar();
	}
}

void sort_cities()
{
	struct census temp;
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(strcmp(c[i].city,c[j].city)>0)
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}	
		}
	}
}

void sort_ll()
{
	struct census temp;
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(c[i].literacy_level<c[j].literacy_level)
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}	
		}
	}
}

void sort_population()
{
	struct census temp;
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(c[i].population<c[j].population)
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}	
		}
	}
}


void display_list()
{
	int i;
	printf("---------------------------------------------------\n");
	printf("%-15s%-15s%-15s\n","Cities","Population","Literacy Level");
	printf("---------------------------------------------------\n");
	for(i=0; i<5; i++)
	{
		printf("%-15s%-15ld%-15.2f\n", c[i].city, c[i].population, c[i].literacy_level);
	}
	printf("---------------------------------------------------\n");
}
