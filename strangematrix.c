#include<stdio.h>
int main()
{
	long long tc,m,n,i,result=0;
	scanf("%d",&tc);
	while(tc--)
	{
	   scanf("%d",&n);
	   scanf("%d",&m);
	   for(i=0;i<m*n/2;i++)
	   {
	   	if(i/m==i%n && i/n==i%m)
	   				result++;
	   }
	   result=result*2;
	   i=m*n;
	   if(i/m==i%n && i/n==i%m)
	   				result++;
	   printf("%d\n",result);
	}
	return 0;
}
