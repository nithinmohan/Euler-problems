#include<stdio.h>
int main()
{
	long long n,i,k=0;
	float a[1000];
	scanf("%d",&n);
	while(k<n)
	{
		scanf("%d",&i);
		a[k]=i*1.41421356327;
		k++;
	}
	k=0;
	while(k<n)
	{
	printf("%f\n",a[k]);
	k++;
	}
}
