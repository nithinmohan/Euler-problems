#include<stdio.h>
populatefact(long long int fact[10])
{
	int i=0;
	fact[0]=1;
	for(i=1;i<10;i++)
	{
		fact[i]=fact[i-1]*i;
	}
}
main()
{
long long int fact[10];	
long long int i=10,temp,sum=0,totsum=0;
populatefact(fact);
while(i<999999)
{
	temp=i;
	while(temp)
	{
		sum+=fact[temp%10];
		temp/=10;
	}
	if(sum==i)
	totsum+=sum;
	sum=0;
	i++;
}
printf("%lld",totsum);
}
