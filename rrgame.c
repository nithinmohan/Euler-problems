#include<stdio.h>
int main()
{
	long long n,m,k,i,num,small=100001,ans;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	i=n;
	while(n--)
	{
		scanf("%d",&num);
		if(small>num)
		small=num;
	}
	if(i%2==0)
	{
		ans=1;
	}
	else
	{
	ans=((m-small)/k)+1;
	}
	printf("%d",ans);
	return 0;
}
