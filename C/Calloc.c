#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char name[25];
	float age;
	long int id_num;
}record;


int main()
{
	record *st_ptr, *p;	

	int class_size;
	
	printf("Enter class size: ");
	scanf("%d", &class_size);		

	st_ptr = (record *) calloc(class_size, sizeof(record));
	
	for(p=st_ptr; p<st_ptr + class_size; p++)
	{
		getchar();
		printf("Enter student name: ");
		scanf("%[^\n]", (*st_ptr).name);
	
		printf("Enter age: ");
		scanf("%f", &st_ptr->age);
	
		printf("Enter Id Number: ");
		scanf("%ld", &st_ptr->id_num);
	}	
	
	printf("\nYou had entered the following data:\n\n");

	for(p=st_ptr; p<st_ptr + class_size; p++)
	{
		printf("%-15s%-3c%s\n", "Student Name", ':', st_ptr->name);
		printf("%-15s%-3c%1.2f\n", "Age", ':', st_ptr->age);
		printf("%-15s%-3c%ld\n", "Id Number", ':', st_ptr->id_num);
	}
	
	free(st_ptr);
		
	return 0;
}



/*
	typedef struct file_struct 
	{
	
	}FILE;
	
	struct file_struct *fp; 
	FILE *fp
*/
