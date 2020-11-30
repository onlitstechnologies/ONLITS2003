#include<stdio.h>;
main()
{
	int m1,m2,m3,m4,m5,agg;
	printf("Input marks of5 subjects obtained by students:\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);	
	agg=m1+m2+m3+m4+m5;
	per=agg*(100.0/500.0);
	printf("Aggrwgate marks obtained by student = %d\n",agg);
	printf("percentage of student = %f%",per);
	getch();
}