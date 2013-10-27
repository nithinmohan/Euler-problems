#include<stdio.h>
main()
{
 float i,j,k;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			for(k=1;k<10;k++)
			{
				if((j*10+i)/(k*10+i)==j/k&&j/k<1)
					printf("%f %f\n",(j*10+i),(k*10+i));
				if((i*10+j)/(k*10+i)==j/k&&j/k<1)
					printf("%f %f\n",(i*10+j),(k*10+i));
				if((j*10+i)/(i*10+k)==j/k&&j/k<1)
					printf("%f %f\n",(j*10+i),(i*10+k));
				if((i*10+j)/(i*10+k)==j/k&&j/k<1)
				printf("%f %f\n",(i*10+j),(i*10+k));
			}
		}
	}
}
