#include<stdio.h>
main()
{
	long long int i=3,sum=1,adder=2,counter=0;
	while(i<=1001*1001)
	{
		sum=sum+i;
		counter++;
		if(counter==4)
		{
		adder+=2;
		counter=0;
		}
		i+=adder;
	}
	printf("%lld",sum);
}
