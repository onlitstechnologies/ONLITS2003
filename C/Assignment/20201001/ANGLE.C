#include <math.h>

#define MAX 180
#define	PI 3.14
	main()
	{
	 int angle;
	 float x,y;
	 angle= 0;
		printf(  "Angle    Cos(angle)\n\n");
		while(angle <= MAX)
		{
			x= (PI/MAX)*angle;
			y= cos(x);
			printf("%15d %13.4f\n", angle, y);
			angle =angle +10;
		}


	return 0;
       }