#include<stdio.h>

add(int a[1000],int b[1000])
{
	int i=0,carry=0,temp;
	for(i=0;i<1000;i++)
	{	
		temp=a[i];
		a[i]=(a[i]+b[i]+carry)%10;
		carry=(temp+b[i]+carry)/10;
	}
	if(carry)
	a[i]=carry;
}
copy(int a[1000],int b[1000])
{
	int i;
 for(i=0;i<1000;i++)
	{	
		a[i]=b[i];
	}	
}
main()
{
	int cur[1000]={0};
	int prev[1000]={0};
	int temp[1000]={0};
	cur[0]=1;
	int i=1;
	while(cur[999]==0)
	{
		copy(temp,cur);
		add(cur,prev);
		copy(prev,temp);
		i++;
	}
	printf("%d",i);
}
