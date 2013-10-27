#include<stdio.h>
ispal(long long int a,int base)
{
	int i=0,temp=a;
	while(a)
	{
		i=i*base+(a%base);
		a/=base;
	}
	return i==temp;
}
long long int bin(long long int a)
{
	long long int i=1,k=0;
	//i=1 to avoid zero being neglected
	while(a)
	{
		if(a%2)
		i=i*10+1;
		else i=i*10+0;
		a/=2;
	}
	while(i)
	{
		k=k*10+(i%10);
		i/=10;
	}
	return (k-1)/10;
}
main()
{
	long long int a=1,sum=0;
	for(a=1;a<=1000000;a+=2)
	{
		if(ispal(a,10)&&ispal(a,2))
		{
		sum+=a;
		//printf("%lld\n",a);
	}
	
	}
	printf("%lld\n",sum);
}
