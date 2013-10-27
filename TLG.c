#include<stdio.h>
int abs(int a,int b)
{
	if((a-b)<0)
	return b-a;
	else return a-b;
}
int main()
{
	int no_t,diff=0,max=10000,s1,s2,winner,i=0,num;
	scanf("%d",&no_t);
	for(i=1;i<=no_t;i++)
	{
		scanf("%d",&s1);
		scanf("%d",&s2);
		if(abs(s1,s2)>diff)
		{
			diff=abs(s1,s2);
			if(s1>s2)
			num=1;
			else num=2;
		}
	}
	printf("%d %d\n",num,diff);
	return 0;
}
