#include<stdio.h>
#include<math.h>
main()
{
	float a,b,limit=100000,ar,sum=0;
	for(b=1;b<limit;b++)
	{
	 ar=10/pow(10,1/b);	
	 sum+=((int)(10-ar));
	}
	printf("%f",sum);
}
