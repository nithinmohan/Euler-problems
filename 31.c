#include<stdio.h>
int main()
{
long long int times[201],i;
	times[0]=1;
	long long int sum=0;
	for(i=1;i<=200;i++)
	{
	 if(i>=1)
	 sum+=(times[i-1]);
	  if(i>=2)
	 sum+=(times[i-2]);
	  if(i>=5)
	 sum+=(times[i-5]);
	  if(i>=10)
	 sum+=(times[i-10]);
	  if(i>=20)
	 sum+=(times[i-20]);
	  if(i>=50)
	 sum+=(times[i-50]);
	  if(i>=100)
	 sum+=(times[i-100]);
	  if(i>=200)
	 sum+=(times[i-200]);
		times[i]=sum;
		sum=0;
	}
	printf("%lld",times[2]);
	return 0;
}
