#include<stdio.h>
populatefpower(long long int fpower[10])
{
	int i=0;
	for(i=0;i<10;i++)
	fpower[i]=i*i*i*i*i;
}
main()
{
long long int fpower[10];	
long long int i=10,temp,sum=0,totsum=0;
populatefpower(fpower);
while(i<999999)
{
	temp=i;
	while(temp)
	{
		sum+=fpower[temp%10];
		temp/=10;
	}
	if(sum==i)
	totsum+=sum;
	sum=0;
	i++;
}
printf("%lld",totsum);
}
