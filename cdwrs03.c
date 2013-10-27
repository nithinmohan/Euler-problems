#include<stdio.h>
int h[10000],i=0,l[10000];
	long long n,limit;
int findnum(int k)
{
	int n=0,j=0;
	while(j<k)
	{
		if(h[j]<h[k])
		n++;
		j++;
	}
	return n;
}
int findnext(int k)
{
	i=k;
	int max=0;
	int maxi=0;
	while(i>=0)
	{
	
		if(((l[k]-1)==l[i])&&(h[i]<h[k]))
		return i;
		if((l[i]>max)&&(h[i]<h[k]))
		{
			max=l[i];
			maxi=i;
		}
		i--;
	}
	return maxi;
}
int findmax()
{
 	int	max=h[n-1];
 	int maxi=n-1;
	for(i=n-1;i>=0;i--)
	{
		if(max<h[i])
		{
			max=h[i];
			maxi=i;
		}
	}
	return maxi;
}
int main()
{
scanf("%d",&n);
	limit=n;
	i=0;
	while(limit--)
	{
		scanf("%d",&h[i]);
		i++;
	}
	i=0;
	limit=n;
	while(i<limit)
	{
		l[i]=findnum(h[i]);
		i++;
	}
	int fmax=findmax();
	int p=fmax;
	int count=1;
	while(p!=0)
	{
		p=findnext(p);
		count++;
	}
	printf("%d",count);
	return 0;
	
}
