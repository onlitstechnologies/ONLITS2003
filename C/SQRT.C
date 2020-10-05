/*
	PROGRAM TO FIND SQAREROOT OF A GIVEN NUMBER
*/
#include<math.h>

main()
{
	float n, sq;

	clrscr();

	printf("Please enter a number: ");
	scanf("%f", &n);

	sq = sqrt(n);

	printf("The square root of %f is %f.", n, sq);

	getch();

	return 0;
}

/*
	2 = 1.414
	3 = 1.732
*/